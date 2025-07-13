#include <stdio.h>
#include <stdlib.h>

int** diagonal_secundaria(int n) {
    int *m = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        m[i] = malloc(n * sizeof(int));
        for (int j = 0; j < n; j++)
            m[i][j] = (i + j == n - 1) ? 1 : 0;
    }
    return m;
}

int main() {
    int n;
    scanf("%d", &n);
    int **m = diagonal_secundaria(n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%d ", m[i][j]);
        printf("\n");
    }
    for (int i = 0; i < n; i++) free(m[i]);
    free(m);
    return 0;
}
