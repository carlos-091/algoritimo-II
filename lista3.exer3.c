#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int cliente_existe(int cod_cli)
{
    FILE *clientes = fopen("clientes.txt", "r");
    if (clientes == NULL) return 0;

    int cod;
    char linha[256];

    fgets(linha, sizeof(linha), clientes);
    while (fgets(linha, sizeof(linha), clientes)) {
        sscanf(linha, "%d,", &cod);
        if (cod == cod_cli) {
            fclose(clientes);
            return 1;
        }
    }

    fclose(clientes);
    return 0;
}

int main() {
    FILE *recebimentos = fopen("recebimentos.txt", "a");
    if (recebimentos == NULL) {
        printf("Erro ao abrir o arquivo de recebimentos.\n");
        return 1;
    }

    int num_doc, cod_cli;
    float valor;
    char emissao[11], vencimento[11];

    printf("Digite o código do cliente: ");
    scanf("%d", &cod_cli);

    if (!cliente_existe(cod_cli)) {
        printf("Cliente não cadastrado.\n");
        fclose(recebimentos);
        return 1;
    }

    printf("Digite o número do documento: ");
    scanf("%d", &num_doc);

    printf("Digite o valor do documento: ");
    scanf("%f", &valor);

    printf("Digite a data de emissão (dd/mm/aaaa): ");
    scanf("%s", emissao);

    printf("Digite a data de vencimento (dd/mm/aaaa): ");
    scanf("%s", vencimento);

    fprintf(recebimentos, "%d,%.2f,%s,%s,%d\n", num_doc, valor, emissao, vencimento, cod_cli);

    fclose(recebimentos);
    printf("Recebimento registrado com sucesso.\n");

    return 0;
}
