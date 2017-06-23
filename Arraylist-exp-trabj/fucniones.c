#include "funciones.h"

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



