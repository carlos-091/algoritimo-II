#include <stdio.h>

int cres(int a,int b,int c)
{
    int maior,dep=2000000;

    for(int i=1;i <= 3;i++)
      {
      if(a >=maior && a<dep)
       {
          maior=a;
       }
      if(b >= maior && b<dep)
       {
          maior=b;
       }
      if(c>=maior && c<dep)
       {
          maior=c;
       }

       printf("%d\n",maior);
       dep=maior;
       maior=-2000000;
  }
}

int main()
{
    int a,b,c;

  printf("digite um valor:");
  scanf("%d",&a);

  printf("digite outro valor:");
  scanf("%d",&b);

  printf("digite mais um valor:");
  scanf("%d",&c);

  cres(a,b,c);

    return 0;
}

