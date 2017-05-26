#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cadena[]={"Hatredy in the hell tonight"};
    int cant;
    int escrito;
    FILE*f;
    f=fopen("Prueba.txt","w");
    if(f==NULL)
    {
        printf("no se pudo crear el fichero");
        exit(1);
    }
    cant=strlen(cadena);
    escrito=fwrite(cadena,sizeof(char),cant,f);
    if(escrito<cant)
    {
        printf("problemas al escribir en el fichero");
    }
    //fprintf(f,"hola mundo");
    fclose(f);
    return 0;
}

