#include <stdio.h>
#include <stdlib.h>

int** identidade(int n) {
    int *m = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        m[i] = malloc(n * sizeof(int));
        for (int j = 0; j < n; j++)
            m[i][j] = i == j ? 1 : 0;
    }
    return m;
}

int main() {
    int n;
    scanf("%d", &n);
    int **m = identidade(n);
    for (int i = 0; i < n; i++) free(m[i]);
    free(m);
    return 0;
}
