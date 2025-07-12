#include <stdio.h>
#include <stdint.h>

int main()
{
    int num[5];
    int *pi;

    for(pi=num;pi<num+5;pi++)
    {
        printf("digite um numero:\n");
        scanf("%d", pi);
    }

    for(pi=num;pi<num+5;pi++)
    {
        if(((uintptr_t)pi) % 2 == 0)
        {
            printf("o endereco de %d e par:%p\n",*pi, pi);
        }
    }


    return 0;
}

