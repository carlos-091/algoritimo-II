#include <stdio.h>

int temp (int seg)
{
    printf("segundos em:\n");
    int hora=3600*seg;
    printf("horas:%d",hora);

    int minutos=60*seg;
    printf("\nminutos:%d",minutos);

    printf("\nsegundos:%d",seg);
    return 1;
}

int main()
{
    int seg;

    printf("digas o segundo de duracao da empressa:");
    scanf("%d",&seg);

    temp(seg);
    return 0;
}

