#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE*f;
    f=fopen("Prueba.txt","w");
    if(f==NULL)
    {
        printf("no se pudo crear el fichero");
        exit(1);
    }
    fprintf(f,"hola mundo");
    fclose(f);
    return 0;
}
