#include <stdio.h>
#include <stdlib.h>



typedef struct
{
    int legajo;
    char nombre[20];
    float sueldo;
}Eenpleado;


void CargarEmpleado(Eenpleado* );

int main()
{
    Eenpleado unEmpleado;
    CargarEmpleado(&unEmpleado);

    printf("legajo %d\n",unEmpleado.legajo);
    printf("nombre %s\n",unEmpleado.nombre);
    printf("sueldo %f\n",unEmpleado.sueldo);

   /* int vec[]={3,2,1,4,8};
    printf("%d",vec[3]);
    printf("\n%d",*(vec+3));//*(vec+3)direccionde memoria*/
    return 0;
}
void CargarEmpleado(Eenpleado* x)
{

    printf("ingrese legajo:\n");
    scanf("%d",&x->legajo);
    printf("ingrese nombre\n");
    fflush(stdin);
    gets(x->nombre);
    printf("ingrese sueldo\n");
    scanf("%f",&x->sueldo);
}


/*
typedef struct
{
    int legajo;
    char nombre[20];
    float sueldo;
}Eenpleado;

Eenpleado CargarEmpleado(Eenpleado);

int main()
{
    Eenpleado unEmpleado;
    unEmpleado=CargarEmpleado(unEmpleado);

    printf("legajo %d\n",unEmpleado.legajo);
    printf("nombre %s\n",unEmpleado.nombre);
    printf("sueldo %f\n",unEmpleado.sueldo);

    int vec[]={3,2,1,4,8};
    printf("%d",vec[3]);
    printf("\n%d",*(vec+3));//*(vec+3)direccionde memoria
    return 0;
}
Eenpleado CargarEmpleado(Eenpleado x)
{

    printf("ingrese legajo:\n");
    scanf("%d",&x.legajo);
    printf("ingrese nombre\n");
    fflush(stdin);
    gets(x.nombre);
    printf("ingrese sueldo\n");
    scanf("%f",&x.sueldo);
    system("cls");
    return x;

    printf("legajo %d\n",x.legajo);
    printf("nombre %s\n",x.nombre);
    printf("sueldo %.2f\n",x.sueldo);

}
*/

/*con puntero

typedef struct
{
    int legajo;
    char nombre[20];
    float sueldo;
}Eenpleado;


void CargarEmpleado(Eenpleado* );

int main()
{
    Eenpleado unEmpleado;
    CargarEmpleado(&unEmpleado);

    printf("legajo %d\n",unEmpleado.legajo);
    printf("nombre %s\n",unEmpleado.nombre);
    printf("sueldo %f\n",unEmpleado.sueldo);

    int vec[]={3,2,1,4,8};
    printf("%d",vec[3]);
    printf("\n%d",*(vec+3));//*(vec+3)direccionde memoria
    return 0;
}
void CargarEmpleado(Eenpleado* x)
{

    printf("ingrese legajo:\n");
    scanf("%d",&(*x).legajo);
    printf("ingrese nombre\n");
    fflush(stdin);
    gets((*x).nombre);
    printf("ingrese sueldo\n");
    scanf("%f",&(*x).sueldo);
}
*/
