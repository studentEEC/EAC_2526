#include<stdio.h>
#include<string.h>

void main()
{
    int idade, idadeAlunoMaisVelho=0;
    char nome [10], nomeAlunoMaisVelho[10];
    do
    {
        printf("Insira o nome aluno: ");
        scanf("%s", &nome);

        if(strcmp(nome, "STOP")!=0) // só pedimos idade se nome!= STOP
        {
            printf("Insira idade aluno: ");
            scanf("%d", &idade);
            
            if (idade> idadeAlunoMaisVelho)
            {
                idadeAlunoMaisVelho = idade;
                strcpy(nomeAlunoMaisVelho, nome);
            }
        }
    } while (strcmp(nome, "STOP")!=0);
    // enquanto nome diferente "STOP"
    printf("Alunos mais velho chama-se %s e tem %d anos",
           nomeAlunoMaisVelho,
           idadeAlunoMaisVelho);
}