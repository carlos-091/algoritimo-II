#include <stdio.h>

int main()
{
    int a;
    int *b, **c,***d;

    printf("digite um numero:\n");
    scanf("%d", &a);
    b=&a;
    c=&b;
    d=&c;

    printf("esses sao dobro:%d,triplo:%d,quadruplo:%d de %d\n",(*b)*2, (**c)*3, (***d)*4, a);
    return 0;
}
