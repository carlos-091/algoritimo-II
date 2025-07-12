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
        printf("e o maior endereco:%p",&num1);
    }
    if(&num1<&num2)
    {
        printf("e o maior endereco:%p",&num2);
    }

    return 0;
}
