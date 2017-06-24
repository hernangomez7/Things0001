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


int escritorArraylist(ArrayList* arrayLT)
{
    int x=0;
    int i;
    FILE* file;
    file=fopen("datos.bin","wb");
    Eturnos* tAux;
    for(i=0;i<(al_len(arrayLT));i++)
    {
        tAux=(Eturnos*)arrayLT->get(arrayLT,i);
        fwrite(tAux,sizeof(Eturnos),1,file);
    }

    fclose(file);
    system("cls");
    return x;

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
                    arrayLT->add(arrayLT,adturn);
                }
            }
        }
    fclose(lector);
    return x;
}


