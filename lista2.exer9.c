#include <stdio.h>

void imprimirvetor(int *num,int tam_vet)
{
    int *pa;

    for( pa = num;pa<num + tam_vet;pa++)
    {
        printf("num:%d e endereco:%p\n", *pa, pa);

    }
}

int main()
{
    int tam_vet;

    printf("escolha o tamanho do vetor:\n");
    scanf("%d", &tam_vet);

    int num[tam_vet];
    int *pi;

    for( pi = num;pi<num + tam_vet;pi++)
    {
        printf("digite um numero:\n");
        scanf("%d", pi);
    }

    imprimirvetor(num, tam_vet);



    return 0;
}
