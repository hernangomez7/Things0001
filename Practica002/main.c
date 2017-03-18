#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeros;
    float suma=0;
    int numero;
    float resultado;
    for(numeros=5;numeros>0;numeros--)
    {
      printf("Write a number or die do it:\n");
      scanf("%d",&numero);
      suma=suma+numero;
    }
    resultado=(suma)/(5);
    printf("%f",resultado);
    return 0;
}
