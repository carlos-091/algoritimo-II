#include <stdio.h>
#include <stdlib.h>

int main() {
    int cod_cli, cod_linha, num_doc;
    float valor;
    char emissao[11], venc[11], linha[256];

    printf("Digite o código do cliente: ");
    scanf("%d", &cod_cli);

    FILE *f = fopen("recebimentos.txt", "r");
    if (!f) {
        printf("Erro ao abrir arquivo.\n");
        return 1;
    }

    fgets(linha, sizeof(linha), f);
    printf("Num_doc | Valor | Emissão | Vencimento\n");

    while (fgets(linha, sizeof(linha), f)) {
        sscanf(linha, "%d,%f,%[^,],%[^,],%d", &num_doc, &valor, emissao, venc, &cod_linha);
        if (cod_linha == cod_cli) {
            printf("%7d | %6.2f | %s | %s\n", num_doc, valor, emissao, venc);
        }
    }

    fclose(f);
    return 0;
}
