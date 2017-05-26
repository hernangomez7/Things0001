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
    Enotebook* unaNotebook;
    Enotebook* otraNotebook;
    unaNotebook=newNotebook();
    if(unaNotebook==NULL)
    {
        printf("no se pudo asignar memoria");
        exit(1);
    }
    mostrarNotebook(unaNotebook);


    otraNotebook=newNotebookParam(12,"hp","envy",30000);
    if(unaNotebook==NULL)
    {
        printf("no se pudo asignar memoria");
        exit(1);
    }
    mostrarNotebook(otraNotebook);
    free(unaNotebook);
    free(otraNotebook);
    //printf("Hello world!\n");
    return 0;
}

Enotebook*newNotebook(void)
{
    Enotebook*x;
    x=(Enotebook*)malloc(sizeof(Enotebook));
    if(x!=NULL)
    {
        x->id=0;
        x->precio=0;
        strcpy(x->marca,"N/D");
        strcpy(x->modelo,"N/D");
    }


    return x;
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




/*V 1.0
Enotebook*newNotebook(void)
{
    Enotebook*x;
    x=(Enotebook*)malloc(sizeof(Enotebook));
    return x;
}
*/
