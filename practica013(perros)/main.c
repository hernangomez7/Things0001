#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"
#define S 5
#define C 10

 int IDporNombre(ePerro[], char[],int );

int main()
{
    char opcion,respuesta='n',nombre[20];
    int id;

    ePaseador paseadores[3];
    ePerro  Perros[5];
    eRaza   Razas[5];
    Epaseo  Paseos[6];

    cargarPaseadores(paseadores);
    cargarperros(Perros);
    cargarRazas(Razas);
    cargarPaseos(Paseos);

    do
    {
        printf("1)cuantos paseos realiza x(nombre)");
        opcion=getch();
         switch(opcion)
        {
            case '1'://cuantos paseos hizo bobby
                gets(nombre);
                id = IDporNombre(Perros,nombre,5);
                system("cls");
                printf("%d\n",id);
            break;
            case'2'://cual es el paseador que mas pasea
            break;
            case'3'://paseadores que pasearon doberman
            break;
            case'4'://perros con sus razas
            break;
            case'5'://mostrar perros por razas
            break;
            case'6'://cuantos cobra cada paseador
            break;
            case'7'://salir
            break;
        }

    }while(opcion='7');


    return 0;
}

int  IDporNombre(ePerro A[],char nombre[],int cant)
{
    int i,id;
    for(i=0;i<cant;i++)
    {
        if(strcmp(A[i].nombre,nombre)==1)
        {
            id=A[i].idPerro;
            printf("%s",A[i].idPerro);
        }
    }
    return id;
}
