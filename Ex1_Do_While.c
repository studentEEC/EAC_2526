#include<stdio.h>

void main()
{
    int numero, contador=0;
    do
    {  // 2 5 10 7 9 8 -2
        printf("Insira um numero natural (N0)");
        scanf("%d", &numero);

        if(numero> 0 && numero%2 ==0)
        {
            contador++;
            //contador= contador+1;
        }
    }
    while(numero>=0);   
    printf("Foram inseridos %d numeros pares", contador);
            //Foram inseridos X numeros pares
}