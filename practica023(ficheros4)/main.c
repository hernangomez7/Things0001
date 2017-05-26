#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int id;
    char marca[20];
    char modelo[15];
    float precio;
}Enotebook;

Enotebook* newNotebook(void);

void mostrarNotebook(Enotebook*x);

Enotebook*newNotebookParam(int id,char*marca,char*modelo,float precio);


int main()
{
    Enotebook otranotebook;//faltandatos
    FILE*f;
    f=fopen("Prueba.bin","wb");
    if(f==NULL)
    {
        printf("no se pudo leer");
        exit(1);
    }
    fwrite(otranotebook,sizeof(Enotebook),1,f);
    //fred(otranotebook,sizeof(Enotebook),1,f);

    otraNotebook=newNotebookParam(12,"hp","envy",30000);
    if(unaNotebook==NULL)
    {
        printf("no se pudo asignar memoria");
        exit(1);
    }
    return 0;
}

Enotebook*newNotebookParam(int id,char*marca,char*modelo,float precio)
{
    Enotebook*x;
    x=(Enotebook*)malloc(sizeof(Enotebook));
    if(x!=NULL)
    {
        x->id=id;
        x->precio=precio;
        strcpy(x->marca,marca);
        strcpy(x->modelo,marca);
    }
    return x;
}

void mostrarNotebook(Enotebook*x)
{
    printf("id= %d\n",x->id);
    printf("marca= %s\n",x->marca);
    printf("modelo= %s\n",x->modelo);
    printf("precio= %.2f\n",x->precio);
}
