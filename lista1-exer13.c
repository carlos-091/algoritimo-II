#include <stdio.h>
#include <math.h>

int tri(int a,int b,int c)
{
    if  (((abs(b - c)) < a) && (a < (b + c)) && ((abs(a - c)) < b) && (b < (a + c)) && ((abs(a - b)) < c) && (c < (a + b)))//abs pra qualque numero nrgativo vira um numero positivo  inteiro e verificanod a existencia do triangulo.
  {

    printf("esse triangulo esta na condicao de existencia");

    if ((a == b)&& (a==c))
    {

      printf("\ne um triangulo equilatero.");

    }


    if (((a != c) && (a != b)) && ((c != b) &&(c !=a)))
    {
      printf("\ne um triangulo escaleno.");
    }


    if(((a == b && b != c) && (a != c)) || ((b == c) && (a != c) && (a != b)) || ((c == a) && (c != b) && (b != a)))
    {
      printf("\ne um triangulo isoceles.");
    }
  }


  else
  {
     printf("esse triangulo nao existe,faca outro");

  }

}

int main()
{
    int a,b,c;

  printf("digite o valor lado de um triangulo:");
  scanf("%d",&a);

  printf("digite outro valor lado:");
  scanf("%d",&b);

  printf("digite o valor da hipotenusa:");
  scanf("%d",&c);

  tri(a,b,c);

    return 0;
}
