#include <stdio.h>
#include <stdlib.h>
#define TAM 5
//en setting/compiler tildar el ISO 1999
int main()
{
    int numero [TAM];
    for(int i=0;i<TAM;i++)
    {
    printf("ingrese un numero!\n");
    scanf("%d",&numero[i]);
    }
    printf("\n\ numero ingresado =");
    for(int i=0;i<TAM;i++)
    {
    printf(" %d",numero[i]);
    }
    printf("\n\ numero ingresado invertido =");
    for(int i=TAM-1;i>=0;i--)
    {
    printf(" %d",numero[i]);
    }
    for(int i=0;i<TAM;i++)
    {
    numero[i]=numero[i]*2;
    }
    printf("\n numeros ingresado x2 =");
    for(int i=0;i<TAM;i++)
    {
    printf(" %d",numero[i]);
    }


    return 0;
}
