#include "funciones.h"

int sumar(int N1,int N2)
{
    int rspta;
    rspta=N1+N2;
    return rspta;
}

int resta(int N1,int N2)
{
    int rspta;
    rspta=N1-N2;
    return rspta;
}

int division(int N1,int N2)
{
    int rspta;
    rspta=N1/N2;
    return rspta;
}

int multiplicacion(int N1,int N2)
{
    int rspta;
    rspta=N1*N2;
    return rspta;
}

int factorial(int N1)
{
    int rspta;
    if(N1==1)
    {
        rspta=1;
    }else
    {
        rspta=N1*factorial(N1-1);
    }
    return rspta;
}
