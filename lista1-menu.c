#include <stdio.h>
#include "dmc.h"
#include <math.h>
#include <string>

int main()
{
    int n=0,a,b,c,num,seg,anos,meses,dias,idade,;
    char f,texto[100],cate[20];
    double not

    printf("qual codigo deseja utilizar:");
    scanf("%d"&n);

    if(n==1)
    {
        printf("escrevar um texto:");
        scanf("%s",&f);

        hll(f);
    }
    if(n==2)
    {
        printf("me diga um texto:");
        scanf("%99[^\n]s",&texto);

        impri(texto);
    }
    if(n==3)
    {
        printf("me diga um texto:");
        scanf("%99[^\n]s",&texto);

        impri(texto);
    }
    if(n==4)
    {
        printf("esclha os valores de a,b,c:");
        scanf("%d %d %d",&a,&b,&c);

       bhaska(a,b,c);
    }
    if(n==5)
    {
        printf("digas o segundo de duracao da empressa:");
        scanf("%d",&seg);

        temp(seg);
    }
    if(n==6)
    {
        printf("digiter quantos anos possui:");
        scanf("%d",&anos);

        printf("digiter quantos meses possui,depois do seu aniversario:");
        scanf("%d",&meses);

        printf("digiter quantos dias possui,os que faltam pouco pra viram um mes:");
        scanf("%d",&dias);

        conta(anos,meses,dias);
    }
    if(n==7)
    {
        printf("escolha um numero:");
        scanf("%d",&num);

        if(perf(num))
         {
            printf(" %d e um numero perfeito",num);
         }
        else
        {
            printf("%d nao e um numero perfeito",num);
        }
    }
    if(n==8)
    {
        printf("digite sua idade:");
        scanf("%d",&idade);

        determinar(idade, cate);

        printf("Categoria: %s\n", cate);
    }
    if(n==9)
    {
         printf("escolhar numero:");
         scanf("%d",&num);

         posi(num);
    }
    if(n==10)
    {

       printf("escolhar numero:");
       scanf("%d",&num);

       par(num);

    }
    if(n==11)
    {
        printf("fale sua media final:");
        scanf("%d",&not);

        nota(not);
    }
    if(n==12)
    {
        printf("digite um valor:");
        scanf("%d",&a);

        printf("digite outro valor:");
        scanf("%d",&b);

        printf("digite mais um valor:");
        scanf("%d",&c);

        cres(a,b,c);
    }
    if(n==13)
    {
        printf("digite o valor lado de um triangulo:");
        scanf("%d",&a);

        printf("digite outro valor lado:");
        scanf("%d",&b);

        printf("digite o valor da hipotenusa:");
        scanf("%d",&c);

        tri(a,b,c);
    }
    if(n==14)
    {
        printf("quantos numeros utilizaremos:");
        scanf("%d",&n);

        for(int i=0;i<n;i++)
        {
            printf("digiter o %d numero:",i+1);
            scanf("%d",&num[i]);
        }
        media(num,n);
    }
    if(n==15)
    {
        printf("escolha o valo de x,z:");
        scanf("%d %d",&x,&z);

        poten(z,x);
    }
    if(n==0)
    {
        printf("tchau");
    }
    return 0;
}

