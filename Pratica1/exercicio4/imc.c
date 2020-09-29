int imcPCalc(){
    float oliviaH = 1.76;
    float brutusH = 1.84;

    float oliviaP = 45;
    float brutusP = 122;

    float imcOlivia = oliviaP /(oliviaH*oliviaH);
    float imcBrutus = brutusP /(brutusH*brutusH);
    
    float ImcSaudavel = 18.5;

    float PesoSaudavelOlivia = ImcSaudavel * (oliviaH*oliviaH);
    float PesoSaudavelBrutus = ImcSaudavel * (brutusH*brutusH);

    printf("O IMC do Brutus %c %.2f \n", 130, imcBrutus);
    printf("O IMC da Olivia %c %.2f \n", 130, imcOlivia);
    printf("O Peso ideal do Brutus %c %.2f\n", 130, PesoSaudavelBrutus);
    printf("O Peso ideal da Olivia %c %.2f\n", 130, PesoSaudavelOlivia);

    float pesoNecOlivia = oliviaP - PesoSaudavelOlivia;
    float pesoNecBrutus = brutusP - PesoSaudavelOlivia;

    if(pesoNecOlivia != 0)
    {
       if(pesoNecOlivia <0)  
        printf("O Peso a ganhar da Olivia %c de aproximadamente %.2f\n", 130, pesoNecOlivia*(-1));
        
        else if( pesoNecOlivia > 0)
        printf("O Peso a perder da Olivia %c de aproximadamente %.2f\n", 130, pesoNecOlivia);
    };

    if(pesoNecBrutus != 0)
    {
        if(pesoNecBrutus < 0)
        printf("O Peso a ganhar do Brutus %c de aproximadamente %.2f\n", 130, pesoNecBrutus*(-1));

        else if(pesoNecBrutus> 0)
        printf("O Peso a perder do Brutus %c de aproximadamente %.2f\n", 130, pesoNecBrutus);
    }

}