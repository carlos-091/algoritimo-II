#include <stdio.h>
#include <stdlib.h>

int* soma_colunas(int **m, int n) {
    int *v = malloc(n * sizeof(int));
    for (int j = 0; j < n; j++) {
        v[j] = 0;
        for (int i = 0; i < n; i++)
            v[j] += m[i][j];
    }
    return v;
}

int main() {
    int n, i, j;
    scanf("%d", &n);
    int *m = malloc(n * sizeof(int));
    for (i = 0; i < n; i++) {
        m[i] = malloc(n * sizeof(int));
        for (j = 0; j < n; j++) scanf("%d", &m[i][j]);
    }
    int *v = soma_colunas(m, n);
    for (i = 0; i < n; i++) printf("%d ", v[i]);
    for (i = 0; i < n; i++) free(m[i]);
    free(m); free(v);
    return 0;
}

