#include <stdio.h>
#include <math.h>

void bhaska(double a,double b,double c)
{
    double delta=(b*b)-(4*a*c);

    if(delta<0)
    {
        printf("nao possui raizes");
    }
    else
    {
        double res1=(-b+sqrt(delta))/(2*a);

        double res2=(-b-sqrt(delta))/(2*a);

        printf("As raízes são: %f e %f\n", res1, res2);
    }
    return 0;
}

int main()
{
    int a,b,c;

    printf("esclha os valores de a,b,c:");
    scanf("%d %d %d",&a,&b,&c);

    bhaska(a,b,c);

    return 0;
}
