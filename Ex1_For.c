#include<stdio.h>

void main()
{
    int n, resultado, factorial=1;

    printf("Insira numero: ");
    scanf("%d", &n);
    
    // n=0 -> 1
    if (n==0)
       resultado =1;
    else{ // n>=1 -> n*fact(n-1)= 5*4*3*2*1
        for (int i = n; i > 0; i--) // -> 5-4-3-2-1-
        //for (int i = 1; i <= n; i++) -> 1-2-3-4-5
        { 
           factorial= factorial*i;
        }
        resultado = factorial;
    }
    printf("O fact(%d)= %d", n, resultado);
}