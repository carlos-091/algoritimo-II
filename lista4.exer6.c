#include <stdio.h>

typedef struct
{
    int matri;
    char nome[100];
    float nota1, nota2, nota3;

}aluno;

float calcularmedia(aluno a)
{
    return(a.nota1 + a.nota2 + a.nota3)/3.0;
}

int main()
{
    aluno alunos[5];
    int i,indi_maior=0;
    float media_maior;

    for(i=0;i<5;i++)
    {
        printf("aluno %d:\n",i+1);

        printf("matricula: ");
        scanf("%d", &alunos[i].matri);

        printf(" nome: ");
        scanf(" %[^\n]", alunos[i].nome);

        printf(" nota 1: ");
        scanf("%f", &alunos[i].nota1);

        printf(" nota 2: ");
        scanf("%f", &alunos[i].nota2);

        printf(" nota 3: ");
        scanf("%f", &alunos[i].nota3);

    }

    media_maior = calcularmedia(alunos[0]);

    for(i=1;i<5;i++)
    {
        float media_atual=calcularmedia(alunos[1]);
        if(media_atual>media_maior)
        {
            media_maior=media_atual;
            indi_maior=i;
        }
    }

    printf("\nAluno com maior media:\n");

    printf("nome:%s\n",alunos[indi_maior].nome);

    printf("notas:%.2f, %.2f, %.2f\n",alunos[indi_maior].nota1, alunos[indi_maior].nota2, alunos[indi_maior].nota3);

    printf("media: %.2f\n",media_maior);

    return 0;
}
