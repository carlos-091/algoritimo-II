#include <stdio.h>
#include <math.h>


struct Ponto {
    float x;
    float y;
};


float calcularDistancia(struct Ponto p) {
    return sqrt(p.x * p.x + p.y * p.y);
}

int main() {
    struct Ponto ponto;
    float distancia;


    printf("Digite a coordenada X do ponto: ");
    scanf("%f", &ponto.x);

    printf("Digite a coordenada Y do ponto: ");
    scanf("%f", &ponto.y);


    distancia = calcularDistancia(ponto);


    printf("A distância do ponto (%.2f, %.2f) até a origem é: %.2f\n", ponto.x, ponto.y, distancia);

    return 0;
}

