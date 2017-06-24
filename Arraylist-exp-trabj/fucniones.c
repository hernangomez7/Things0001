#include "funciones.h"
#include <stdio.h>
//#include <stdlib.h>

int agregarTurgente(Eturnos* tAux, int turno)
{

    do
    {
        printf("ingrese dni:");
        scanf("%d",&(tAux->dni));
    }while(tAux->dni>500000000&&tAux->dni<30000000);

    strcpy(tAux->tipo,"urgente");
    turno++;
    tAux->turno=turno;
    return turno;
}


int escritorEstruc(Eturnos* tAux)
{
    int x=0;
    FILE* file;
    file=fopen("datos.bin","a+b");
    x=fwrite(tAux,sizeof(Eturnos),1,file);
    if(x==0)
        {
            x=1;
        }
        else
        {

            x=0;
        }
    fclose(file);
    system("cls");
    return x;

}


