#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *f = fopen("PRODUTOS.txt", "r");
    if (!f) return 1;

    int codigo;
    char descricao[100];
    float preco;

    while (fscanf(f, "%d %[^\n] %f", &codigo, descricao, &preco) == 3) {
        if (preco < 15)
            printf("%d %s %.2f\n", codigo, descricao, preco);
    }

    fclose(f);
    return 0;
}
