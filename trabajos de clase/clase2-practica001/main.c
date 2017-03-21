#include <stdio.h>
#include <stdlib.h>

int main()
{
    char respuesta='s';
    int numero=0;
    int numero2;
    int acumulador=0;
    int numerosPar=0;
    int numerosInpar=0;
    int sumaInpar=0;
    int cantNumeros=0;
    float promedi;
    int acumuInpar=0;
    int maximo=0;
    int flag=0;
    int imparMenor;
    int numeroA=0;
    int numeroB=0;
    int numeroC=0;
    int sumatoria=0;
    int sumatoria2=0;
    int x;
    do
    {
        printf("Ingrese un numero\n");
        scanf("%d",&numero);
        while(numero<=0)
        {
             printf("Ingrese un numero positivo\n");
             scanf("%d",&numero);
        }
        acumulador=acumulador+numero;
        if(numero>2&&numero<16)
        {
            numeroA=numeroA+1;
        }
        else if(numero>15&&numero<30)
        {
            numeroB=numeroB+1;
        }
        else if(numero>29)
        {
            numeroC=numeroC+1;
        }
        if(numero>maximo)
        {
            maximo=numero;
        }
        numero2=numero;
        numero=numero%2;
        if(numero==0)
        {
            numerosPar=numerosPar+1;
        }
        else
        {
            numerosInpar=numerosInpar+1;
            sumaInpar=sumaInpar+numero2;
            if(flag==0)
            {
                imparMenor=numero2;
                flag=1;

            }
        }
        if(imparMenor>numero2)
        {
            imparMenor=numero2;
        }
        printf("¿desea continuar S o N?\n");
        fflush(stdin);
        respuesta=getchar();
        cantNumeros=cantNumeros+1;
        promedi=(float)acumulador/cantNumeros;
        sumatoria=sumaInpar;
        for(sumatoria;sumatoria>0;sumatoria--)
        {
            sumatoria2=sumatoria2+sumatoria;
        }
    }while(respuesta=='s');
    printf("numeros que fueron par = %d\n",numerosPar);
    printf("numeros que fueron inpar = %d\n",numerosInpar);
    printf("numeros suma = %d\n",acumulador);
    printf("promedio de numeros = %.2f\n",promedi);
    printf("suma de numeros impares = %d\n",sumaInpar);
    printf("maximo numero ingresado = %d\n",maximo);
    printf("impar minimo = %d\n",imparMenor);
    printf("numeros entre 3-15  = %d\n",numeroA);
    printf("numeros entre 16-29  = %d\n",numeroB);
    printf("numeros mayor o igual a 30 = %d\n",numeroC);
    printf("suma de antecedentes impar = %d\n",sumatoria2);
    for(x=sumaInpar;x>0;x--)
        {
            printf("%d\n",x);
        }
    return 0;
}
