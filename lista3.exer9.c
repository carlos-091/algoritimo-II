
#include <stdio.h>
#include <stdlib.h>

int main() {
    float valor_limite, valor;
    int num_doc, cod_cli;
    char emissao[11], venc[11], linha[256];

    printf("Digite o valor mínimo: ");
    scanf("%f", &valor_limite);

    FILE *f = fopen("recebimentos.txt", "r");
    if (!f) {
        printf("Erro ao abrir arquivo.\n");
        return 1;
    }

    fgets(linha, sizeof(linha), f);
    printf("Num_doc | Valor | Emissão | Vencimento | Cod_Cli\n");

    while (fgets(linha, sizeof(linha), f)) {
        sscanf(linha, "%d,%f,%[^,],%[^,],%d", &num_doc, &valor, emissao, venc, &cod_cli);
        if (valor > valor_limite) {
            printf("%7d | %6.2f | %s | %s | %d\n", num_doc, valor, emissao, venc, cod_cli);
        }
    }

    fclose(f);
    return 0;
}
