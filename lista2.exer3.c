#include <stdio.h>

int main()
{
    float num[10];

    for(int i=0;i<10;i++)
    {
        printf("digiter %d numero decimal:\n",i+1);
        scanf("%f", &num[i]);
    }

    for(int i=0;i<10;i++)
    {
        printf("o endereco do numero &.02f  e :%p\n",num[i],&num[i]);
    }


    return 0;
}

