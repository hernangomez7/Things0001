#include <stdio.h>
#include <stdlib.h>
#include "factorial1.h"


int main()
{
    int numero;
    int resultado;
    printf("escribir un numero\n");
    scanf("%d",&numero);
    resultado=factorial(numero);
    printf("%d",resultado);
    return 0;
}


