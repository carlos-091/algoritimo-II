#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    FILE *f = fopen("PRODUTOS.txt", "r");
    if (!f) return 1;

    int codigo;
    char descricao[100];
    float preco;

    while (fscanf(f, "%d %[^\n] %f", &codigo, descricao, &preco) == 3) {
        if (toupper(descricao[0]) == 'M')
            printf("%d %s %.2f\n", codigo, descricao, preco);
    }

    fclose(f);
    return 0;
}
