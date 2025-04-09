#include <stdio.h>

void par(int num)
{
    if(num%2==0)
    {
      printf("esse numero par");
    }
    else
    {
        printf("esse numero impar");
    }

    return 0;
}

int main()
{
    int num;

    printf("escolhar numero:");
    scanf("%d",&num);

    par(num);

    return 0;
}
