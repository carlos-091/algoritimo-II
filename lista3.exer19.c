#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *f = fopen("PRODUTOS.txt", "r");
    if (!f) return 1;

    FILE *temp = fopen("TEMP.txt", "w");
    if (!temp) {
        fclose(f);
        return 1;
    }

    int codigo;
    char descricao[100];
    float preco;

    while (fscanf(f, "%d %[^\n] %f", &codigo, descricao, &preco) == 3) {
        if (preco > 100) preco += 10;
        fprintf(temp, "%d %s %.2f\n", codigo, descricao, preco);
    }

    fclose(f);
    fclose(temp);

    remove("PRODUTOS.txt");
    rename("TEMP.txt", "PRODUTOS.txt");

    return 0;
}
