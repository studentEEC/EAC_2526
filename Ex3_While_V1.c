#include<stdio.h>
void main()
{
    float temperatura, tempMax = -100, somatorioTemps = 0 ;
    int nrDias;
    int contadorDias=0;

    // o utilizador define o nrDias 
    printf("Insira o numero de dias a registar: ");
    scanf("%d", &nrDias); 

    while (contadorDias< nrDias) 
    {
        printf("Insira a temperatura: ");
        scanf("%f", &temperatura);
        // encontrar temperatura maxima
        if (temperatura> tempMax)
        {
            tempMax = temperatura;
        }
        // soma das temperaturas
        somatorioTemps = somatorioTemps + temperatura;
        contadorDias++; 
    }

    float mediaTemp = somatorioTemps / nrDias;

    printf("A media temperatura em %d dias foi %.2f com um pico de %.2f",
    nrDias, mediaTemp, tempMax);
}