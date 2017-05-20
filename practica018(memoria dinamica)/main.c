#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int* x;
    x = (int*)malloc(5*sizeof(int));
    if(x == NULL)
    {
        printf("no se pudo reservar memoria");
        exit(1);
    }
    for(i=0;i<5;i++)
    {
        printf("ingrese numero: ");
        scanf("%d",(x+i));
    }
    for(i=0;i<5;i++)
    {
        printf("\n");
        printf("%d",*(x+i));
    }

    int* aux;

    aux=(int*)realloc(x,sizeof(int)*10);//aumenta el tamaño almacenado
    if(aux != NULL)
    {
        x=aux;
    }

    for(i=5;i<10;i++)
    {
        printf("ingrese numero: ");
        scanf("%d",(x+i));
    }
    for(i=0;i<10;i++)
    {
        printf("\n");
        printf("%d",*(x+i));
    }



    aux =(int*)calloc(10,sizeof(int)); //inicializa un vector con cer

    if(aux != NULL)
    {
        x=aux;
    }


    for(i=0;i<10;i++)
    {
        printf("\n");
        printf("%d",*(x+i));
    }

    return 0;
}









/*
int main()
{
    int x;
    int*p;
    p=(int*)malloc(sizeof(int));//reserva 4 Byte o un entero- retorna void* -si debuelve null no apunta a ningun lado-lo casteo (int*)
    if(p==null)
    {
        printf("no se pudo reservar memoria");
        exit(1);
    }
    p=10;
    printf("Hello world!\n");
    free(p);
    return 0;
}
*/
