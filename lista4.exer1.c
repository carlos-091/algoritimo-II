#include <stdio.h>

struct identificar
{
    char nome[50];
    int idade;
    char ende[50];
};

int main()
{
    struct identificar p1;

    printf("digitir  seu nome:");
    scanf("%s",p1.nome);

    printf("digitir  sua idade:");
    scanf("%d",&p1.idade);

    printf("digitir  seu endereco:");
    scanf("%s",p1.ende);

    printf("seu nome e:%s\n",p1.nome);

    printf("sua idade e:%d\n",p1.idade);

    printf("seu endereco e:%s\n",p1.ende);
    return 0;
}
