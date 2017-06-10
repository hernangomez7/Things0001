#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int calcularPrin(int ,int ,int );
int intermedioxAnios(int ,int );
int calcFinal(int ,int ,int ,int ,int );


int main()
{
    SYSTEMTIME fecha;
    GetLocalTime(&fecha);
    printf("fecha:%2d/%2d/%4d .hora:%02d:%02d:%02d\n",fecha.wDay,fecha.wMonth,fecha.wYear,fecha.wHour,fecha.wMinute,fecha.wSecond);
    int anio;
    int anio1;
    int mes1;
    int dia1;
    int acumulador=0;
    int anioSys;
    int diaSys;
    int mesSys;

    anioSys=fecha.wYear;
    mesSys=fecha.wMonth;
    diaSys=fecha.wDay;



//     if(anio % 4 == 0 && (anio % 100 != 0 || anio % 400 == 0)){
//         printf("El anio Si es bisiesto ");
//     }else{
//         printf("El anio  No es bisiesto ");
//     }
    printf("ingrese dia :");
    scanf("%d",&dia1);
    printf("ingrese mes :");
    scanf("%d",&mes1);
    printf("ingrese año: ");
    scanf("%d",&anio1);

     acumulador=acumulador+calcularPrin(dia1,mes1,anio1);
     acumulador=acumulador+intermedioxAnios(anio1,anioSys);
     acumulador=acumulador+calcFinal(dia1,mes1,diaSys,mesSys,anioSys);
     printf("dias vividos %d",acumulador);

    return 0;

}

int calcularPrin(int dia,int mes,int anio)
 {
     mes=mes-1;
     dia=dia-1;
     int acumulador=0;
     int i;
     acumulador=acumulador-dia;
     if(anio % 4 == 0 && (anio % 100 != 0 || anio % 400 == 0))
        {
            if(mes<2)
            {
                acumulador=acumulador+1;
            }

        }

        for(i=mes;i<12;i++)
        {
            if(i==0||i==2||i==4||i==6||i==7||i==9||i==11)
            {
                acumulador=acumulador+31;
            }
            if(i==3||i==5||i==8||i==10)
            {
                acumulador=acumulador+30;
            }
                if(i==1)
            {
                acumulador=acumulador+28;
            }
        }
        return acumulador;

 }


int intermedioxAnios(int anio,int anioSys)
{
    int acumulador=0,i;
    anio=anio+1;
    for(i=anio;i<anioSys;i++)
    {
        acumulador+=365;
         if(i % 4 == 0 && (i % 100 != 0 || i % 400 == 0))
        {
            acumulador=acumulador+1;
        }
    }
    return acumulador;
}

int calcFinal(int dia1,int mes1,int diaSys,int mesSys,int anioSys)
{
    int acumulador=0;
    int i;
    acumulador+=diaSys;
    if(anioSys % 4 == 0 && (anioSys % 100 != 0 || anioSys % 400 == 0))
        {
            acumulador=acumulador+1;
        }
    for(i=mes1;i<mesSys;i++)
    {
        if(i==0||i==2||i==4||i==6||i==7||i==9||i==11)
        {
            acumulador=acumulador+31;
        }
        if(i==3||i==5||i==8||i==10)
        {
            acumulador=acumulador+30;
        }
            if(i==1)
        {
            acumulador=acumulador+28;
        }
    }
    return acumulador;
}
