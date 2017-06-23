#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"
#include "array-list.h"





int main()
{
    int opcion=0;
    int turno=0;
    int very;
    char seguir='s';
    ArrayList* Turgernte;
    ArrayList* Tregular;
    ArrayList* antendidos;
    Turgernte = al_newArrayList();
    Tregular = al_newArrayList();
    antendidos = al_newArrayList();


    Eturnos* turnoAux;
    turnoAux =(Eturnos*) malloc(sizeof(Eturnos)*1);
    if(turnoAux==NULL)
    {
         printf("error al asignar espacio");
    }

    Eturnos* turnoAux2;
    turnoAux2 =(Eturnos*) malloc(sizeof(Eturnos)*1);
    if(turnoAux2==NULL)
    {
         printf("error al asignar espacio");
    }


    FILE* f;
    if((f=fopen("datos.bin","ab"))==NULL)
    {
        printf("error de creacion de archivo");
        exit(1);
    }
    fclose(f);

    do
    {
        very=1;
        printf("1_agregar Turno Urgente.\n");
        printf("2_agregar Turno Regular.\n");
        printf("3_Proximo Cliente.\n");
        printf("4_Mostrar lista.\n");
        printf("5_Mostrar informacion.\n");
        printf("6_Salir.\n");

        scanf("%d",&opcion);

       switch(opcion)
        {
            case 1:
                turno=agregarTurgente(turnoAux,turno);
                very=Turgernte->add(Turgernte,turnoAux);
                if(very!=0)
                {
                    printf("error al agregar al arraylist");
                }
//                turnoAux2=(Eturnos*)Turgernte->get(Turgernte,0);
//                printf("%d",turnoAux2->turno);
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


