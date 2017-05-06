#include "funciones.h"

void cargarPaseadores(ePaseador paseadores[])
{
    char nombre[3][30]={{"juan"},{"miguel"},{"ana"}};
    int idPaseador[3]={1,2,3};
    int i;
     for(i=0; i<3;i++)
    {
        strcpy(paseadores[i].nombre, nombre[i]);
        paseadores[i].idPaseador=idPaseador[i];

    }
}


void cargarperros(ePerro perros[])
{
    char nombre[5][30]={{"bobby"},{"colita"},{"rex"},{"roberto"}};
    int idPerro[5]={10,11,12,13};
    int i;
     for(i=0; i<5;i++)
    {
        perros[i].idPerro = idPerro[i];
        strcpy(perros[i].nombre, nombre[i]);
    }
}



void cargarRazas(eRaza Razas[])
{
   char nombre[5][30]={{"doberman"},{"dogo"},{"salchicha"},{"boxer"}};
    int idRazas[5]={100,200,300,400};

    int i;
     for(i=0; i<5;i++)
    {
        Razas[i].idRaza = idRazas[i];
        strcpy(Razas[i].nombre, nombre[i]);
    }
}



void cargarPaseos(Epaseo Paseos[])
{
    int idpaseo[6]={1,2,3,4,5,6};
    int idPaseador[6]={1,1,2,3,3,1};
    int idPerro[6]={10,11,10,12,13,12};
    int i;
     for(i=0; i<5;i++)
    {
        Paseos[i].idpaseo = idpaseo[i];
        Paseos[i].idPaseador = idPaseador[i];
        Paseos[i].idPerro = idPerro[i];
    }
}
