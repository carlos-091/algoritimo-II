#include <stdio.h>

int main() {
    FILE *arq;

    arq = fopen("PRODUTOS.txt", "w");
    if (arq == NULL) return 1;

    fclose(arq);

    return 0;
}
