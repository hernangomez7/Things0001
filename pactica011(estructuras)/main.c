#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int dia;
    int mes;
    int ano;
}fnac;



typedef struct
{
    int legajo;
    char nombre[20];
    float sueldo;
    char sexo;
    fnac efecha ;
}epersona;


void mostrarpersona(epersona);
void mostrarpersonas(epersona[],int);

int main()
{
    epersona unaPersona;
    epersona gente[]={{1024,"juan",10500,'m',{4,5,2000}},{7561,"ana",14800,'f',{24,8,1998}},{1775,"carlos",25450,'m',{27,2,1990}},{4751,"evelin",37510,'f',{14,7,1895}},{7541,"mauro",14750,'m',{4,8,1895}}};
    /*
    printf("ingrese legajo:\n");
    scanf("%d",&unaPersona.legajo);
    printf("ingrese nombre:\n");
    fflush(stdin);
    gets(unaPersona.nombre);
    fflush(stdin);
    printf("ingrese sueldo:\n");
    scanf("%f",&unaPersona.sueldo);
    fflush(stdin);
    printf("ingrese sexo:\n");
    scanf("%c",&unaPersona.sexo);
    printf("ingrese dia de nacimiento:\n");
    scanf("%02d/",&unaPersona.efecha.dia);
    printf("ingrese mes de nacimiento:\n");
    scanf("%02d/",&unaPersona.efecha.mes);
    printf("ingrese año de nacimiento:\n");
    scanf("%d",&unaPersona.efecha.ano);
    */

    mostrarpersona(unaPersona);
    mostrarpersonas(gente,5);

    return 0;
}

void mostrarpersona(epersona x)
{
    printf("legajo= %d\n",x.legajo);
    printf("nombre= %s\n",x.nombre);
    printf("sueldoxdecada= %.2f\n",x.sueldo);
    printf("sexo= %c\n",x.sexo);

    printf("fecha de nacimiento= %d-%d-%d",x.efecha.dia,x.efecha.mes,x.efecha.ano);


}

void mostrarpersonas(epersona z[],int tam)
{
    int y;
    for(y=0;y<tam-1;y++)
    {
    printf("\n");
    mostrarpersona(z[y]);
    }

}

