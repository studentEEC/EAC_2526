#include<stdio.h>

void main()
{
    // declarar variaveis 
    float nota1, nota2;

    /* 
     interação com utilizador
     pedir valor da nota 1
     pedir valor nota 2 
    */
   printf("Insira nota 1: \n");
   scanf("%f", &nota1);
   printf("Insira nota 2: \n");
   scanf("%f", &nota2);
    
    // calcular média das notas
    float media;
    media= (nota1+nota2)/2;

    //apresentar resultado da média
    printf("Media das notas: %.2f", media);
}