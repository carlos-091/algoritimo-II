#include <stdio.h>
#include <stdlib.h>

int* produto(int **a, int *b, int n) {
    int *c = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        c[i] = 0;
        for (int j = 0; j < n; j++)
            c[i] += a[i][j] * b[j];
    }
    return c;
}

int main() {
    int n, i, j;
    scanf("%d", &n);
    int *a = malloc(n * sizeof(int));
    for (i = 0; i < n; i++) {
        a[i] = malloc(n * sizeof(int));
        for (j = 0; j < n; j++) scanf("%d", &a[i][j]);
    }
    int *b = malloc(n * sizeof(int));
    for (i = 0; i < n; i++) scanf("%d", &b[i]);
    int *c = produto(a, b, n);
    for (i = 0; i < n; i++) printf("%d ", c[i]);
    for (i = 0; i < n; i++) free(a[i]);
    free(a); free(b); free(c);
    return 0;
}
