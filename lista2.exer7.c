#include <stdio.h>
#include <string.h>

int verificador(char *p1,char *p2)
{
    char *inicio;

    while(*p1)
    {
        inicio=p1;

        char *aux1=p1;
        char *aux2=p2;
        while((*aux1 && *aux2) && (*aux1 == *aux2))
        {
            aux1++;
            aux2++;
        }

        if(*aux2 == '\0')
        {
            return 0;
        }
        p1++;

    }
    return 1;
}

int main()
{
    char str1[50], str2[50];
    char *p1,*p2;

    printf("escolha a primeira palavra:\n"),
    scanf("%s", str1);

    printf("digite a palavra que deseja ver se esta dentro da primeira:\n");
    scanf("%s", str2);

    p1=str1;
    p2=str2;

    int resultado =verificador(p1,p2);

    if(resultado == 0)
    {
        printf("a palavra pertence.");
    }
    else
    {
        printf("a palavra nao pertence.");
    }
    return 0;
}
