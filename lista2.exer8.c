#include <stdio.h>

int preenchimento(int *v, int num,int tamanho)
{
    int *ptr_fim= v+tamanho;

    while(v < ptr_fim)
    {
        *v=num;
        v++;
    }
}
int main()
{
    int num, v[5];
    int *pi;

    printf("escolha um numero:\n");
    scanf("%d", &num);

    preenchimento(v,num,5);

    for(pi=v;pi<v+5;pi++)
    {
        printf("%d\n",*pi);
    }

    return 0;
}
