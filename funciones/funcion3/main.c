#include <stdio.h>
#include <stdlib.h>

void sumar(void);

int main()
{
    sumar();
    return 0;
}
  void sumar(void)
{
    int num1;
    int num2;
    int resultado;
    printf("ingrese un numero\n");
    scanf("%d",&num1);
    printf("ingre otro numero\n");
    scanf("%d",&num2);
    resultado = num1 + num2;
    printf("resultado es = %d",resultado);
}
