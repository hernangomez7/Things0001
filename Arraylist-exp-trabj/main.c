#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "array-list.h"

int main()
{
    int opcion=0;
    char seguir='s';
    ArrayList* Turgernte;
    ArrayList* Tregular;
    ArrayList* antendidos;
    Turgernte = al_newArrayList();
    Tregular = al_newArrayList();
    antendidos = al_newArrayList();


    FILE* f;
    if((f=fopen("datos.bin","ab"))==NULL)
    {
        printf("error de creacion de archivo");
    }
    fclose(f);

    do
    {
        printf("1_agregar Turno Urgente.");
        printf("2_agregar Turno Regular.");
        printf("3_Proximo Cliente.");
        printf("4_Mostrar lista.");
        printf("5_Mostrar informacion.");
        printf("6_Salir.");
       switch(opcion)
        {
            case 1:
            break;
            case 2:
            break;
            case 3:
            break;
            case 4:
            break;
            case 5:
            break;
            case 6:
                seguir='n';
            break;
        }
    }while(seguir=='s');

        return 0;
}
