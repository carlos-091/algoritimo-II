#include <stdio.h>

int main()
{
    FILE *arq;
    int num_doc, cod_cli;
    float valor_doc;
    char data_emissao[11], data_vencimento[11];
    float valor_min, valor_max;

    printf("Digite o valor mínimo: ");
    scanf("%f", &valor_min);
    printf("Digite o valor máximo: ");
    scanf("%f", &valor_max);

    arq = fopen("recebimentos.dat", "rb");
    if (arq == NULL) return 1;

    while (fread(&num_doc, sizeof(int), 1, arq) == 1 &&
           fread(&valor_doc, sizeof(float), 1, arq) == 1 &&
           fread(&data_emissao, sizeof(char), 11, arq) == 11 &&
           fread(&data_vencimento, sizeof(char), 11, arq) == 11 &&
           fread(&cod_cli, sizeof(int), 1, arq) == 1) {

        if (valor_doc >= valor_min && valor_doc <= valor_max) {
            printf("Doc: %d | Valor: %.2f | Emissão: %s | Vencimento: %s | Cliente: %d\n",
                   num_doc, valor_doc, data_emissao, data_vencimento, cod_cli);
        }
    }

    fclose(arq);
    return 0;
}
