#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void excluir_cliente(int cod_cli) {
    FILE *clientes = fopen("clientes.txt", "r");
    FILE *tmp_clientes = fopen("tmp_clientes.txt", "w");

    char linha[256];
    int cod;

    if (!clientes || !tmp_clientes) {
        printf("Erro ao abrir arquivos de clientes.\n");
        return;
    }

    fgets(linha, sizeof(linha), clientes);
    fprintf(tmp_clientes, "%s", linha);

    while (fgets(linha, sizeof(linha), clientes)) {
        sscanf(linha, "%d,", &cod);
        if (cod != cod_cli) {
            fputs(linha, tmp_clientes);
        }
    }

    fclose(clientes);
    fclose(tmp_clientes);

    remove("clientes.txt");
    rename("tmp_clientes.txt", "clientes.txt");
}

void excluir_recebimentos(int cod_cli) {
    FILE *receb = fopen("recebimentos.txt", "r");
    FILE *tmp_receb = fopen("tmp_receb.txt", "w");

    char linha[256];
    int cod;

    if (!receb || !tmp_receb) {
        printf("Erro ao abrir arquivos de recebimentos.\n");
        return;
    }

    fgets(linha, sizeof(linha), receb);
    fprintf(tmp_receb, "%s", linha);

    while (fgets(linha, sizeof(linha), receb)) {
        char *ultimoCampo = strrchr(linha, ',');
        if (ultimoCampo) {
            sscanf(ultimoCampo + 1, "%d", &cod);
            if (cod != cod_cli) {
                fputs(linha, tmp_receb);
            }
        }
    }

    fclose(receb);
    fclose(tmp_receb);

    remove("recebimentos.txt");
    rename("tmp_receb.txt", "recebimentos.txt");
}

int main() {
    int cod_cli;

    printf("Digite o código do cliente a ser excluído: ");
    scanf("%d", &cod_cli);

    excluir_cliente(cod_cli);
    excluir_recebimentos(cod_cli);

    printf("Cliente e seus recebimentos excluídos com sucesso.\n");

    return 0;
}
