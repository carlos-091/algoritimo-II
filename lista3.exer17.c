#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *arq;
    int cod;
    float preco;
    char descricao[100];

    arq = fopen("PRODUTOS.txt", "r");
    if (arq == NULL) return 1;

    while (fscanf(arq, "%d;%[^;];%f\n", &cod, descricao, &preco) == 3) {
        if (preco > 500.00) {
            printf("Descrição: %s | Preço: %.2f\n", descricao, preco);
        }
    }

    fclose(arq);
    return 0;
}
