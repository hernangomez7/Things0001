#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"





int main()
{
    char opcion,respuesta='s',nombre[20];
    int id,paseos;

    ePaseador paseadores[3];
    ePerro  Perros[4];
    eRaza   Razas[4];
    Epaseo  Paseos[6];

    cargarPaseadores(paseadores);
    cargarperros(Perros);
    cargarRazas(Razas);
    cargarPaseos(Paseos);

    while(respuesta=='s')
    {
        printf("1) cuantos paseos realiza (nombre).\n");
        printf("2) cual es el paseador que mas pasea.\n");
        printf("3) paseadores que pasearon doberman.\n");
        printf("4) perros con sus razas.\n");
        printf("5) mostrar perros por razas.\n");
        printf("6) cuantos cobra cada paseador.\n");
        printf("7) salir.\n");

        opcion=getch();


         switch(opcion)
        {
            case '1'://cuantos paseos hizo bobby
                printf("ingrese nombre de perro\n");
                fflush(stdin);
                gets(nombre);
                id = IDporNombre(Perros,nombre,4);
                paseos = PaseosXID(Paseos,id,6);
                system("cls");
                printf("%d paseos\n",paseos);
            break;
            case'2'://cual es el paseador que mas pasea
                IDporPaseador(paseadores,Paseos,3,4);
            break;
            case'3'://paseadores que pasearon doberman
                PaseadoresDoberman(paseadores,Paseos,3,6);
            break;
            case'4'://perros con sus razas
                PerrosRazas(Razas,Paseos,Perros,4,6,4);
            break;
            case'5'://mostrar perros por razas
            break;
            case'6'://cuantos cobra cada paseador(100$ paseo)
            break;
            case'7'://salir
                respuesta='n';
            break;
        }

    }


    return 0;
}





