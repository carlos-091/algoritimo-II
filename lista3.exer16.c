#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *arq;
    int cod, cod_existente;
    float preco;
    char descricao[100];
    int repetido;

    while (1)
    {
        printf("Código (0 para encerrar): ");
        scanf("%d", &cod);
        if (cod == 0) break;

        repetido = 0;
        arq = fopen("PRODUTOS.txt", "r");
        if (arq != NULL)
        {
            while (fscanf(arq, "%d;%[^;];%f\n", &cod_existente, descricao, &preco) == 3)
            {
                if (cod_existente == cod)
                {
                    repetido = 1;
                    break;
                }
            }
            fclose(arq);
        }

        if (repetido)
        {
            printf("Código já existente. Produto não cadastrado.\n");
            continue;
        }

        printf("Descrição: ");
        scanf(" %[^\n]", descricao);
        printf("Preço: ");
        scanf("%f", &preco);

        arq = fopen("PRODUTOS.txt", "a");
        if (arq == NULL) return 1;

        fprintf(arq, "%d;%s;%.2f\n", cod, descricao, preco);
        fclose(arq);
    }

    return 0;
}
