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

int pontodentroretangulo(Retan r, Ponto p)
{
    return ((p.x >= r.superi_esquer.x) && (p.x <= r.infer_direi.x) && (p.y >= r.infer_direi.y) && (p.y <= r.superi_esquer.y));
}

int main()
{
    Retan r;
    Ponto p;

    printf("Digite as coordenadas do ponto superior esquerdo (x y): ");
    scanf("%f %f", &r.superi_esquer.x, &r.superi_esquer.y);

    printf("Digite as coordenadas do ponto inferior direito (x y): ");
    scanf("%f %f", &r.infer_direi.x, &r.infer_direi.y);

    printf("digite as coordenadas do pontos a ser verificado (x y):");
    scanf("%f %f", &p.x, &p.y);

    if(pontodentroretangulo(r, p))
    {
        printf("o ponto esta DENTRO do retangulo.\n");
    }
    else
    {
        printf("o ponto esta FORA do retangulo.\n");
    }

    return 0;
}

