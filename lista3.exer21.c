#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *f = fopen("PRODUTOS.txt", "r");
    if (!f) return 1;

    FILE *temp = fopen("TEMP.txt", "w");
    if (!temp) {
        fclose(f);
        return 1;
    }

    int codigo, cod_excluir;
    char descricao[100];
    float preco;

    printf("Codigo do produto a excluir: ");
    scanf("%d", &cod_excluir);

    while (fscanf(f, "%d %[^\n] %f", &codigo, descricao, &preco) == 3) {
        if (codigo != cod_excluir)
            fprintf(temp, "%d %s %.2f\n", codigo, descricao, preco);
    }

    fclose(f);
    fclose(temp);

    remove("PRODUTOS.txt");
    rename("TEMP.txt", "PRODUTOS.txt");

    return 0;
}
