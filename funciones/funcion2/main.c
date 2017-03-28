#include <stdio.h>
#include <stdlib.h>

void sumar(int,int);

int main()
{
    int num1;
    int num2;
    printf("ingrese un numero\n");
    scanf("%d",&num1);
    printf("ingre otro numero\n");
    scanf("%d",&num2);
    sumar(num1,num2);
    return 0;
}
  void sumar(int numero1,int numero2)
{
    int resultado ;
    resultado = numero1 + numero2;
    printf("resultado es = %d",resultado);
}
