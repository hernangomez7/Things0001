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
    ArrayList* atendidos;
    Turgernte = al_newArrayList();
    Tregular = al_newArrayList();
    atendidos = al_newArrayList();

    FILE* f;
    if((f=fopen("datos.bin","ab"))==NULL)
    {
        printf("error de creacion de archivo");
        exit(1);
    }
    fclose(f);

     turno=adicionardorDATOS(Turgernte,Tregular,atendidos,turno);

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
                turno=agregarTurgente(Turgernte,turno);
            break;
            case 2:
                turno=agregarRegular(Tregular,turno);
            break;
            case 3:
                proximoCliente(Turgernte,Tregular,atendidos);
            break;
            case 4:
                ListarPend(Turgernte,Tregular);
            break;
            case 5:
                Informar(atendidos);
            break;
            case 6:
                very=escritorArraylist(Turgernte,Tregular,atendidos);
                if(very!=0)
                {
                    printf("1 error al escribir al arraylist");
                }
                seguir='n';
            break;
        }
    }while(seguir=='s');

        return 0;
}
