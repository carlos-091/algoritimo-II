#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    do {
        scanf("%d", &n);
    } while (n < 0);
    int *v = malloc(n * sizeof(int));
    for (i = 0; i < n; i++) {
        do {
            scanf("%d", &v[i]);
        } while (v[i] < 2);
    }
    free(v);
    return 0;
}
