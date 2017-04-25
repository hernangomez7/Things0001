#include <stdio.h>
#include <stdlib.h>
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


typedef struct
{
    int idSerie;
    char titulo[20];
    int temporadas;
    char genero[20];
    int estado;
}eSerie;

typedef struct
{
    int idCliente;
    char nombre[30];
    int estado;
    int idSerie;
}eCliente;

typedef struct
{
    int idSerie;
    int cont;
} eLoser;
void cargarSeries(eSerie[]);
void cargarClientes(eCliente[]);


void mostrarSerie(eSerie);
void mostrarCliente(eCliente);
void mostrarSeries(eSerie[],int);
void mostrarClientes(eCliente[], int);


void mostrarClientesConSerie(eCliente[], eSerie[], int, int);

void mostrarSeriesConClientes(eCliente[], eSerie[], int, int);
void mostrarSerieLoser(eCliente[], eSerie[], int, int);
void mostrarClientesTBBT(eCliente[], eSerie[], int, int);


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
    printf("idcliente\tnombre\testado\tidserie\tnombre-serie\n");

    mostrarClientesConSerie(clientes, series, C, S);



    /*
    mostrarClientesConSerie(clientes, series, C,S);

    mostrarSeriesConClientes(clientes,series,C,S);

    mostrarSerieLoser(clientes, series,C,S);
    mostrarClientesTBBT(clientes, series,C,S);
    */

    return 0;
}

void cargarSeries(eSerie series[])
{
   int idSerie[5]={100,101,102,103,104};
    int estado[5]={1,1,1,1,1};
     char titulo[5][30]={"TBBT","BB","GOT","AHS","SCD"};
    int temporadas[5]={9,7,7,6,1};
    char genero[5][30]={"Comedia","Policial","Ciencia Ficcion","Terror","Comedia"};

    int i;
     for(i=0; i<5;i++)
    {
        series[i].idSerie = idSerie[i];
        strcpy(series[i].titulo, titulo[i]);
        series[i].estado = estado[i];
        series[i].temporadas = temporadas[i];
        strcpy(series[i].genero, genero[i]);
    }

}
void cargarClientes(eCliente clientes[])
{
    int id[10] = {1,2,3,4,5,6,7,8,9,10};
    char nombres[10][30]={"juan","maria","pedro","luis","romina","jose","andrea","patricia","luciano","camila"};
    int estado[10]={1,1,1,1,1,1,1,1,1,1};
    int idSerie[10]={100,100,101,103,103,101,102,103,100,100};
    int i;

    for(i=0; i<10;i++)
    {
        clientes[i].idCliente = id[i];
        strcpy(clientes[i].nombre, nombres[i]);
        clientes[i].estado = estado[i];
        clientes[i].idSerie = idSerie[i];
    }

}

void mostrarSerie(eSerie x)
{
    printf("%d\t%s\t%d\t\t\t%s\t\t%d\n",x.idSerie,x.titulo,x.temporadas,x.genero,x.estado);

}

void mostrarSeries(eSerie z[],int cant)
{
    int y;
    for(y=0;y<cant;y++)
    {
    printf("\n");
    mostrarSerie(z[y]);
    }


}


void mostrarCliente(eCliente x)
{

    printf("%d\t\t%s\t%d\t%d\n",x.idCliente,x.nombre,x.estado,x.idSerie);

}

mostrarClientes(eCliente z[],int cantidad)
{
    int y;
    for(y=0;y<cantidad+1;y++)
    {
    printf("\n");
    mostrarCliente(z[y]);
    }
}






void mostrarClientesConSerie(eCliente z [], eSerie x[],int clientes,int series)
{
    int y,j;
    for(y=0;y<clientes;y++)
    {
        printf("\n");
        for(j=0;j<series;j++)
        {
            if(z[y].idSerie==x[j].idSerie)
            {
                printf("%s",x[j].titulo);
            }

        }

        mostrarCliente(z[y]);
    }
}

