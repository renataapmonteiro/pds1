// Exercício 1: Produto Escalar

// Escreva um programa em C que recebe dois arranjos de números reais  e  e a dimensão  dos dois arranjos e que 
// retorna o produto escalar de  e . O produto escalar de dois arranjos é dado pela seguinte expressão: 
// Assuma que  é menor que o número máximo de elementos do arranjo (por exemplo, 100). 
// Para testar, preencha cada vetor com um único valor.

// Exercício 2: Fibonacci

// A sequência de Fibonacci pode ser definida como:

// fib(0) = 1
// fib(1) = 1
// fib(n) = fib(n-1) + fib(n-2), para n>2

// Implemente um programa que calcule a série de Fibonacci e armazene em um vetor cada elemento da série, de 
// forma que a posição 0 armazene o termo 0, a posição 1 o termo 1, e assim por diante. Seu programa deve receber do 
// usuário um número entre 0 e 1000 e imprimir o termo correspondente ao número recebido. O usuário deve ser capaz de 
// entrar com vários números interativamente em uma mesma execução. O programa termina quando o usuário entrar com um 
// número negativo ou maior que 1000. Dica: se o tipo int for insuficiente para armazenar todos os elementos da série, 
// use outro tipo de dados.


// Exercício 3: Média dos elementos de um vetor

// Escreva uma função em C que recebe um vetor de números reais  e número de elementos  armazenados em  e que retorna 
// a média dos  elementos armazenados em . O vetor deve ser preenchido com números aleatórios através de uma outra função. 
// Para gerar números aleatórios, use a função drand48() no Linux, ou a função rand() no Windows, da biblioteca stdlib.h.

 
// Exercício 4: Intercalação de vetores

// Faça um programa que leia 2 vetores  e  de 10 elementos de cada um. Intercale os elementos desses 2 vetores 
// formando assim, um novo vetor  de 20 elementos, onde, nas posições ímpares de , estejam os elementos de  e, nas 
// posições pares, os elementos de . Exemplo: Se  e , então . Imprimir o vetor .


// Exercício 5: Inverso de um vetor

// Faça um programa para ler um vetor  de  elementos e gerar um outro vetor com esses  elementos em ordem inversa. 
// Exemplo: Se , deverá ser gerado um vetor . O valor de  é lido pelo teclado.


// Exercício 6: União de vetores

// Faça um programa para preencher dois vetores  e  de 60 posições com valores aleatórios entre  e . 
// Imprima a conjunto união desses dois vetores. Curiosidade: leia sobre o paradoxo do aniversário.


// Exercício 7: Teste da Função rand()

// Uma boa função para geração de números aleatórios deve gerar valores com igual probabilidade, i.e., se 
// eu quero gerar 100 valores entre 1 e 10, o número de vezes que cada número é gerado deve ser próximo de 10.
//  Assim, nesta prática você deve criar um programa para testar a qualidade da função rand() da linguagem C. 
//  Para isso, gere  números aleatórios entre 0 (inclusive) e 999 (inclusive) e conte quantas vezes cada número foi 
//  gerado. Imprima a diferença entre a maior e a menor contagem. Exemplo: se o número 83 foi aquele que mais vezes 
//  foi gerado, com 5315 gerações, e o número 762 foi aquele que menos vezes foi gerado, com 4802 gerações, então seu 
//  programa deve imprimir .



// Dica: crie um vetor de inteiros de 1000 posições para armazenar quantas vezes cada número (entre 0 e 999) é gerado. 
// Assim, cada vez que você gerar aleatoriamente o número , faça vetor_contagem[k]++. Exemplo: se você gerar o número 888,
// faça vetor_contagem[888]++. No final, vetor_contagem[k] conterá o número de vezes que o número  foi gerado.

// DESAFIO PARA OS FORTES: Além da diferença, imprimir também o desvio padrão das contagens. Para entender o que é o 
// desvio padrão e como ele é calculado, consulte a Wikipedia ou qualquer site disponível na Internet.
