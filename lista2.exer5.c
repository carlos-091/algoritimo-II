#include <stdio.h>

int main()
{
    int num[5],i=0;
    int *pi;

    for( pi = num;pi<num + 5;pi++)
    {
        printf("digite um numero:\n");
        scanf("%d", pi);
    }

    for( pi=num;pi<num+5;pi++)
    {
        printf("o dobro do numero %d e:%d\n",*pi,*pi*2);
    }


    return 0;
}
