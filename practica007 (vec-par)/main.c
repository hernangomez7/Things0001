#include <stdio.h>
#include <stdlib.h>

#define TAM 11



int main()
{
    int legajo[TAM],edad[TAM],nota[TAM],aux,flag=0,maximo,promedio,acumulador=0,flag1=0;
    char respuesta='n';
    while(respuesta=='n')
    {
        printf("1)Ingresar datos\n");
        printf("2)Busca por legajo\n");
        printf("3)Maxima nota listado a todos los alumnos que tengan esa nota\n");
        printf("4)Calcular promedio de notas\n");
        printf("5)Listar todo\n");
        printf("6)Salir\n");
        int opcion=0;
        scanf("%d",&opcion);
        switch(opcion)
        {
            case 1:
                for(int i=0;i<TAM-1;i++)
                {
                    printf("ingrese legajo\n");
                    scanf("%d",&legajo[i]);
                    printf("ingrese edad\n");
                    scanf("%d",&edad[i]);
                    printf("ingrese nota\n");
                    scanf("%d",&nota[i]);
                }
                system("cls");
            break;
            case 2:
                printf("ingrese legajo\n");
                scanf("%d",&aux);
                 for(int i=0; i<TAM; i++)
                 {
                    if(legajo[i]==aux)
                    {
                      system("cls");
                       printf("%d, %d, %d\n",legajo[i],edad[i],nota[i]);
                       flag1=1;
                    }
                }
                if(flag1==0)
                {
                    system("cls");
                    printf("legajo inexistente\n\n");
                }

            break;
            case 3:
                 for(int i=0;i<TAM-1;i++)
                 {
                    if(flag==0)
                    {
                        maximo=nota[i];
                        flag=1;
                    }else if(nota[i]>maximo)
                    {
                        maximo=nota[i];
                    }
                 }
                 for(int i=0;i<TAM-1;i++)
                 {
                     if(nota[i]==maximo)
                     {
                        system("cls");
                        printf("el maximo es = %d\n",maximo);
                        printf("%d \%d \%d\n",legajo[i],edad[i],nota[i]);
                     }
                 }
            break;
            case 4:
                for(int i=0;i<TAM-1;i++)
                {
                    acumulador=acumulador+nota[i];
                }
                promedio=acumulador/(TAM-1);
                system("cls");
                printf("promedio = %d\n",promedio);
            break;
            case 5:
            for(int i=0;i<TAM-1;i++)
            {
            printf("%d\t%d\t%d\n",legajo[i],edad[i],nota[i]);
            }
            break;
            case 6:
            respuesta='s';
            break;
        }
    }
    return 0;
}
