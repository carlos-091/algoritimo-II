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

    float min, max, perc;
    printf("Valor minimo: ");
    scanf("%f", &min);
    printf("Valor maximo: ");
    scanf("%f", &max);
    printf("Percentual de desconto: ");
    scanf("%f", &perc);

    int codigo;
    char descricao[100];
    float preco;

    while (fscanf(f, "%d %[^\n] %f", &codigo, descricao, &preco) == 3) {
        if (preco >= min && preco <= max)
            preco *= (1 - perc / 100);
        fprintf(temp, "%d %s %.2f\n", codigo, descricao, preco);
    }

    fclose(f);
    fclose(temp);

    remove("PRODUTOS.txt");
    rename("TEMP.txt", "PRODUTOS.txt");

    return 0;
}
