#include <stdio.h>
#include <stdlib.h>

int busca(int **m, int l, int c, int v) {
    for (int i = 0; i < l; i++)
        for (int j = 0; j < c; j++)
            if (m[i][j] == v) return 1;
    return 0;
}

int main() {
    int l, c, i, j, x;
    scanf("%d%d", &l, &c);
    int *m = malloc(l * sizeof(int));
    for (i = 0; i < l; i++) m[i] = malloc(c * sizeof(int));
    for (i = 0; i < l; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &m[i][j]);
    scanf("%d", &x);
    printf("%d\n", busca(m, l, c, x));
    for (i = 0; i < l; i++) free(m[i]);
    free(m);
    return 0;
}
