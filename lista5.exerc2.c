#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int matri;
    char nome[100];
    float nota1, nota2, nota3;

}aluno;

int main()
{
    printf("o tamanho da struct aluno e: %lu bytes",sizeof(aluno));

    return 0;


}

