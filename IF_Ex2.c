#include<stdio.h>

void main()
{
    // declarar variaveis
    float salarioMinimo = 870;
    float taxa = 0.035; //3.5%
    float salarioFunc;

    // interação com user
    printf("Insira salario do funcionario: ");
    scanf("%f", &salarioFunc);

    // 
    float sobretaxaIRS = 0;
    if(salarioFunc > salarioMinimo)
    {
        sobretaxaIRS = (salarioFunc-salarioMinimo)*taxa;
    }

    printf("Sobretaxa IRS : %.1f euros", sobretaxaIRS);
}