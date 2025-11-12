#include<stdio.h>

void main()
{
    int idadeAtleta;

    printf("Insira a idade do atleta: ");
    scanf("%d", &idadeAtleta);

    if(idadeAtleta>=11 && idadeAtleta<=15) // >10 && <16
    {
        printf("Juvenil");
        if(idadeAtleta==11 || idadeAtleta == 12)
            printf("Inscrição Gratuita");
    }
    else if(idadeAtleta>=16 && idadeAtleta<=20) // >15 && <21
    {
        printf("Junior");
    }
    else if(idadeAtleta>=21 && idadeAtleta<=25) // >20 && <26
    {
        printf("Profissional");
    }
    else  // todas as outras idades
    {
        printf("Atleta fora das categorias");
    }
}