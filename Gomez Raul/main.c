#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"
#define TAM 50
#define TAM2 1000
#define TAM3 3000 //suponiendo que la cantidad maxima de programadores que trabajen en un mismo proyecto sea 3 programadores en las relacion tienen que se tres veces los programadores trabajando por proyecto

int main()
{
    Eprogramador Programen[TAM]={{"carlos","apellido1",10,1150},{"agustin","apellido2",11,1101},{"marlon","apellido3",12,1102},{"estela","apellido4",10,1103},{"marta","apellido5",10,1104},{"vera","apellido6",12,1105},{"ana","apellido7",11,1106},{"cristo","apellido8",11,1107},{"elisa","apellido9",12,1108},{"paola","apellido10",12,1109}};
    Eproyecto proyects[TAM2]={{"proyecto1",1},{"proyectoDOS",2},{"proyectoDIOS",3},{"proyectoX",4},{"proyecto-Origen",5}};
    Ecategoria category[3]={{"Junior",10,400},{"Semi-Junior",11,935},{"Senior",12,1350}};
    EproyProg ReProyProg[TAM3]={{3,1150,4},{1,1101,4},{2,1150,2},{2,1102,4},{2,1103,4},{3,1103,4},{5,1104,4},{3,1105,2},{4,1105,2},{1,1106,4},{4,1107,2},{2,1107,2},{5,1108,4},{5,1109,4}};
    char seguir='s';
    int opcion=0;

    /////varibles/////

    do
    {
        printf("1- Alta programdor\n");
        printf("2- modificar dator de pro.\n");
        printf("3- Baja de Programador\n");
        printf("4- Asignar programador a proyecto\n");
        printf("5- Listado de programadores\n");
        printf("6- Listador de todos los proyector\n");
        printf("7- Listador de proyectos mediante id programador\n");
        printf("8- proyectode mandante\n");
        printf("9- Salir\n");


        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                AltaProgramador(Programen,TAM);
            break;
            case 2:
                ModifDatos(Programen,TAM);
            break;
            case 3:
                BajaProgramador(Programen,ReProyProg,TAM,TAM3);
            break;
            case 4:
                Assigproyect(Programen,proyects,ReProyProg,TAM,TAM3);
            break;
            case 5:
                ListProgramen(Programen,proyects,category,ReProyProg,TAM,TAM2,TAM3);
            break;
            case 6:
                 ListProyects(Programen,proyects,category,ReProyProg,TAM,TAM2,TAM3);
            break;
            case 7:
                ListProgramenLess(Programen,category,TAM);
                ListProyIDprog(Programen,proyects,ReProyProg,TAM,TAM2,TAM3);
            break;
            case 8:
                ProyectoDeman(proyects,ReProyProg,TAM2,TAM3);
            break;
            case 9:
                seguir = 'n';
            break;
        }
    }while(seguir=='s');
    return 0;
}
