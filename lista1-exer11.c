#include <stdio.h>

void nota(double not)
{
    if((not>=0)&&(not<=4.9))
    {
      printf("D");
    }
    if((not>=5)&&(not<=6,9))
    {
        printf("C");
    }
    if((not>=7)&&(not<=8,9))
    {
        printf("B");
    }
    if((not>=9)&&(not<=10))
    {
        printf("A");
    }

    return 0;
}

int main()
{
    double not;

    printf("fale sua media final:");
    scanf("%d",&not);

    nota(not);

    return 0;
}

