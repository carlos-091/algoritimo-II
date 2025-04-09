#include <stdio.h>

void posi(int num)
{
    if(num>0)
    {
      printf("esse numero positivo");
    }
    else
    {
        printf("esse numero negativo");
    }

    return 0;
}

int main()
{
    int num;

    printf("escolhar numero:");
    scanf("%d",&num);

    posi(num);

    return 0;
}
