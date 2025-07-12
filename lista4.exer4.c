
#include <stdio.h>
#include <math.h>

typedef struct {
    float x;
    float y;
} Ponto;

typedef struct {
    Ponto superi_esquer;
    Ponto infer_direi;
} Retan;

float calcularBase(Retan r) {
    return fabs(r.infer_direi.x - r.superi_esquer.x);
}

float calcularAltura(Retan r) {
    return fabs(r.infer_direi.y - r.superi_esquer.y);
}

float calcularArea(Retan r) {
    return calcularBase(r) * calcularAltura(r);
}

float calcularPerimetro(Retan r) {
    return 2 * (calcularBase(r) + calcularAltura(r));
}

float calcularDiagonal(Retan r) {
    float base = calcularBase(r);
    float altura = calcularAltura(r);
    return sqrt(base * base + altura * altura);
}

int main() {
    Retan r;

    printf("Digite as coordenadas do ponto superior esquerdo (x y): ");
    scanf("%f %f", &r.superi_esquer.x, &r.superi_esquer.y);

    printf("Digite as coordenadas do ponto inferior direito (x y): ");
    scanf("%f %f", &r.infer_direi.x, &r.infer_direi.y);

    printf("\nÁrea: %.2f\n", calcularArea(r));
    printf("Perímetro: %.2f\n", calcularPerimetro(r));
    printf("Diagonal: %.2f\n", calcularDiagonal(r));

    return 0;
}
