#include<stdio.h>

void main()
{
    // declarar variaveis
    float litrosConsumidos, kmPercorridos;

    // questionar distância e litros percorridos
    printf("Insira os litros consumidos: ");
    scanf("%f", &litrosConsumidos);
    printf("Insira os kms percorridos: ");
    scanf("%f", &kmPercorridos);
    
    // calcular consumo 
    float consumo= (litrosConsumidos/kmPercorridos) * 100;

    // apresentar resultado
    printf("Consumo foi : %.2f l/100km", consumo);
}