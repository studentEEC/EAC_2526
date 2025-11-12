// IF_Ex1.c

#include<stdio.h>

void main()
{
    //declarar variavel para nr inteiro
    int valor;

    //pedir ao utilizador para inserir nr
    printf("Insira um numero: ");
    scanf("%d", &valor);
    //%d-> para variavel int
    //%f-> para variavel float
    //%c -> para variavel char (apenas 1 char)
    //%s -> para variavel char[] (>1 char)

    //avaliar se nr é divisivel por 3
    //em caso afirmativo, incrementar 1 ao nr inserido
    if(valor%3 == 0) // == -> comparar valores
    {
        valor++; 
        //valor = valor+1;
    }
}