#include <stdio.h>
#include <stdlib.h>

void mostrarMatriz(int [][4]);


int main()
{
    int i,j;
    int matriz[3][4]={0};
    int matriz2[][4]={3,8,9,7,5,2,2,1,9,3,4,3};
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d  ",matriz[i][j]);
        }
         printf("\n");
    }

    printf("\n\n\n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d  ",matriz2[i][j]);
        }
         printf("\n");
    }

    printf("\n\n\n");

    for(j=0;j<4;j++)
        {
           matriz[j][2]=1;
        }

    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d  ",matriz[i][j]);
        }
         printf("\n");
    }

     printf("\n\n\n");

     void mostrarMatriz(matriz);
    /*
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            matriz[i][j]=0;
        }
         printf("\n");
    }


    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&matriz[i][j]);
        }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d  ",matriz[i][j]);
        }
         printf("\n");
    }
    */
    return 0;
}


void mostrarMatriz(int Mz[][4])
{
    int i,j;
    for(i=0;i<3;i++)
        {
            for(j=0;j<4;j++)
            {
                printf("%d  ",Mz[i][j]);
            }
             printf("\n");
        }
}
