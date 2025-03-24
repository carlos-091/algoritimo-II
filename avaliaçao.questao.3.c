#include <stdio.h>

int main()
{
long long int r=0,fat=1;

printf("de qual numero deseja ver o fatorial:");
scanf("%d",&r);

for(int i=1;i<=r;i++)
    {
      fat=fat*i;
      printf("\n%d!=%d",i,fat);

    }
return 0;
}
