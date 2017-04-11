#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nombre[20];
    printf("ingrese nombre!\n");
    //scanf("%s",nombre);
    gets(nombre);
    printf("\nUsted se llama %s",nombre);
    return 0;
}
