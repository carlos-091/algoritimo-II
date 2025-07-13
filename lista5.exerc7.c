#include <stdio.h>
#include <stdlib.h>

int* criar_vetor(int n)
{
    if(n<=0) return NULL;

    int *v=(int*)malloc(n*sizeof(int));

    if(v ==NULL)
    {
        printf("err0 de alocaçao de memoria.\n");
        return NULL;
    }

    for(int i=0;i<n;i++)
    {
        *(v+i)=i;
    }

    return v;
}

int main()
{
     int n;

     printf("digite o tamanho do vetor:\n");
     scanf("%d", &n);

     int *vm=criar_vetor(n);

     if(vm != NULL)
     {
         for(int i=0;i<n;i++)
         {
             printf("%d ", vm[i]);
         }
         printf("\n");
         free(vm);
     }

    return 0;


}

