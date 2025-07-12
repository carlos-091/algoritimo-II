#include <stdio.h>

int main()
{
    float num[3][3];

    for(int i=0;i<3;i++)
    {
        for(int j=0;i<3;i++)
            {
                printf("digiter %d numero decimal:\n",i+1);
                scanf("%f", &num[i][j]);
            }
    }

    for(int i=0;i<3;i++)
    {
        for(int j=0;i<3;i++)
            {
                printf("o endereco do numero %.02f  e :%p\n",num[i][j],&num[i][j]);
            }
    }



    return 0;
}
