typedef struct
{
    char nombre[31];
    char apellido[31];
    int idCategoria;
    int idProgramador;
}Eprogramador;

typedef struct
{
    char nombre[31];
    int idProyecto;
}Eproyecto;

typedef struct
{
    char nombre[31];
    int idCategoria;
    float PagoXhora;
}Ecategoria;

typedef struct
{
    int idProyecto;
    int idProgramador;
    int horaTrab;
}EproyProg;

typedef struct
{
    char nombre[31];
    int idProyecto;
    int cont;
}EProyectDemi;

////////////////////STRUCTURE///////////////
/** \brief Imprime todos los programadores.
 *
 * \param   estructura de programadores a imprimir.
 * \param   cantidad maxima de programadores.
 * \return  void
 *
 */
void ImprecionProgtodos(Eprogramador [],int );
/** \brief Imprime todos los proyectos.
 *
 * \param   estructura de proyectos a imprimir.
 * \param   cantidad maxima de proyectos.
 * \return  void
 *
 */
void impriproy(Eproyecto [],int );
///////////////////////////////////
/** \brief Imprime todos id de programadores.
 *
 * \param   estructura de programadores a imprimir.
 * \param   cantidad maxima de programadores.
 * \return  void
 *
 */
void impIdProg(Eprogramador [],int );
/** \brief busca espacio y toma datos para guardar un nuevo programador.
 *
 * \param   estructura de programadores.
 * \param   cantidad maxima de programadores.
 * \return  void
 *
 */
void AltaProgramador(Eprogramador [],int );
///////////////////////////////////
/** \brief pide id de programador y imprime opciones para modificar datos.
 *
 * \param   estructura de programadores.
 * \param   cantidad maxima de programadores.
 * \return  void
 *
 */
void ModifDatos(Eprogramador [],int );
/** \brief imprime los datos del programador especificado.
 *
 * \param   estructura de programadores.
 * \param   la posicion del programador en la estructura.
 * \return  void
 *
 */
void ImpProgX(Eprogramador [],int );
///////////////////////////////////
/** \brief pide id de programador y borra sus datos en estructura de programador y proyectosXprogramador.
 *
 * \param   estructura de programadores.
 * \param   estructura de programadores y proyectos relacionados.
 * \param   maxima cantidad de programadores.
 * \param   maxima cantidad de relaciones programadores y proyectos.
 * \return  void
 *
 */
void BajaProgramador(Eprogramador [],EproyProg [],int ,int );
///////////////////////////////////
/** \brief pide id de programador y proyecto, para asignarlo en un proyecto.
 *
 * \param   estructura de programadores.
 * \param   estructura de proyectos.
 * \param   estructura de programadores y proyectos relacionados.
 * \param   maxima cantidad de programadores.
 * \param   maxima cantidad de relaciones programadores y proyectos.
 * \return  void
 *
 */
void Assigproyect(Eprogramador [],Eproyecto [],EproyProg [],int ,int );
///////////////////////////////////
/** \brief enlista todos los programadores con sus respectivos proyectos.
 *
 * \param   estructura de programadores.
 * \param   estructura de proyectos.
 * \param   estructura de categoria.
 * \param   estructura de programadores y proyectos relacionados.
 * \param   maxima cantidad de programadores.
 * \param   maxima cantidad de proyectos.
 * \param   maxima cantidad de relaciones programadores y proyectos.
 * \return  void
 *
 */
void ListProgramen(Eprogramador [],Eproyecto [],Ecategoria [],EproyProg [],int ,int ,int );
/** \brief acomoda los programadores de una estructura de menor a mayor por id.
 *
 * \param   estructura de programadores.
 * \param   maxima cantidad de programadores.
 * \return  void
 *
 */
void burbujeo(Eprogramador [],int );
///////////////////////////////////
/** \brief enlista todos los proyectos con los tipos programadores en el.
 *
 * \param   estructura de programadores.
 * \param   estructura de proyectos.
 * \param   estructura de categoria.
 * \param   estructura de programadores y proyectos relacionados.
 * \param   maxima cantidad de programadores.
 * \param   maxima cantidad de proyectos.
 * \param   maxima cantidad de relaciones programadores y proyectos.
 * \return  void
 *
 */
void ListProyects(Eprogramador [],Eproyecto [],Ecategoria [],EproyProg [],int ,int ,int );
///////////////////////////////////
/** \brief enlista todos los programadores con sus categoria descriptas.
 *
 * \param   estructura de programadores.
 * \param   estructura de categoria.
 * \param   maxima cantidad de programadores.
 * \return  void
 *
 */
void ListProgramenLess(Eprogramador [],Ecategoria [],int );
/** \brief enlista todos los proyectos del programador.
 *
 * \param   estructura de programadores.
 * \param   estructura de proyectos.
 * \param   estructura de programadores y proyectos relacionados.
 * \param   maxima cantidad de programadores.
 * \param   maxima cantidad de proyectos.
 * \param   maxima cantidad de relaciones programadores y proyectos.
 * \return  void
 *
 */
void ListProyIDprog(Eprogramador [],Eproyecto [],EproyProg [],int ,int ,int );
///////////////////////////////////
/** \brief imprime los datos del o los proyectos con mas programadores.
 *
 * \param   estructura de proyectos.
 * \param   estructura de programadores y proyectos relacionados.
 * \param   maxima cantidad de proyectos.
 * \param   maxima cantidad de relaciones programadores y proyectos.
 * \return  void
 *
 */
void ProyectoDeman(Eproyecto[],EproyProg [],int ,int );
/////////////////////////////////
/** \brief Enlista los proyectos con sus respectivos costos.
 *
 * \param   estructura de programadores.
 * \param   estructura de proyectos.
 * \param   estructura de categoria.
 * \param   estructura de programadores y proyectos relacionados.
 * \param   maxima cantidad de programadores.
 * \param   maxima cantidad de proyectos.
 * \param   maxima cantidad de relaciones programadores y proyectos.
 * \return  void
 *
 */
void ListProyectscost(Eprogramador [],Eproyecto [],Ecategoria [],EproyProg [],int ,int ,int );
