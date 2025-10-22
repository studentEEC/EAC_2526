#include<stdio.h>

int main()
{
    float taxa, valorEuro;
    char moeda [10]; // conjunto caracteres

    printf("Insira valor em euros: \n");
    scanf("%f", &valorEuro);
    printf("Insira moeda a converter\n ");
    scanf("%s", &moeda);
    printf("Insira taxa conversão: \n");
    scanf("%f", &taxa);

    float valorConvertido = valorEuro * taxa;

    printf("Valor convertido : %.2f %s", valorConvertido, moeda);
}
