#include <stdio.h>
#include <stdlib.h>

int* somar(int *a, int *b, int n) {
    int *c = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
        c[i] = a[i] + b[i];
    return c;
}

int main() {
    int n, i;
    scanf("%d", &n);
    int *a = malloc(n * sizeof(int));
    int *b = malloc(n * sizeof(int));
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    for (i = 0; i < n; i++) scanf("%d", &b[i]);
    int *c = somar(a, b, n);
    for (i = 0; i < n; i++) printf("%d ", c[i]);
    free(a); free(b); free(c);
    return 0;
}
