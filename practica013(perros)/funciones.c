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
    char nombre[4][30]={{"bobby"},{"colita"},{"rex"},{"rober"}};
    int idPerro[4]={10,11,12,13};
    int i;
     for(i=0; i<4;i++)
    {
        perros[i].idPerro = idPerro[i];
        strcpy(perros[i].nombre, nombre[i]);
    }
}



void cargarRazas(eRaza Razas[])
{
   char nombre[4][30]={{"doberman"},{"dogo"},{"salchicha"},{"boxer"}};
    int idRazas[4]={100,200,300,400};

    int i;
     for(i=0; i<4;i++)
    {
        Razas[i].idRaza = idRazas[i];
        strcpy(Razas[i].nombre, nombre[i]);
    }
}



void cargarPaseos(Epaseo Paseos[])
{
    int idpaseo[6]={1,2,3,4,5,6};
    int idPaseador[6]={1,1,2,3,3,1};
    //int idPerro[6]={10,10,10,10,10,10};
    int idRaza[6]={100,200,100,200,300,400,300};
   // int idRaza[6]={100,100,100,100,100,100,100};
    int idPerro[6]={10,11,10,12,13,12};
    int i;
     for(i=0; i<6;i++)
    {
        Paseos[i].idpaseo = idpaseo[i];
        Paseos[i].idPaseador = idPaseador[i];
        Paseos[i].idPerro = idPerro[i];
        Paseos[i].idRaza = idRaza[i];
    }
}

//////////////////////////////CARGAR DATOS/////////////////////////////





int  IDporNombre(ePerro A[],char nombre[],int cant)
{
    int i,id;
    for(i=0;i<cant;i++)
    {
        if(strcmp(A[i].nombre,nombre)==0)
        {
            id=A[i].idPerro;
        }
    }
    return id;
}

void MostrarPerro(ePerro A[],int cant)
{
    int i;
    for(i=0;i<cant;i++)
    {
        printf("%d,%s\n",A[i].idPerro,A[i].nombre);
    }
}

int PaseosXID(Epaseo A[],int id,int cant)
{
    int i,paseos=0;
    for(i=0;i<cant;i++)
    {
        if(A[i].idPerro == id)
        {
            paseos=paseos+1;

        }
    }
    return paseos;
}



void  IDporPaseador(ePaseador A[],Epaseo B[],int paseador,int paseos)
{
    int i,j,minimun,flag=0,id;
    epaseostotal total[3]={{1,0},{2,0},{3,0}};

    for(i=0;i<paseador;i++)//los paseos contador
    {
        for(j=0;j<paseos;j++)
        if(A[i].idPaseador==B[j].idPaseador)
        {
            total[i].cont++;
        }
    }

    for(i=0;i<paseador;i++)
    {
        if(flag==0)
        {
            minimun=total[i].cont;
            flag=1;
        }printf("%d\n",id);
         if(minimun<total[i].cont)
        {
            minimun=total[i].cont;
        }
    }

    for(i=0;i<paseador;i++)
    {
         if(minimun==total[i].cont)
        {
            system("cls");
            printf("%d\n",total[i].cont);
            printf("%s\n",A[i].nombre);
        }
    }

}

void  PaseadoresDoberman(ePaseador A[],Epaseo B[],int paseador,int paseos)
{
    system("cls");
    int i,j,k,flag=0,id;
    int PaseadoresP[3]={0};

    for(i=0;i<paseos;i++)
    {
        for(j=0;j<paseador;j++)
        {
            if(B[i].idRaza==100)
            {
                id=B[i].idPaseador;
                for(k=0;k<paseador;k++)
                {
                    if(id==A[k].idPaseador)
                    {
                        if(PaseadoresP[k]==0)
                            {
                                printf("%s\n",A[k].nombre);
                                PaseadoresP[k]=1;
                                flag++;
                            }

                    }
                }
            }
        }
    }
    if(flag==0)
    {
        printf("no se encontraron paseadores\n");
    }
}

void  PerrosRazas(eRaza A[],Epaseo B[],ePerro C[],int razas,int paseos,int perros)
{
    system("cls");
    int i,j,k,flag=0,id;
    int perrosprin[4]={0};


    for(i=0;i<perros;i++)
    {
        printf("%s\n",C[i].nombre);
        for(j=0;j<paseos;j++)
        {
            if(B[j].idPerro==C[i].idPerro)
            {
                if(perrosprin[i]==0)
                {
                    printf("--%s\n",A[i].nombre);
                    perrosprin[i]++;
                }

            }

        }
    }



/*

    for(i=0;i<paseos;i++)
    {
        for(j=0;j<perros;j++)
        {
            if(B[i].idPerro==C[j].idPerro)
            {
                printf("%s\n",C[j].nombre);
                for(k=0;k<razas;k++)
                {
                    if(B[j].idRaza==A[j].idRaza)
                    printf("  %s\n",A[i].nombre);
                }

            }
        }
    }
    */
}
