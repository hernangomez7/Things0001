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


int agregarTurgente(Eturnos*,int );

int escritorArraylist(ArrayList* );

int adicionardorDATOS(ArrayList* );
