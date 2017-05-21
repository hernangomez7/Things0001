#include "funciones.h"

void ImprecionProgtodos(Eprogramador A[],int max)//don't kill it
{
    int i;
    for(i=0;i<max;i++)
    {
        if(A[i].idProgramador>0)
        {
        printf("nombre= %s\n",A[i].nombre);
        printf("apellido= %s\n",A[i].apellido);
        printf("idcategoria= %d\n",A[i].idCategoria);
        printf("idprogramador= %d\n\n",A[i].idProgramador);
        }
    }
}

void impriproy(Eproyecto D[],int max)//don't kill it
{
    int i;
    for(i=0;i<max;i++)
    {
        if(D[i].idProyecto>0)
        {
            printf("idproyecto= %d\n",D[i].idProyecto);
            printf("nombre= %s\n",D[i].nombre);
            printf("***********************\n");
        }

    }
}

void AltaProgramador(Eprogramador A[],int max)
{
    int i,j,auxnumb,flagwhile=0,flagEsp=0;
    char auxname[100];
    for(i=0;i<max;i++)
    {
        if(A[i].idProgramador==0)
        {
            system("cls");
            printf("Alta de programador\n");
            do
            {
                flagwhile=0;
                printf("ingrese nombre\n");
                scanf("%s",&auxname);
                if(strlen(auxname)>31)
                {
                    printf("nombre muy largo\n");
                    flagwhile=1;
                }
            }while(flagwhile==1);
            strcpy(A[i].nombre,auxname);
            system("cls");

            do
            {
                flagwhile=0;
                printf("ingrese apellido\n");
                scanf("%s",&auxname);
                if(strlen(auxname)>31)
                {
                    printf("apellido muy largo\n");
                    flagwhile=1;
                }
            }while(flagwhile==1);
            strcpy(A[i].apellido,auxname);
            system("cls");

            do
            {
                flagwhile=0;
                printf("categoria=Junior(id:10)\tcategoria=Semi-Junior(id:11)\tcategoria=Senior(id:12)\n");
                printf("ingrese idcategoria\n");
                scanf("%d",&auxnumb);
                if(auxnumb<10||auxnumb>12)
                {
                    printf("categoria inexistente ingrese 10, 11 o 12\n");
                    flagwhile=1;
                }
            }while(flagwhile==1);
            A[i].idCategoria=auxnumb;
            system("cls");

            do
            {
                flagwhile=0;
                impIdProg(A,max);//impresor de IDes
                printf("ingrese idProgramador\n");
                scanf("%d",&auxnumb);
                printf("%d\n",auxnumb);
                if(auxnumb<1100)
                {
                    printf("idProgramador muy chico\n");
                    flagwhile=1;
                }
                for(j=0;j<max;j++)
                {
                    if(A[j].idProgramador==auxnumb)
                    {
                        printf("idProgramador existente\n");
                        flagwhile=1;
                    }
                }
            }while(flagwhile==1);
            A[i].idProgramador=auxnumb;
            system("cls");
            flagEsp=0;
            break;
        }
        else
        {
            flagEsp=1;
        }
    }
    if(flagEsp==1)
    {
        //system("cls");
        printf("sin espacio!\n");
    }
}

void impIdProg(Eprogramador A[],int max)
{
    int i;
    printf("idetificacion existentes:\n");
    for(i=0;i<max;i++)
    {
        if(A[i].idProgramador>0)
        {
        printf("idprogramador= %d\n",A[i].idProgramador);
        }
    }
}
void ModifDatos(Eprogramador A[],int max)
{
    int id,i,j,flagESP=1,flagwhile=0,opcion=0,auxnumb;
    char auxname[100],seguir='s';
    ImprecionProgtodos(A,max);
    printf("\ningrese id de programador(Moficacion)\n");
    scanf("%d",&id);
    for(i=0;i<max;i++)
    {
        if(A[i].idProgramador==id)
        {
            while(seguir=='s')
            {
                system("cls");
                ImpProgX(A,i);//impime datos
                printf("\n\n");
                printf("1- cambiar nombre\n");
                printf("2- cambiar apellido\n");
                printf("3- cambiar categoria\n");
                printf("4- cambiar id\n");
                printf("5- salir\n");
                scanf("%d",&opcion);
                switch(opcion)
                {
                    case 1://Alta programador
                        do
                        {
                            flagwhile=0;
                            system("cls");
                            printf("ingrese nombre\n");
                            scanf("%s",&auxname);
                            if(strlen(auxname)>31)
                            {
                                printf("nombre muy largo\n");
                                flagwhile=1;
                            }
                        }while(flagwhile==1);
                        strcpy(A[i].nombre,auxname);
                        system("cls");

                    break;
                    case 2:
                        do
                        {
                            flagwhile=0;
                            printf("ingrese apellido\n");
                            scanf("%s",&auxname);
                            if(strlen(auxname)>31)
                            {
                                printf("apellido muy largo\n");
                                flagwhile=1;
                            }
                        }while(flagwhile==1);
                        strcpy(A[i].apellido,auxname);
                        system("cls");

                    break;
                    case 3:
                        do
                        {
                            flagwhile=0;
                            printf("categoria=Junior(id:10)\tcategoria=Semi-Junior(id:11)\tcategoria=Senior(id:12)\n");
                            printf("ingrese idcategoria\n");
                            scanf("%d",&auxnumb);
                            if(auxnumb<10||auxnumb>12)
                            {
                                printf("categoria inexistente ingrese 10, 11 o 12\n");
                                flagwhile=1;
                            }
                        }while(flagwhile==1);
                        A[i].idCategoria=auxnumb;
                        system("cls");

                    break;
                    case 4:
                        do
                        {
                            flagwhile=0;
                            impIdProg(A,50);//impresor de IDes
                            printf("ingrese idProgramador\n");
                            scanf("%d",&auxnumb);
                            printf("%d\n",auxnumb);
                            if(auxnumb<1100)
                            {
                                printf("idProgramador muy chico\n");
                                flagwhile=1;
                            }
                            for(j=0;j<max;j++)
                            {
                                if(A[j].idProgramador==auxnumb)
                                {
                                    printf("idProgramador existente\n");
                                    flagwhile=1;
                                }
                            }
                        }while(flagwhile==1);
                        A[i].idProgramador=auxnumb;
                        system("cls");

                    break;
                    case 5://Modificar datos
                        seguir='n';
                    break;
                }
            }
            flagESP=0;
            system("cls");
            break;
        }
    }
    if(flagESP==1)
    {
        system("cls");
        printf("programador no encontrado\n");
    }
}

void ImpProgX(Eprogramador A[],int Numb)
{
        printf("nombre= %s\n",A[Numb].nombre);
        printf("apellido= %s\n",A[Numb].apellido);
        printf("idcategoria= %d\n",A[Numb].idCategoria);
        printf("idprogramador= %d\n\n",A[Numb].idProgramador);
}

void BajaProgramador(Eprogramador A[],EproyProg B[],int max,int max2)
{
    int i,j,id,flagEsp=1;
    char empty[31]={0};
    system("cls");
    printf("ingrese id de programador(BAJA)\n");
    scanf("%d",&id);
    system("cls");
    for(i=0;i<max;i++)
    {
        if(A[i].idProgramador==id)
        {
            strcpy(A[i].nombre,empty);
          // A[i].nombre='0';
           strcpy(A[i].apellido,empty);
           //A[i].apellido='0';
           A[i].idCategoria=0;
           A[i].idProgramador=0;
           for(j=0;j<max2;j++)
           {
               if(B[j].idProgramador==id)
               {
                   B[j].idProgramador=0;
                   B[j].idProyecto=0;
                   B[j].horaTrab=0;
               }

           }
           printf("Eliminado!\n");
            flagEsp=0;
        }
    }
     if(flagEsp==1)
     {
         printf("id incorrecto!\n");
     }
}


void Assigproyect(Eprogramador A[],Eproyecto B[],EproyProg C[],int max,int max2)
{
    int idProg,idProy,horas,i,j,flagwhile,auxnumb,exist=1;

        ImprecionProgtodos(A,50);

     do
    {
        flagwhile=0;
        exist=0;
        printf("ingrese id Programador\n");
        scanf("%d",&idProg);
        if(idProg<1100)
        {
            printf("idProgramador inexistente\n");
            flagwhile=1;
        }else
        {
            for(i=0;i<max;i++)
            {
                if(idProg==A[i].idProgramador)
                {
                    exist=1;
                    break;
                }
            }
        }
        if(exist==0)
        {
            printf("id Programador no encontrado\n");
            flagwhile=1;
        }
    }while(flagwhile==1);

    system("cls");
    impriproy(B,1000);

    do
    {
        flagwhile=0;
        exist=0;
        printf("ingrese id proyecto\n");
        scanf("%d",&idProy);
        if(idProy<0||idProy>1000)
        {
            printf("idproyecto inexistente\n");
            flagwhile=1;
        }else
        {
            for(i=0;i<50;i++)
            {
                if(B[i].idProyecto==idProy)
                {
                    exist=1;
                    break;
                }
            }
        }
        if(exist==0)
        {
            printf("id proyecto no encontrado\n");
            flagwhile=1;
        }
    }while(flagwhile==1);

    do
    {
    printf("ingresar horarios de trabajos 1-6 hs\n");
    scanf("%d",&horas);
    }while(horas>6||horas<1);

    for(i=0;i<max2;i++)
    {
        if(C[i].idProgramador==0)
        {
            C[i].horaTrab=horas;
            C[i].idProgramador=idProg;
            C[i].idProyecto=idProy;
            system("cls");
            break;
        }
    }
}

void ListProgramen(Eprogramador A[],Eproyecto B[],Ecategoria C[],EproyProg D[],int max,int max2,int max3)
{
    burbujeo(A,max);
    int i,j,x,z,idproy,idprog,horas,blackflag=0,horacont=0;
    float diner,dinercont=0;
    system("cls");
    for(i=0;i<max;i++)
    {
        if(A[i].idProgramador>0)
        {
            printf("-----------------------\n");
            printf("nombre= %s\n",A[i].nombre);
            printf("apellido= %s\n",A[i].apellido);
             for(j=0;j<max3;j++)
             {
                 if(A[i].idCategoria==C[j].idCategoria)
                 {
                     printf("categoria = %s\n",C[j].nombre);
                     break;
                 }
             }
           // printf("idcategoria= %d\n",A[i].idCategoria);
            printf("idprogramador= %d\n",A[i].idProgramador);
            printf("\n");
            printf("Proyectos asignados a %s\n",A[i].nombre);
            for(j=0;j<max3;j++)
            {

                if(A[i].idProgramador==D[j].idProgramador)
                {
                   // horas=D[j].horaTrab;
                   // idprog=D[j].idProgramador;

                    for(x=0;x<max2;x++)
                    {
                        if(D[j].idProyecto==B[x].idProyecto)
                        {
                            printf("%s\n",B[x].nombre);
                            for(z=0;z<3;z++)
                            {
                                if(A[i].idCategoria==C[z].idCategoria)
                                {
                                    printf("trabaja = %d hrs\n",D[j].horaTrab);
                                    horacont=horacont+D[j].horaTrab;
                                    diner=(D[j].horaTrab*C[z].PagoXhora);
                                    printf("cobra = %.2f$\n",diner);
                                    dinercont=dinercont+(C[z].PagoXhora*D[j].horaTrab);
                                    blackflag=1;
                                }
                            }
                        }
                    }
                }
            }
            if(blackflag==1)
            {
                printf("trabaja un total = %d hrs\n",horacont);
                printf("cobra un total = %.2f$\n",dinercont);
                blackflag=0;
                dinercont=0;
                horacont=0;
                printf("--------------------\n\n");
            }


        }
    }
}

void burbujeo(Eprogramador A[],int max)
{
    int i,j,auxnumb;
    char aux[31];
    for(i=0;i<max;i++)
    {
        for(j=0;j<max;j++)
        {
            if(A[i].idProgramador<A[j].idProgramador)
            {
                strcpy(aux,A[i].nombre);
                strcpy(A[i].nombre,A[j].nombre);
                strcpy(A[j].nombre,aux);
                strcpy(aux,A[i].apellido);
                strcpy(A[i].apellido,A[j].apellido);
                strcpy(A[j].apellido,aux);
                auxnumb=A[i].idCategoria;
                A[i].idCategoria=A[j].idCategoria;
                A[j].idCategoria=auxnumb;
                auxnumb=A[i].idProgramador;
                A[i].idProgramador=A[j].idProgramador;
                A[j].idProgramador=auxnumb;
            }
        }
    }
}


void ListProyects(Eprogramador A[],Eproyecto B[],Ecategoria C[],EproyProg D[],int max,int max2,int max3)
{
    system("cls");
    int i,j,x,z,Junicont=0,Semicont=0,Senicont=0,blackflag=0,sumaProgramen;
    for(i=0;i<max2;i++)
    {
        if(B[i].idProyecto>0)
        {
            printf("-----------------------\n");
            printf("nombre= %s\n",B[i].nombre);
            printf("id de proyecto= %d\n",B[i].idProyecto);
            for(j=0;j<max3;j++)
            {
                if(B[i].idProyecto==D[j].idProyecto)
                {
                    for(x=0;x<max;x++)
                    {
                        if(D[j].idProgramador==A[x].idProgramador)
                        {
                            if(A[x].idCategoria==10)
                            {
                                Junicont=Junicont+1;
                            }
                            if(A[x].idCategoria==11)
                            {
                                Semicont=Semicont+1;
                            }
                             if(A[x].idCategoria==12)
                            {
                                Senicont=Senicont+1;
                            }
                            blackflag=1;
                            break;
                        }
                    }
                }
            }
        }
        if(blackflag==1)
        {
            printf(" \n");
            printf("Juniors en proyecto= %d\n",Junicont);
            printf("Semi-Juniors en proyecto= %d\n",Semicont);
            printf("Senior en proyecto= %d\n",Senicont);
            sumaProgramen=Junicont+Semicont+Senicont;
            printf("programadores en proyecto= %d\n",sumaProgramen);
            printf("-----------------------\n\n");
            Junicont=0;
            Semicont=0;
            Senicont=0;
            blackflag=0;
        }
    }

}

void ListProgramenLess(Eprogramador A[],Ecategoria C[],int max)
{
    burbujeo(A,max);
    int i,j;
    system("cls");
    for(i=0;i<max;i++)
    {
        if(A[i].idProgramador>0)
        {
            printf("-----------------------\n");
            printf("nombre= %s\n",A[i].nombre);
            printf("apellido= %s\n",A[i].apellido);
             for(j=0;j<3;j++)
             {
                 if(A[i].idCategoria==C[j].idCategoria)
                 {
                     printf("categoria = %s\n",C[j].nombre);
                 }
             }
           // printf("idcategoria= %d\n",A[i].idCategoria);
            printf("idprogramador= %d\n",A[i].idProgramador);
            printf("-----------------------\n\n");
        }
    }
}

void ListProyIDprog(Eprogramador A[],Eproyecto B[],EproyProg D[],int max,int max2,int max3)
{
    int i,j,idprog;
    printf("ingrese id progrmador\n");
    scanf("%d",&idprog);
    system("cls");

    for(i=0;i<max;i++)
    {
        if(idprog==A[i].idProgramador)
        {
            printf("nombre= %s\n",A[i].nombre);
            printf("apellido= %s\n",A[i].apellido);
            printf("idcategoria= %d\n",A[i].idCategoria);
            printf("idprogramador= %d\n",A[i].idProgramador);
             printf("-----------------------\n");
            printf("proyectos a los que pertenece\n");
            break;
        }
    }
    for(i=0;i<max3;i++)
    {
        if(idprog==D[i].idProgramador)
        {
            for(j=0;j<max2;j++)
                {
                    if(D[i].idProyecto==B[j].idProyecto)
                    {
                        printf("nombre de proyecto= %s\n",B[j].nombre);
                        printf("id de proyecto= %d\n",B[j].idProyecto);
                    }
                }
        }
    }
    printf("\n");
}

void ProyectoDeman(Eproyecto A[],EproyProg B[],int max,int max2)
{
    system("cls");
    EProyectDemi Demandado[1000]= {0};
    int i,j,flag=0,idganador,maximum;
    char ganador[31];
    for(i=0;i<max;i++)
    {
        if(A[i].idProyecto>0)
        {
            for(j=0;j<max2;j++)
            {
                if(A[i].idProyecto==B[j].idProyecto)
                {
                    Demandado[i].cont=Demandado[i].cont+1;
                    Demandado[i].idProyecto=A[i].idProyecto;
                    strcpy(Demandado[i].nombre,A[i].nombre);
                }
            }
        }
    }
    for(i=0;i<max;i++)
    {
        if(flag==0)
        {
            maximum=Demandado[i].cont;
            idganador=Demandado[i].idProyecto;
            strcpy(ganador,Demandado[i].nombre);
            flag=1;
        }
        else if(maximum<Demandado[i].cont)
        {
            maximum=Demandado[i].cont;
            idganador=Demandado[i].idProyecto;
            strcpy(ganador,Demandado[i].nombre);
        }
    }
    for(i=0;i<max;i++)
    {
        if(maximum==Demandado[i].cont && idganador!=Demandado[i].idProyecto)
        {
            printf("proyecto mas Demandado= %s\n",ganador);
            printf("con %d programadores\n",maximum);
            printf("id de proyecto %d\n\n",idganador);
            maximum=Demandado[i].cont;
            idganador=Demandado[i].idProyecto;
            strcpy(ganador,Demandado[i].nombre);
        }
    }
    if(flag==1)
    {
        printf("proyecto mas Demandado= %s\n",ganador);
        printf("con %d programadores\n",maximum);
        printf("id de proyecto %d\n",idganador);
    }
}




