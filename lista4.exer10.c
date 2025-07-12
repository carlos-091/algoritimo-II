#include <stdio.h>
#include <string.h>

typedef struct
{
   char nome[100];
   int idade;
   char esporte[50];
   float altura;
}atleta;

void ordenarporidade(atleta a[], int n)
{
    int i,j,max;
    atleta temp;

    for(i=0;i<n-1;i++ )
    {
        max=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j].idade>a[max].idade)
            {
                max=j
            }
        }
        if(max != i)
        {
            temp=a[i];
            a[i]=a[max];
            a[max]=temp
        }
    }
}

int main()
{
    atleta a[5];
    int i;

    for(i=0;i<5;i++)
    {
        printf("atleta %d:\n",i+1);

        printf("nome: ");
        scanf(" %[^\n]", a[i].nome);

        printf("esporte: ");
        scanf(" %[^\n]", a[i].esporte);

        printf("idade: ");
        scanf("%d",&a[i].idade);

        print("altura(metros): ");
        scanf("%f",&a[i].altura);

        printf("\n");
    }

    ordenarporidade(a, 5);

    printf("atletas em ordem de idade (do mais velho ao mais novo):\n");

    for(i=0;i<5;i++)
    {
        printf("nome:%s | espeote:%s | idade:%d | altura:%%.2fn",a[i].nome, a[i].esporte, a[i].idade, a[i].altura);
    }

    return 0;
}
