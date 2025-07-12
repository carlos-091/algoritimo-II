#include <stdio.h>

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

void decorremDeData(Data d1, Data d2) {
    int dias = d1.dia - d2.dia;
    int meses = d1.mes - d2.mes;
    int anos = d1.ano - d2.ano;

    if (dias < 0) dias = -dias;
    if (meses < 0) meses = -meses;
    if (anos < 0) anos = -anos;

    printf("Diferença entre as datas:\n");
    printf("Dias: %d\n", dias);
    printf("Meses: %d\n", meses);
    printf("Anos: %d\n", anos);
}

int main() {
    Data d[2];

    for (int i = 0; i < 2; i++) {
        printf("Digite uma data valida %d:\n", i + 1);
        printf("Dia: ");
        scanf("%d", &d[i].dia);
        printf("Mes: ");
        scanf("%d", &d[i].mes);
        printf("Ano: ");
        scanf("%d", &d[i].ano);
    }

    decorremDeData(d[0], d[1]);

    return 0;
}
