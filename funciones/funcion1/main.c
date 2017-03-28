#include <stdio.h>
#include <stdlib.h>

int sumar(int,int);

int main()
{
    int num1;
    int num2;
    int resultado;
    printf("ingrese un numero\n");
    scanf("%d",&num1);
    printf("ingre otro numero\n");
    scanf("%d",&num2);
    resultado=sumar(num1,num2);
    printf("el resultado es = %d",resultado);
    return 0;
}
  int sumar(int numero1,int numero2)
{
    int result ;
    result = numero1 + numero2;
    return result;
}
