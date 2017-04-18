#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char nombre[20];
    char apellido[30];
    char nomape[51];
    char aux;
    printf("escribi tu nombre\n");
    gets(nombre);
    printf("escribi tu apellido\n");
    gets(apellido);

    strcpy(nomape,apellido);
    strcat(nomape,", ");
    strcat(nomape,nombre);

    strlwr(nomape);
    nomape[0]=toupper(nomape[0]);
    for(int i=0;i<51;i++)
    {
        if(nomape[i]==' ')
        {
            nomape[i+1]=toupper(nomape[i+1]);
        }
    }






    puts(nomape);

    return 0;
}
