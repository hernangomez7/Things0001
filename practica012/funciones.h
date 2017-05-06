
typedef struct
{
    int idSerie;
    char titulo[20];
    int temporadas;
    char genero[20];
    int estado;
}eSerie;

typedef struct
{
    int idCliente;
    char nombre[30];
    int estado;
    int idSerie;
}eCliente;

typedef struct
{
    int idSerie;
    int cont;
} eLoser;

void cargarSeries(eSerie[]);
void cargarClientes(eCliente[]);

void mostrarSerie(eSerie);
void mostrarSeries(eSerie[],int);

void mostrarCliente(eCliente);
void mostrarClientes(eCliente[], int);

void mostrarClientesConSerie(eCliente[], eSerie[], int, int);
void mostrarSeriesConClientes(eCliente[], eSerie[], int, int);

void mostrarClientesTBBT(eCliente[], eSerie[], int, int);
void mostrarSerieLoser(eCliente[], eSerie[], int, int);

void TodasSeriesJuan(eCliente[], eSerie[], int, int);
void LasSerieNombre(eCliente[], eSerie[], int, int, char[]);
