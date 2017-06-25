#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "array-list.h"

typedef struct
{
    int dni;
    int turno;
    char tipo[10];
}Eturnos;


int agregarTurgente(ArrayList* ,int );

int agregarRegular(ArrayList*, int );

int escritorArraylist(ArrayList* ,ArrayList* ,ArrayList* );

int adicionardorDATOS(ArrayList* ,ArrayList* ,ArrayList* ,int );

void proximoCliente(ArrayList* ,ArrayList* ,ArrayList* );

void ListarPend(ArrayList* ,ArrayList* );

void Informar(ArrayList* );

int comparaDNI(Eturnos* ,Eturnos* );
