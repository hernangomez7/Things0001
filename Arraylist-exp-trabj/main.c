#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"
#include "array-list.h"


int adicionardorDATOS(ArrayList* );


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


    very=adicionardorDATOS(Turgernte );
    if(very!=0)
    {
        printf("error al leer arraylist");
    }

    do
    {
        very=1;
        printf("1_agregar Turno Urgente.\n");
        printf("2_agregar Turno Regular.\n");
        printf("3_Proximo Cliente.\n");
        printf("4_Mostrar lista.\n");
        printf("5_Mostrar informacion.\n");
        printf("6_Salir.\n");
        printf("7_print arralys '0'.\n");
        printf("8_print arralys '1'.\n");

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
                very = escritorEstruc(turnoAux);
                if(very!=0)
                {
                    printf("error al escribir los datos");
                }
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
            case 7:
                turnoAux2=(Eturnos*)Turgernte->get(Turgernte,0);
                printf("DNI: %d\n",turnoAux2->dni);
                printf("turno: %d\n",turnoAux2->turno);
                printf("typo: %s\n",turnoAux2->tipo);
            break;
            case 8:
                turnoAux2=(Eturnos*)Turgernte->get(Turgernte,1);
                printf("DNI: %d\n",turnoAux2->dni);
                printf("turno: %d\n",turnoAux2->turno);
                printf("typo: %s\n",turnoAux2->tipo);
            break;
        }
    }while(seguir=='s');

        return 0;
}

int adicionardorDATOS(ArrayList* arrayLT)
{
    system("cls");
    int x;
    int cont=1;
    FILE* lector;
    Eturnos* adturn;
    adturn =(Eturnos*) malloc(sizeof(Eturnos)*1);
    if(adturn==NULL)
    {
        printf("fatal error");
    }


    lector=fopen("datos.bin","rb+");
    if(lector==NULL)
    {
        printf("\nno se pudo leer archivo\n");
    }

        while(!feof(lector))
        {
            adturn= malloc(sizeof(Eturnos));
            if((fread(adturn,sizeof(Eturnos),1,lector))==1)
            {
                {
                    al_add(arrayLT,adturn);
                }
            }
        }
    fclose(lector);
    return x;
}


