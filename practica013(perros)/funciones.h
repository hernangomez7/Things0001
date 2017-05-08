
typedef struct
{

    char nombre[30];
    int idPaseador;

}ePaseador;

typedef struct
{

    char nombre[30];
    int idPerro;

}ePerro;

typedef struct
{

    char nombre[30];
    int idRaza;

}eRaza;

typedef struct
{
    int idpaseo;
    int idPaseador;
    int idPerro;
    int idRaza;
}Epaseo;

typedef struct
{

    int idPaseador;
    int cont;

}epaseostotal;
typedef struct
{
    char nombre[30];
    int idRaza;
}Erazaperro;

void cargarPaseador(ePaseador[]);
void cargarperros(ePerro[]);
void cargarRazas(eRaza[]);
void cargarPaseos(Epaseo[]);


////////////CARGA DE DATOS///////////////////


int IDporNombre(ePerro[], char[],int );

void MostrarPerro(ePerro [],int );

int PaseosXID(Epaseo [],int ,int );

void IDporPaseador(ePaseador[],Epaseo [],int ,int );

void PaseadoresDoberman(ePaseador[],Epaseo [],int ,int );

void PerrosRazas(eRaza[],Epaseo [],ePerro [],int ,int ,int );



