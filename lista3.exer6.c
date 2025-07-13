#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int cod_cli, cod_cli_linha, num_doc, num_doc_linha;
    float valor;
    char emissao[11], vencimento[11], linha[256];

    printf("Digite o número do documento: ");
    scanf("%d", &num_doc);

    printf("Digite o código do cliente: ");
    scanf("%d", &cod_cli);
    getchar();

    FILE *receb = fopen("recebimentos.txt", "r");
    FILE *tmp = fopen("tmp_receb.txt", "w");

    if (!receb || !tmp) {
        printf("Erro ao abrir arquivos.\n");
        return 1;
    }

    fgets(linha, sizeof(linha), receb);
    fputs(linha, tmp);

    int encontrado = 0;

    while (fgets(linha, sizeof(linha), receb)) {
        sscanf(linha, "%d,%f,%[^,],%*[^,],%d", &num_doc_linha, &cod_cli_linha);
        if (num_doc == num_doc_linha && cod_cli == cod_cli_linha) {
            encontrado = 1;

            printf("Digite o novo valor: ");
            scanf("%f", &valor);
            printf("Digite nova data de emissão (dd/mm/aaaa): ");
            scanf("%s", emissao);
            printf("Digite nova data de vencimento (dd/mm/aaaa): ");
            scanf("%s", vencimento);

            fprintf(tmp, "%d,%.2f,%s,%s,%d\n", num_doc, valor, emissao, vencimento, cod_cli);
        } else {
            fputs(linha, tmp);
        }
    }

    fclose(receb);
    fclose(tmp);

    remove("recebimentos.txt");
    rename("tmp_receb.txt", "recebimentos.txt");

    if (encontrado)
        printf("Recebimento alterado com sucesso.\n");
    else
        printf("Recebimento não encontrado.\n");

    return 0;
}
