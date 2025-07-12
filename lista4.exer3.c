#include <stdio.h>
#include <math.h>

struct Ponto {
    float x;
    float y;
};

float calcularDistancia(struct Ponto a, struct Ponto b) {
    return sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));
}

int main()
{
    struct Ponto p1, p2;
    float distancia;

    printf("Digite as coordenadas do primeiro ponto (X Y): ");
    scanf("%f %f", &p1.x, &p1.y);

    printf("Digite as coordenadas do segundo ponto (X Y): ");
    scanf("%f %f", &p2.x, &p2.y);

    distancia = calcularDistancia(p1, p2);

    printf("A distância entre os pontos (%.2f, %.2f) e (%.2f, %.2f) é: %.2f\n",p1.x, p1.y, p2.x, p2.y, distancia);

    return 0;
}
