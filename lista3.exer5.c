#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int cod_cli, cod_temp;
    char nome[100], endereco[100], fone[20], linha[256];

    printf("Digite o código do cliente a ser alterado: ");
    scanf("%d", &cod_cli);
    getchar();

    FILE *clientes = fopen("clientes.txt", "r");
    FILE *tmp = fopen("tmp_clientes.txt", "w");

    if (!clientes || !tmp) {
        printf("Erro ao abrir arquivos.\n");
        return 1;
    }

    fgets(linha, sizeof(linha), clientes);
    fputs(linha, tmp);

    int encontrado = 0;

    while (fgets(linha, sizeof(linha), clientes)) {
        sscanf(linha, "%d,", &cod_temp);
        if (cod_temp == cod_cli) {
            encontrado = 1;

            printf("Digite o novo nome: ");
            fgets(nome, sizeof(nome), stdin);

            printf("Digite o novo endereço: ");
            fgets(endereco, sizeof(endereco), stdin);

            printf("Digite o novo telefone: ");
            fgets(fone, sizeof(fone), stdin);

            fprintf(tmp, "%d,%s%s%s", cod_cli, nome, endereco, fone);
        } else {
            fputs(linha, tmp);
        }
    }

    fclose(clientes);
    fclose(tmp);

    remove("clientes.txt");
    rename("tmp_clientes.txt", "clientes.txt");

    if (encontrado)
        printf("Cliente alterado com sucesso.\n");
    else
        printf("Cliente não encontrado.\n");

    return 0;
}
