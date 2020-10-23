#include <stdio.h>
#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>

const int SCREEN_W = 960;
const int SCREEN_H = 540;

const int GRASS_H = 60;

const int NAVE_W = 100;
const int NAVE_H = 50;

const int ALIEN_W = 50;
const int ALIEN_H = 25;

const int BULLET_W = 5;
const int BULLET_H = 5;

const float FPS = 100;

typedef struct Nave
{
	float x;
	float vel;
	int dir, esq;
	ALLEGRO_COLOR cor;

} Nave;

typedef struct Alien
{
	float x, y;
	float x_vel, y_vel;
	ALLEGRO_COLOR cor;

} Alien;

typedef struct Bullet
{
	float cx, cy;
	float r;
	float y_vel;
	int shot;
	ALLEGRO_COLOR cor;

} Bullet;

void initNave( Nave *nave)
{
	nave->x = SCREEN_W/2;
	nave->vel = 1;
	nave->dir = 0;
	nave->esq = 0;
	nave->cor = al_map_rgb(248, 150, 30);
}

void initAlien( Alien *alien )
{
	alien->x = 0;
	alien->y = 0;
	alien->x_vel = 1;
	alien->y_vel = ALIEN_H;
	alien->cor = al_map_rgb(rand()%256, rand()%256, rand()%256);
}

void initBullet( Bullet *bullet )
{
	bullet->cx = 0;
	bullet->cy = BULLET_H;
	bullet->r = BULLET_W;
	bullet->y_vel = BULLET_H;
	bullet->shot = 0;
	bullet->cor = al_map_rgb(249, 65, 68);
}


void draw_scenario()
{
	al_clear_to_color(al_map_rgb(0, 0, 0));
	al_draw_filled_rectangle(0, (SCREEN_H - GRASS_H), 
							 SCREEN_W, SCREEN_H, 
							 al_map_rgb(67, 170, 139));
}

void draw_nave(Nave nave)
{
	float y_base = SCREEN_H - (GRASS_H/2);
	al_draw_filled_triangle(nave.x, (y_base - NAVE_H), 
							 (nave.x - NAVE_W/2), y_base,
   							 (nave.x + NAVE_W/2), y_base, 
							 nave.cor);
}

void draw_alien(Alien alien)
{
	al_draw_filled_rectangle(alien.x, alien.y, 
							 (alien.x + ALIEN_W), (alien.y + ALIEN_H), 
							 alien.cor);
}

void update_nave( Nave *nave)
{
	if(nave->dir && nave->x + nave->vel <= SCREEN_W)
	{
		nave->x += nave->vel;
	}
	if(nave->esq && nave->x - nave->vel >= 0)
	{
		nave->x -= nave->vel;
	}
}

void update_alien( Alien *alien)
{
	if( alien->x + ALIEN_W + alien->x_vel > SCREEN_W || alien->x + alien->x_vel < 0)
	{
		alien->y += alien->y_vel;
		alien->x_vel *= -1;
	}
	alien->x += alien->x_vel;
}

int colisao_alien_solo( Alien alien)
{
	if( alien.y + ALIEN_H > SCREEN_H - GRASS_H)
	{
		return 1;
	}
	return 0;
}

void draw_bullet( Bullet bullet, Nave nave)
{
	al_draw_filled_circle((bullet.cx + nave.x), (bullet.cy + nave.x - GRASS_H/2), 
						  BULLET_W, 
						  bullet.cor);
}

void update_bullet( Bullet *bullet)
{
	if( bullet->shot == 1 )
	{
		bullet->cy -= bullet->y_vel;
	}
}

int main()
{
    ALLEGRO_DISPLAY *display = NULL;
	ALLEGRO_EVENT_QUEUE *event_queue = NULL;
    ALLEGRO_TIMER *timer = NULL;

    //inicializa o Allegro
	if(!al_init()) {
		fprintf(stderr, "failed to initialize allegro!\n");
		return -1;
	}

	//inicializa o módulo de primitivas do Allegro
    if(!al_init_primitives_addon()){
		fprintf(stderr, "failed to initialize primitives!\n");
        return -1;
    }

    //cria uma tela com dimensoes de SCREEN_W, SCREEN_H pixels
	display = al_create_display(SCREEN_W, SCREEN_H);
	if(!display) {
		fprintf(stderr, "failed to create display!\n");
		// al_destroy_timer(timer);
		return -1;
	}

    //cria a fila de eventos
	event_queue = al_create_event_queue();
	if(!event_queue) {
		fprintf(stderr, "failed to create event_queue!\n");
		al_destroy_display(display);
		al_destroy_timer(timer);
		return -1;
	}

    //cria um temporizador que incrementa uma unidade a cada 1.0/FPS segundos
    timer = al_create_timer(1.0 / FPS);
    if(!timer) {
		fprintf(stderr, "failed to create timer!\n");
		return -1;
	}

    //instala o teclado
	if(!al_install_keyboard()) {
		fprintf(stderr, "failed to install keyboard!\n");
		return -1;
	}
	
	//instala o mouse
	if(!al_install_mouse()) {
		fprintf(stderr, "failed to initialize mouse!\n");
		return -1;
	}

    //registra na fila os eventos de tela (ex: clicar no X na janela)
	al_register_event_source(event_queue, al_get_display_event_source(display));
    //registra na fila os eventos de tempo: quando o tempo altera de t para t+1
	al_register_event_source(event_queue, al_get_timer_event_source(timer));
    //registra na fila os eventos de teclado (ex: pressionar uma tecla)
	al_register_event_source(event_queue, al_get_keyboard_event_source()); 

	Nave nave;
	initNave(&nave);

	Alien alien;
	initAlien(&alien);

	Bullet bullet;
	initBullet(&bullet);

    //inicia o temporizador
	al_start_timer(timer);

    int playing = 1;
	while(playing) {

        //atualiza a tela (quando houver algo para mostrar)
	    al_flip_display();

		ALLEGRO_EVENT ev;
		//espera por um evento e o armazena na variavel de evento ev
		al_wait_for_event(event_queue, &ev);

		//se o tipo de evento for um evento do temporizador, ou seja, se o tempo passou de t para t+1
		if(ev.type == ALLEGRO_EVENT_TIMER) {

			draw_scenario();
			
			update_nave(&nave);
			draw_nave(nave);

			update_alien(&alien);
			draw_alien(alien);

			update_bullet(&bullet);
			draw_bullet(bullet, nave);

			playing = !colisao_alien_solo(alien);


			//atualiza a tela (quando houver algo para mostrar)
			al_flip_display();
			
			if(al_get_timer_count(timer)%(int)FPS == 0)
				printf("\n%d segundos se passaram...", (int)(al_get_timer_count(timer)/FPS));
		}

        //se o tipo de evento for o fechamento da tela (clique no x da janela)
		else if(ev.type == ALLEGRO_EVENT_DISPLAY_CLOSE) {
			playing = 0;
		}

        //se o tipo de evento for o fechamento da tela (clique no x da janela)
		else if(ev.type == ALLEGRO_EVENT_DISPLAY_CLOSE) {
			playing = 0;
		}

		//se o tipo de evento for um pressionar de uma tecla
		else if(ev.type == ALLEGRO_EVENT_KEY_DOWN) {
			//imprime qual tecla foi
			printf("\ncodigo tecla: %d", ev.keyboard.keycode);
			
			switch (ev.keyboard.keycode)
			{
				case ALLEGRO_KEY_A :
					nave.esq = 1;
				break;

				case ALLEGRO_KEY_D :
					nave.dir = 1;
				break;

				case ALLEGRO_KEY_TAB :
				  bullet.shot = 1;
				break;
			}
		}

		else if(ev.type == ALLEGRO_EVENT_KEY_UP) {
			//imprime qual tecla foi
			printf("\ncodigo tecla: %d", ev.keyboard.keycode);
			
			switch (ev.keyboard.keycode)
			{
				case ALLEGRO_KEY_A :
					nave.esq = 0;
				break;

				case ALLEGRO_KEY_D :
					nave.dir = 0;
				break;
			}
		}
    }

    //procedimentos de fim de jogo (fecha a tela, limpa a memoria, etc)
	
	al_destroy_timer(timer);
	al_destroy_display(display);
	al_destroy_event_queue(event_queue);

    return 0;
}