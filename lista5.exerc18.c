#include <stdio.h>
#include <stdlib.h>

int** multiplicar(int **a, int **b, int l1, int c1, int l2, int c2) {
    if (c1 != l2) return NULL;
    int *c = malloc(l1 * sizeof(int));
    for (int i = 0; i < l1; i++) {
        c[i] = malloc(c2 * sizeof(int));
        for (int j = 0; j < c2; j++) {
            c[i][j] = 0;
            for (int k = 0; k < c1; k++)
                c[i][j] += a[i][k] * b[k][j];
        }
    }
    return c;
}

int main() {
    int l1, c1, l2, c2, i, j;
    scanf("%d%d", &l1, &c1);
    int *a = malloc(l1 * sizeof(int));
    for (i = 0; i < l1; i++) {
        a[i] = malloc(c1 * sizeof(int));
        for (j = 0; j < c1; j++) scanf("%d", &a[i][j]);
    }
    scanf("%d%d", &l2, &c2);
    int *b = malloc(l2 * sizeof(int));
    for (i = 0; i < l2; i++) {
        b[i] = malloc(c2 * sizeof(int));
        for (j = 0; j < c2; j++) scanf("%d", &b[i][j]);
    }
    int **c = multiplicar(a, b, l1, c1, l2, c2);
    if (c) {
        for (i = 0; i < l1; i++) {
            for (j = 0; j < c2; j++) printf("%d ", c[i][j]);
            printf("\n");
        }
        for (i = 0; i < l1; i++) free(c[i]);
        free(c);
    }
    for (i = 0; i < l1; i++) free(a[i]);
    for (i = 0; i < l2; i++) free(b[i]);
    free(a); free(b);
    return 0;
}
