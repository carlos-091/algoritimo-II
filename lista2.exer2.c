#include <stdio.h>

int main()
{
    int num1=0, num2=0;

    printf("digiter um numero:");
    scanf("%d",&num1);

    printf("digiter outro numero:");
    scanf("%d",&num2);

    if(&num1>&num2)
    {
        printf("e o maior endereco:%d",num1);
    }
    if(&num1<&num2)
    {
        printf("e o maior endereco:%d",num2);
    }

    return 0;
}

