#include <stdio.h>

int main()
{
int dia=0,mes=0,ano=0;

printf("digite sua data de nascimento:faca dessa maneira;dia mes ano:");
scanf("%d %d %d",&dia,&mes,&ano);

if(((dia>=1) && (dia<=31)) && ((mes>=1) && (mes<=12)) && ((ano>=1) && (ano<=2025)))
    {
        printf("data valida");
    }
else
    {
        printf("data invalida");
    }
return 0;
}
