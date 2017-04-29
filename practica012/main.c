#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define S 5
#define C 10


/*
2- mostrar cada uno
3- mostrar clientes con su serie
4- por cada serie los clientes que la estan viendo
5- todos los clientes que ven TBBT (100)
6- La serie menos popular

Crear una cuarta estructura que permita relacionar un cliente con una serie, de esta manera podremos obtener una relacion
muchos a muchos (Un cliente que ve muchas series)

7- Todas las series que ven los clientes de nombre "Juan"
*/




void mostrarSerieLoser(eCliente[], eSerie[], int, int);



int main()
{
    eSerie series[S];
    eCliente clientes[C];
    cargarSeries(series);
    cargarClientes(clientes);
/*
    mostrarSerie(series[0]);
    mostrarCliente(clientes[0]);
    */
    printf("idSerie\ttitulo\ttemporada\tgenero\t\testado\n");
    mostrarSeries(series, S);
    printf("**********************************************************\n");
    printf("idcliente\tnombre\testado\tidserie\n");
    mostrarClientes(clientes, C);
    printf("**********************************************************\n");
    printf("serie\tidcliente\tnombre\testado\tidserie\n");
    mostrarClientesConSerie(clientes, series, C, S);
    printf("**********************************************************\n");
    mostrarSeriesConClientes(clientes,series,C,S);
    printf("**********************************************************\n");
    mostrarClientesTBBT(clientes, series,C,S);
    printf("**********************************************************\n");
    mostrarSerieLoser(clientes, series,C,S);


    return 0;
}


void mostrarSerieLoser(eCliente z[], eSerie x[], int serie, int cliente)
{
int i,j,Cont[serie];



    for(i=0;i<serie;i++)
    {

    }


   /*
   if(i==0)
        {
            min=loser[i].cant
        }
        if(min>loser[i]cant);
   */

}
