#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    FILE *f = fopen("PRODUTOS.txt", "r");
    if (!f) return 1;

    char letra;
    float v1, v2;

    printf("Letra inicial: ");
    scanf(" %c", &letra);
    letra = toupper(letra);

    printf("Valor minimo: ");
    scanf("%f", &v1);

    printf("Valor maximo: ");
    scanf("%f", &v2);

    int codigo;
    char descricao[100];
    float preco;

    while (fscanf(f, "%d %[^\n] %f", &codigo, descricao, &preco) == 3) {
        if (toupper(descricao[0]) == letra && preco >= v1 && preco <= v2)
            printf("%d %s %.2f\n", codigo, descricao, preco);
    }

    fclose(f);
    return 0;
}
