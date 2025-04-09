#include <stdio.h>

char impri(char *texto)
{
    printf("%s",texto);

    printf("ok")
    return 1;
}

int main()
{
    char texto[100];

    printf("me diga um texto:");
    scanf("%99[^\n]s",&texto);

    impri(texto);
    return 0;
}
