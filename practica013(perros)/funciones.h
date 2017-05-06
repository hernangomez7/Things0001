
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
}Epaseo;


void cargarPaseador(ePaseador[]);
void cargarperros(ePerro[]);
void cargarRazas(eRaza[]);
void cargarPaseos(Epaseo[]);







