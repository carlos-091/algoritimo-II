#include <stdio.h>
#include <string.h>

void determinar(int idade,char cate[])
{
    if(idade<5)
    {
        strcpy(cate, "Sem Categoria");
    }
    else if((idade>=5)&&(idade<=7))
    {
        strcpy(cate, "Infantil A");
    }
    else if((idade>=8)&&(idade<=10))
    {
        printf("categoria Infantil B");
        strcpy(cate, "Infantil B");
    }
    else if((idade>=11)&&(idade<=13))
    {
        strcpy(cate, "Juvenil A");
    }
    else if((idade>=14)&&(idade<=17))
    {
        strcpy(cate, "Juvenil B");
    }
    else
    {
        strcpy(cate, "Adulto");
    }

}

int main()
{
    int idade;
    char cate[20];

    printf("digite sua idade:");
    scanf("%d",&idade);

    determinar(idade, cate);

    printf("Categoria: %s\n", cate);

    return 0;
}
