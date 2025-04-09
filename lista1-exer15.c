#include <stdio.h>

void poten(int z,int x)
{
    int pon=1;
    for(int i=0;i<z;i++)
    {
        pon *= x;
    }
    printf("X^Z:%d",pon);

}

int main()
{
    int x,z;

    printf("escolha o valo de x,z:");
    scanf("%d %d",&x,&z);

    poten(z,x);

    return 0;
}
