#ifndef PROTOTIPOS_H_INCLUDED
#define PROTOTIPOS_H_INCLUDED

///PARCIAL

void puntoUno();
void puntoDos();
void rangoPuntoDos(int pMin, int pMax, int cont);
int contadorPuntoDos(int Id, int cont);



///VISUALES
void gotoxy();
void recuadro();
void ShowConsoleCursor();

///MENUES
void menuParcial();
void MenuUsuario();
void MenuPrincipal();
void menuEntrenamiento ();
void menuConfiguraciones();

///USUARIO
struct Usuario{
    int     Id;
    char    Nombre[50];
    char    Apellido[50];
    int     FechaNac;
    float   Altura;
    float   Peso;
    char    PerfilAct;
    bool    AptoMedico;
    bool    Estado;
};

///USUARIO CARGA
Usuario CargarUsuario();
void CargaUsuario();
bool GuardarUsuarios(Usuario);

///USUARIO MODIFICADORES
void BajaUsuario();
void ModificarUsuario();

///USUARIO MOSTRAR
void ListarId();
void ListarUsuarios();
void MostrarUsuario (Usuario);

///USUARIO VERIFICADORES
int  BuscarId(int cod);
int  Fechasverificador(int dd, int mm, int aa);


///ENTRENAMIENTOS
struct entrenamiento{
    int     idEntrenamiento;
    int     IDUsuario;
    int     fechadeEntranmiento;
    int     actividad;
    float   calorias;
    int     tiempo;
};

///ENTRENAMIENTO CARGAR
entrenamiento Cargarentrenamiento();
void cargaEntrenamiento();
bool guardarEntrenamiento(entrenamiento);

///ENTRENAMIENTO MODIFICADORES
void modificarEntrenamiento();

///ENTRENAMIENTO MOSTRAR
void listarEntrenamiento();
void listarIdEntrenamiento();
void listarEntrenamientoXusuario();
void mostrarEntrenamiento(entrenamiento);

///ENTRENAMIENTO VERIFICADORES
int autonumerico();
int BuscarXentrenamiento(int id);
int buscarIdEntrenamiento(int cod);
int fechasEnt(int dd, int mm, int aa);

///BACKUPS
void crearCopia();
void restaurarCopia();
void backupUsuario();
void backupEntrenamiento();
void copiarBkpUsuario();
void copiarBkpEntrenamiento();



#endif // PROTOTIPOS_H_INCLUDED
