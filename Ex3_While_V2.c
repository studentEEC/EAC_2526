#include<stdio.h>

void main()
{
    float temperatura, tempMax= -100, somatorioTemps=0;
    int nrDias, nrDias2;

    // o utilizador define o nrDias 
    printf("Insira o numero de dias a registar: ");
    scanf("%d", &nrDias); 
    nrDias2 = nrDias;  // nrDias2-  apenas para guardar o valor inserido 
                        // pelo utilizador para ser usada mais tarde
    while (nrDias > 0) 
    {
        printf("Insira a temperatura: ");
        scanf("%f", &temperatura);
        nrDias--; 
        // encontrar temperatura maxima
        if (temperatura> tempMax)
        {
            tempMax = temperatura;
        }
        // soma das temperaturas
        somatorioTemps = somatorioTemps + temperatura;
    }

    float mediaTemp = somatorioTemps / nrDias2;

    printf("A media temperatura em %d dias foi %.2f com um pico de %.2f",
    nrDias, mediaTemp, tempMax);
}