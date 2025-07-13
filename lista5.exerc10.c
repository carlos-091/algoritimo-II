#include <stdio.h>
#include <stdlib.h>

int* preencher(int n, int v) {
    if (n <= 0) return NULL;
    int *p = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) p[i] = v;
    return p;
}

int main() {
    int n, v;
    scanf("%d%d", &n, &v);
    int *a = preencher(n, v);
    if (a) free(a);
    return 0;
}
