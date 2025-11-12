#include<stdio.h>

void main()
{
    int idadeAtleta;

    printf("Insira a idade do atleta: ");
    scanf("%d", &idadeAtleta);

    switch (idadeAtleta)
    {
        case 11:
        case 12:
            printf("Juvenil. Taxa incrição gratuita");
            break;
        case 13:
        case 14:
        case 15:
            printf("Juvenil");
            break;
        case 16:
        case 17:
        case 18:
        case 19:
        case 20:
            printf("Junior");
            break;   
        case 21:
        case 22: 
        case 23: 
        case 24:
        case 25:
            printf("Profissional");
            break;
        default:
            printf("Atleta fora das categorias");
            break;
    }
}