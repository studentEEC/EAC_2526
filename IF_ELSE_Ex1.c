#include<stdio.h>

void main()
{
    int numero;

    printf("Insira um numero inteiro: ");
    scanf("%d", &numero);
    
    if(numero%2 == 0) // numeros divisiveis por 2 é PAR
    {
        printf("Numero inserido PAR");
    }
    else
    {
        printf("Numero inserido IMPAR");
    }
}