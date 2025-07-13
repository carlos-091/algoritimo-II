#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, j;
    scanf("%d", &n);
    int *m = malloc(n * sizeof(int));
    for (i = 0; i < n; i++) {
        m[i] = malloc(n * sizeof(int));
        for (j = 0; j < n; j++) {
            if (i == j) m[i][j] = 0;
            else if (i < j) m[i][j] = 1;
            else m[i][j] = -1;
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            printf("%d ", m[i][j]);
        printf("\n");
        free(m[i]);
    }
    free(m);
    return 0;
}
