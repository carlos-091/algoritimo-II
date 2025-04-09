#include <stdio.h>

int perf(int num)
{
    int soma=0;
    for(int i=1;i<=num/2;i++)
    {
        if(num%i==0)
        {
            soma=soma+i;
        }
    }
    if(soma==num)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int num;

    printf("escolha um numero:");
    scanf("%d",&num);

    if(perf(num))
    {
        printf(" %d e um numero perfeito",num);
    }
    else
    {
        printf("%d nao e um numero perfeito",num);
    }

    return 0;
}

