#include<stdio.h>

void main()
{
    // declarar variaveis
    float litrosConsumidos, kmPercorridos, custoLitro;

    // questionar distância e litros percorridos
    printf("Insira os litros consumidos: ");
    scanf("%f", &litrosConsumidos);
    printf("Insira os kms percorridos: ");
    scanf("%f", &kmPercorridos);
    printf("Insira o custo p/litro do combustivel: ");
    scanf("%f", &custoLitro);
    
    // calcular consumo 
    float consumo= (litrosConsumidos/kmPercorridos) * 100;
    // calcular custo total viagem
    float custoFinal= litrosConsumidos* custoLitro;

    // apresentar resultado
    printf("Consumo foi : %.2f l/100km \n", consumo);
    printf("Custo final da viagem: %.1f euros \n", custoFinal);
}