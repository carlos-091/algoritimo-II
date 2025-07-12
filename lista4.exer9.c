#include <stdio.h>
#include <string.h>

typedef struct
{
   char nome[100];
   int idade;
   char esporte[50];
   float altura;
}atleta;

int main()
{
    atleta a[5];
    int i, mais_velho=0,mais_alto=0;

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

    for(i=1;i<5;i++)
    {
        if(a[i].idade>a[mais_velho].idade)
        {
            mais_velho=i;
        }
        if(a[i].altura>a[mais_alto].altura)
        {
            mais_alto=i;
        }
    }

    printf("atleta mais velho:%s\n",a[mais_velho].nome);

    printf("atlrta mais alto:%s\n", a[mais_alto].nome);

    return 0;
}
