#include <stdio.h>
#include <stdlib.h>

int* criar(int n) {
    if (n <= 0) return NULL;
    return malloc(n * sizeof(int));
}

int main() {
    int n;
    scanf("%d", &n);
    int *v = criar(n);
    if (v) free(v);
    return 0;
}
