#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=5,valor,i;
    int*P;
    int*j;
    int vec[5];
    int vec2[5];

    P=&x;
    *P=10;
    j=P;
    j=P;
    *vec=14;
    *(vec+1)=7;
    *(vec+2)=4;
    for(i=0;i<5;i++)
    {
       printf("ingrese valor");
       scanf("%d",vec2+i);
        //*(vec2+i)=valor;
    }
    printf("%d\n",x);
    printf("%d\n",*P);
    printf("%d\n",*j);
    printf("%d\n",vec[0]);
    printf("%d\n",vec[1]);
    printf("%d\n",vec[2]);
    for(i=0;i<5;i++)
    {
       printf("%d  ",*(vec2+i));
    }

    //P==&x
    //*P==x
    //una variable puede tener infinitos punteros apuntandolo
    //los punteros puede guardar dirrecciones memoria eje 0x123Af es una dirreccion exadecimal



    return 0;
}
