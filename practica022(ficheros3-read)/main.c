#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cadena[50];
    FILE*f;
    f=fopen("Prueba.txt","r");
    if(f==NULL)
    {
        printf("no se pudo leer");
        exit(1);
    }
    while(!feof(f))
    {
        fgets(cadena,50,f);
        //fgetc(f);
        printf("%s",cadena);
       // printf("%c",x);
    }

    fclose(f);
    return 0;
}
