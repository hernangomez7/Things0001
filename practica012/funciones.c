#include "funciones.h"

void cargarSeries(eSerie series[])
{
   int idSerie[5]={100,101,102,103,104};
    int estado[5]={1,1,1,1,1};
     char titulo[5][30]={"TBBT","BB","GOT","AHS","SCD"};
    int temporadas[5]={9,7,7,6,1};
    char genero[5][30]={"Comedia","Policial","Sci-fi ","Terror","Comedia"};

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
    char nombres[10][30]={"juan","maria","pedro","luis","romina","jose","andrea","romina","luciano","camila"};
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
//********Cargar  Datos****************


void mostrarSerie(eSerie x)
{
    printf("%d\t%s\t%d\t\t%s\t\t%d\n",x.idSerie,x.titulo,x.temporadas,x.genero,x.estado);

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
    for(y=0;y<cantidad;y++)
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
                printf("%s\t",x[j].titulo);
            }

        }

        mostrarCliente(z[y]);
    }
}

void mostrarSeriesConClientes(eCliente z[], eSerie x[], int cliente, int serie)
{
    int i,j;
    for(i=0;i<serie;i++)
    {
        printf("\n%s\t",x[i].titulo);
        for(j=0;j<cliente;j++)
        {
            if(x[i].idSerie==z[j].idSerie)
            {
                printf("%s ",z[j].nombre);
            }

        }
         printf("\n");
    }
}

void mostrarClientesTBBT(eCliente z[], eSerie x[], int serie, int cliente)
{
int i,j;
    for(i=0;i<1;i++)
    {
        printf("\n%s\t",x[i].titulo);
        for(j=0;j<cliente;j++)
        {
            if(x[i].idSerie==z[j].idSerie)
            {
                printf("%s ",z[j].nombre);
            }

        }
         printf("\n");
    }
}

void mostrarSerieLoser(eCliente z[], eSerie x[], int cliente, int serie)
{
    int i,j,Flag=0,min;
    eLoser SeriePerdedora[5]={{100,0},{101,0},{102,0},{103,0},{104,0}};


    for(i=0;i<serie;i++)
    {
        for(j=0;j<cliente;j++)
        {
            if(SeriePerdedora[i].idSerie==z[j].idSerie)
            {
                SeriePerdedora[i].cont++;
            }
        }

    }
    for(i=0;i<serie;i++)
    {
        if(Flag==0)
        {
            min=SeriePerdedora[i].cont;
        }else
        if(min>SeriePerdedora[i].cont)
        {
            min=SeriePerdedora[i].cont;
        }
    }

     for(i=0;i<serie;i++)
    {
        if(SeriePerdedora[i].cont==min)
        {
            mostrarSerie(x[i]);
        }

    }

}

void TodasSeriesJuan(eCliente z[], eSerie x[], int cliente, int serie)
{
    char nombrez[30]={"juan"};
    int i,j;
    for(i=0;i<cliente;i++)
    {
        if(strcmp(z[i].nombre,nombrez )==0)
        {
            for(j=0;j<serie;j++)
            {
                if(z[i].idSerie==x[j].idSerie)
                {
                    printf("%s\n",x[j].titulo);

                }
            }
        }
    }
}

void LasSerieNombre(eCliente z[], eSerie x[], int cliente, int serie,char nombrez[])
{
    int i,j;
    for(i=0;i<cliente;i++)
    {
        if(strcmp(z[i].nombre,nombrez )==0)
        {
            for(j=0;j<serie;j++)
            {
                if(z[i].idSerie==x[j].idSerie)
                {
                    printf("%s\n",x[j].titulo);

                }
            }
        }
    }
}

