#include <stdio.h>

void media(int num[],int n)
{
    double soma=0,result=0;

    for(int i=0;i<n;i++)
    {
        soma=soma+num[i];
    }
    result=soma/n;

    printf("a media aritimetia e:%.2lf",result);

}

int main()
{
    int num[100],n=0;

    printf("quantos numeros utilizaremos:");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        printf("digiter o %d numero:",i+1);
        scanf("%d",&num[i]);

    }
    media(num,n);


    return 0;
}
