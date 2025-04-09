char hll(char f)
{
    printf("oi");
}
char impri(char *texto)
{
    printf("%s",texto);
    return 1;
}
char impri(char *texto)
{
    printf("%s",texto);

    printf("ok")
    return 1;
}
void bhaska(double a,double b,double c)
{
    double delta=(b*b)-(4*a*c);

    if(delta<0)
    {
        printf("nao possui raizes");
    }
    else
    {
        double res1=(-b+sqrt(delta))/(2*a);

        double res2=(-b-sqrt(delta))/(2*a);

        printf("As raízes são: %f e %f\n", res1, res2);
    }
    return 0;
}
int temp (int seg)
{
    printf("segundos em:\n");
    int hora=3600*seg;
    printf("horas:%d",hora);

    int minutos=60*seg;
    printf("\nminutos:%d",minutos);

    printf("\nsegundos:%d",seg);
    return 1;
}
int conta(int anos,int meses,int dias)
{
    int total;

    anos*=364;

    meses*=30;

    total=meses+anos+dias;

    printf("esse e quantidades anos em dias:%d",total);
}
int perf(int num)
{
    int soma=0;
    for(int i=1;i<=num/2;i++)
    {
        if(num%i==0)
        {
            soma=soma+i;
        }
    }
    if(soma==num)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void determinar(int idade,char cate[])
{
    if(idade<5)
    {
        strcpy(cate, "Sem Categoria");
    }
    else if((idade>=5)&&(idade<=7))
    {
        strcpy(cate, "Infantil A");
    }
    else if((idade>=8)&&(idade<=10))
    {
        printf("categoria Infantil B");
        strcpy(cate, "Infantil B");
    }
    else if((idade>=11)&&(idade<=13))
    {
        strcpy(cate, "Juvenil A");
    }
    else if((idade>=14)&&(idade<=17))
    {
        strcpy(cate, "Juvenil B");
    }
    else
    {
        strcpy(cate, "Adulto");
    }

}
void posi(int num)
{
    if(num>0)
    {
      printf("esse numero positivo");
    }
    else
    {
        printf("esse numero negativo");
    }

    return 0;
}
void par(int num)
{
    if(num%2==0)
    {
      printf("esse numero par");
    }
    else
    {
        printf("esse numero impar");
    }

    return 0;
}

void nota(double not)
{
    if((not>=0)&&(not<=4.9))
    {
      printf("D");
    }
    if((not>=5)&&(not<=6,9))
    {
        printf("C");
    }
    if((not>=7)&&(not<=8,9))
    {
        printf("B");
    }
    if((not>=9)&&(not<=10))
    {
        printf("A");
    }

    return 0;
}
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

void media(int num[],int n)
{
    double soma=0,result=0;

    for(int i=0;i<n;i++)
    {
        soma=soma+num[i];
    }
    result=soma/n;

    printf("a media aritimetia e:%.2lf",result);

}
void poten(int z,int x)
{
    int pon=1;
    for(int i=0;i<z;i++)
    {
        pon *= x;
    }
    printf("X^Z:%d",pon);

}
