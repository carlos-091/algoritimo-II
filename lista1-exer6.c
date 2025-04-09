#include <stdio.h>

int conta(int anos,int meses,int dias)
{
    int total;

    anos*=364;

    meses*=30;

    total=meses+anos+dias;

    printf("esse e quantidades anos em dias:%d",total);
}

int main()
{
    int anos,meses,dias;

    printf("digiter quantos anos possui:");
    scanf("%d",&anos);

    printf("digiter quantos meses possui,depois do seu aniversario:");
    scanf("%d",&meses);

    printf("digiter quantos dias possui,os que faltam pouco pra viram um mes:");
    scanf("%d",&dias);

    conta(anos,meses,dias);

    return 0;
}

