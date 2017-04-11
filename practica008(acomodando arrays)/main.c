#include <stdio.h>
#include <stdlib.h>

#define TAM 5
void ordenarVectorInt(int[] ,int ,int );


int main()
{
    int vec[TAM]={5,8,1,3,7};
    printf("vector= ");
    for(int x=0;x<TAM;x++)
    {
        printf("%d ",vec[x]);
    }

    void ordenarVectorInt(vec,TAM,1);

    printf("\nvector= ");
    for(int x=0;x<TAM;x++)
    {
        printf("%d ",vec[x]);
    }


    return 0;
}


void ordenarVectorInt(int vec[],int tam,int modo)
{
    if(modo==1)
    {
        for(int i=0;i<tam-1;i++)
        {
            for(int j=i+1;j<tam;j++)
            {
                if(vec[i]>vec[j])
                {
                    int aux;
                    aux=vec[i];
                    vec[i]=vec[j];
                    vec[j]=aux;
                }
            }
        }
    }
    else
    {
        for(int i=0;i<tam-1;i++)
        {
            for(int j=i+1;j>tam;j++)
            {
                if(vec[i]>vec[j])
                {
                    int aux;
                    aux=vec[i];
                    vec[i]=vec[j];
                    vec[j]=aux;
                }
            }
        }
    }

}


