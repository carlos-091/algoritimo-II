#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[100];
    int idade;
    char endereco[100];
} Cadastro;

Cadastro* criarCadastro(int n) {
    Cadastro *v = malloc(n * sizeof(Cadastro));
    for (int i = 0; i < n; i++) {
        scanf(" %[^\n]", v[i].nome);
        scanf("%d", &v[i].idade);
        scanf(" %[^\n]", v[i].endereco);
    }
    return v;
}

int main() {
    int n;
    scanf("%d", &n);
    Cadastro *cadastros = criarCadastro(n);
    free(cadastros);
    return 0;
}
