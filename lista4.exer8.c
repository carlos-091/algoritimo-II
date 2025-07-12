#include <stdio.h>
#include <string.h>

typedef struct
{
    int dia;
    int mes;
    int ano;
}data;

typedef struct
{
    char nome[100];
    data  nasc;
}pessoa;

int comparar_datas(data d1, data d2)
{
    if(d1.ano != d2.ano)
        return d1. ano-d2.ano;
    if(d1.mes != d2.mes)
        return d1.mes - d2.mes;
    return d1.dia - d2.dia;

}

int main()
{
    pessoa v[6];
    int i,mais_velho=0,mais_novo=0;

    for(i=0;i<6;i++)
    {
        printf("pessoa %d:\n",i+1);

        printf("nome: ");
        scanf(" %[^\n]", v[i]);

        printf("data de nascimento(dd mm aaaa):");
        scanf("%d %d %d",%v[i].nasc.dia, &v[i].nasc.mes, &v[i].nasc.ano);
    }

   for(i=1;i<6;i++)
   {
       if(comparar_datas(v[i].nasc, v[mais_velho].nasc)>0)
       {
           mais_velho=i;
       }
        if(comparar_datas(v[i].nasc, v[mais_novo].nasc)>0)
       {
           mais_novo=i;
       }

   }

   printf("\npessoa mais velha:%s\n", v[mais_velho].nome);

   printf("pessoa mais novo:%s\n",v[mais_novo].nome);

    return 0;
}

