#include <stdio.h>

int main()
{
int nasc=0,gen;

printf("digite sua ano de nascimento:");
scanf("%d",&nasc);

printf("digite seu genero:1 pra feminino ou 2 pra masculino:");
scanf("%d",&gen);

if((2025-nasc>=18)  && (gen=2))
    {
        printf("\nobrigatorio alistamento");
    }
else if((2025-nasc>=18) && (gen=1))
    {
        printf("\npoder fazer alistamento");
    }

else
    {
        printf("\nnao precisar fazer alistamento");
    }
return 0;
}
