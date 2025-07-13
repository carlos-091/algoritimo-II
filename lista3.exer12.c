#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *estilista, *roupa, *estacao;

    estilista = fopen("estilistas.dat", "wb");
    roupa = fopen("roupas.dat", "wb");
    estacao = fopen("estacoes.dat", "wb");

    if (estilista == NULL || roupa == NULL || estacao == NULL) return 1;

    fclose(estilista);
    fclose(roupa);
    fclose(estacao);

    return 0;
}
