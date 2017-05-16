#include <stdio.h>
#include <stdlib.h>

void mostrarMatriz(float [][12]);

int main()
{
    float Colectivos[3][12]={0};
    float dineroRec=0,acumulador=0;
    int linea,colectivo,i,j;
    char respuesta='s';
    int opcion=0;

    do{
            printf("1) cargar datos.\n");
            printf("2) salir.\n");
            scanf("%d",&opcion);
            switch(opcion)
            {
            case 1:
                printf("numero de linea");
                scanf("%d",&linea);
                printf("numero colectivo");
                scanf("%d",&colectivo);
                printf("dinero recaudado");
                scanf("%f",&dineroRec);
                Colectivos[linea-1][colectivo-1]=Colectivos[linea-1][colectivo-1]+(dineroRec);
            break;
            case 2:
                respuesta='n';
            break;


            }


    }while(respuesta=='s');

    for(i=0;i<3;i++)
    {
        acumulador=0;
        for(j=0;j<12;j++)
        {
            acumulador=acumulador+Colectivos[i][j];
            if(j==11)
            {
                Colectivos[i][j]=acumulador;
            }
        }
    }

    for(i=0;i<12;i++)
    {
        acumulador=0;
        for(j=0;j<3;j++)
        {
            acumulador=acumulador+Colectivos[j][i];
            if(j==2)
            {
                Colectivos[j][i]=acumulador;
            }
        }
    }

    acumulador=0;
    dineroRec=0;
    for(i=0;i<12;i++)
    {
        for(j=0;j<3;j++)
        {
            acumulador=acumulador+Colectivos[j][i];
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<12;j++)
        {
            dineroRec=dineroRec+Colectivos[i][j];
        }
    }

    Colectivos[3][12]=dineroRec+acumulador;

    mostrarMatriz(Colectivos);
    return 0;
}

void mostrarMatriz(float Mz[][12])
{
    int i,j;
    for(i=0;i<3;i++)
        {
            for(j=0;j<12;j++)
            {
                printf("%.2f  ",Mz[i][j]);
            }
             printf("\n");
        }
}
