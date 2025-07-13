#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* inverter(char *s) {
    int n = strlen(s);
    char *r = malloc((n + 1) * sizeof(char));
    for (int i = 0; i < n; i++) r[i] = s[n - 1 - i];
    r[n] = '\0';
    return r;
}

int main() {
    char s[100];
    scanf("%s", s);
    char *inv = inverter(s);
    printf("%s\n", inv);
    free(inv);
    return 0;
}
