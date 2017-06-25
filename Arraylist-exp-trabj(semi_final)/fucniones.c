#include "funciones.h"
#include <stdio.h>

int agregarTurgente(ArrayList* arraLT, int turno)
{
    Eturnos* tAux;
    tAux =(Eturnos*) malloc(sizeof(Eturnos)*1);
    if(tAux==NULL)
    {
         printf("error al asignar espacio");
    }
    do
    {
        printf("ingrese dni:");
        scanf("%d",&(tAux->dni));
    }while(tAux->dni>999000000&&tAux->dni<30000000);

    strcpy(tAux->tipo,"urgente");
    turno++;
    tAux->turno=turno;
    arraLT->add(arraLT,tAux);
    system("cls");
    return turno;
}

int agregarRegular(ArrayList* arraLT, int turno)
{
    Eturnos* tAux;
    tAux =(Eturnos*) malloc(sizeof(Eturnos)*1);
    if(tAux==NULL)
    {
         printf("error al asignar espacio");
    }
    do
    {
        printf("ingrese dni:");
        scanf("%d",&(tAux->dni));
    }while(tAux->dni>999000000&&tAux->dni<30000000);

    strcpy(tAux->tipo,"regular");
    turno++;
    tAux->turno=turno;
    arraLT->add(arraLT,tAux);
    system("cls");
    return turno;
}

int escritorArraylist(ArrayList* urgent,ArrayList* regular,ArrayList* atendido)
{
    int x=1;
    int tamanio;
    int i;
    FILE* file;
    file=fopen("datos.bin","wb");
    Eturnos* tAux;
    tamanio=al_len(urgent);
    if(tamanio>0)
    {
        for(i=0;i<tamanio;i++)
        {
            tAux=(Eturnos*)urgent->get(urgent,i);
            fwrite(tAux,sizeof(Eturnos),1,file);
            x=0;
        }
    }
    tamanio=al_len(regular);
    if(tamanio>0)
    {
        for(i=0;i<tamanio;i++)
        {
            tAux=(Eturnos*)regular->get(regular,i);
            fwrite(tAux,sizeof(Eturnos),1,file);
            x=0;
        }
    }
    tamanio=al_len(atendido);
    if(tamanio>0)
    {
        for(i=0;i<tamanio;i++)
        {
            tAux=(Eturnos*)atendido->get(atendido,i);
            fwrite(tAux,sizeof(Eturnos),1,file);
            x=0;
        }
    }

    fclose(file);
    system("cls");
    return x;
}

int adicionardorDATOS(ArrayList* Turgen,ArrayList* Treg,ArrayList* atend,int turnos)
{
    system("cls");
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
                   if(strcmp(adturn->tipo,"urgente")==0)
                    {
                        turnos++;
                        Turgen->add(Turgen,adturn);
                    }
                    else if(strcmp(adturn->tipo,"regular")==0)
                    {
                        turnos++;
                        Treg->add(Treg,adturn);
                    }
                    else
                    {
                        turnos++;
                        atend->add(atend,adturn);
                    }
            }
        }
    fclose(lector);
    return turnos;
}

void proximoCliente(ArrayList* urgent,ArrayList* regul,ArrayList* atendido)
{
    system("cls");
    Eturnos* TAux;
    TAux =(Eturnos*) malloc(sizeof(Eturnos)*1);
    if(TAux==NULL)
    {
         printf("error al asignar espacio");
         exit(1);
    }


    if(0==urgent->isEmpty(urgent))
    {
        TAux=urgent->pop(urgent,0);
        printf("el siguente turno es %d\n",TAux->turno);
        strcpy(TAux->tipo,"aten-URG");
        atendido->add(atendido,TAux);

    }
    else if(0==regul->isEmpty(regul))
    {
        TAux=regul->pop(regul,0);
        printf("el siguente turno es %d\n",TAux->turno);
       strcpy(TAux->tipo,"aten-REG");
        atendido->add(atendido,TAux);

    }
    else
    {
        printf("no hay mas clientes\n");
    }
}

void ListarPend(ArrayList* urgent,ArrayList* regul)
{
    system("cls");
    Eturnos* TAux;
    TAux =(Eturnos*) malloc(sizeof(Eturnos)*1);
    int tamanio;
    int i;
    tamanio=al_len(urgent);
    if(tamanio>0)
    {
        for(i=0;i<tamanio;i++)
        {
            TAux=(Eturnos*)urgent->get(urgent,i);
            printf("turno: %d\n",TAux->turno);
            printf("DNI: %d\n",TAux->dni);
            printf("typo: %s\n\n",TAux->tipo);
        }
    }
    tamanio=al_len(regul);
    if(tamanio>0)
    {
        for(i=0;i<tamanio;i++)
        {
            TAux=(Eturnos*)regul->get(regul,i);
            printf("turno: %d\n",TAux->turno);
            printf("DNI: %d\n",TAux->dni);
            printf("typo: %s\n\n",TAux->tipo);
        }
    }
}

void Informar(ArrayList* atendido)
{
    system("cls");
    int i,tamanio;
    Eturnos* TAux;
    TAux =(Eturnos*) malloc(sizeof(Eturnos)*1);
    atendido->sort(atendido,comparaDNI,0);
    tamanio=al_len(atendido);
    if(tamanio>0)
    {
        for(i=0;i<tamanio;i++)
        {
            TAux=(Eturnos*)atendido->get(atendido,i);
            printf("turno: %d\n",TAux->turno);
            printf("DNI: %d\n",TAux->dni);
            printf("typo: %s\n\n",TAux->tipo);
        }
    }
}

int comparaDNI(Eturnos* eturn,Eturnos* eturn2)
{
if(((Eturnos*)eturn)->dni > ((Eturnos*)eturn2)->dni)
{
return 1;
}
if(((Eturnos*)eturn)->dni < ((Eturnos*)eturn2)->dni)
{
return -1;
}
return 0;
}








