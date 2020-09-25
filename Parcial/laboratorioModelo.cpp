/// -------- INICIO ACTIVIDAD 1 -------- ///
void actividad_Uno(){
system("cls");
entrenamiento ent;
int acu =0, cant=0;
float promedio;
FILE * f;
f = fopen("Dat/entrenamientoC.dat","rb");
    if(f == NULL){
        return;
    }

while(fread(&ent, sizeof(entrenamiento),1,f)){
        cant++;
        acu+=ent.tiempo;
    }
    fclose(f);
    promedio = acu / cant;
    FILE * p;
    p = fopen("Dat/entrenamientoC.dat","rb");
        if(p == NULL){
        return;
    }

while(fread(&ent, sizeof(entrenamiento),1,p)){
        if(ent.tiempo>=promedio){
                mostrarEntrenamiento(ent);
            }
    }
    fclose(p);
    system("pause>NULL");
}

/// --------   FIN ACTIVIDAD 1 --------- ///

/// -------- INICIO ACTIVIDAD 2 -------- ///
void actividad_Dos(){
    Usuario user;

    system ("cls");
    int cod;
    SetConsoleTextAttribute(hConsole, 6);
    recuadro(26,10,46,25);
    SetConsoleTextAttribute(hConsole, 7);
    gotoxy(31,11); cout << "         BUSCAR ENTRENAMIENTO";
    gotoxy(27,12); cout << "---------------------------------------------";
    ShowConsoleCursor(true);
    gotoxy(27,20); cout << "    INGRESE UNA ID DE USUARIO PARA BUSCAR";
    SetConsoleTextAttribute(hConsole, 6);
    recuadro(34,22,30,2);
    SetConsoleTextAttribute(hConsole, 7);
    gotoxy(35,23); cin >> cod;
    while(BuscarId(cod) <0){
        SetConsoleTextAttribute(hConsole, 12);
        gotoxy(37,26); cout << "ESTA ID NO FUE REGISTRADA";
        SetConsoleTextAttribute(hConsole, 7);
        gotoxy(35,23); cout << "               ";
        gotoxy(35,23); cin >> cod;
    }
    SetConsoleTextAttribute(hConsole, 2);
    gotoxy(37,26); cout << "                             ";
    gotoxy(42,26); cout << "ID ENCONTRADA!";
    SetConsoleTextAttribute(hConsole, 7);
    ShowConsoleCursor(false);
    system("pause>NULL");
    system ("cls");
    ;
    FILE *f;
    f = fopen("Dat/usuarioC.dat","rb");
    while (fread(&user,sizeof(Usuario),1,f)){
        if (user.Id == cod){
            cout << "\t \t \t \t ================================" << endl;
    cout << "\t \t \t \t ID: "                  << user.Id << endl;
    cout << "\t \t \t \t NOMBRE: "              << user.Nombre << endl;
    cout << "\t \t \t \t APELLLIDO: "           << user.Apellido << endl;
        }
    }
    fclose(f);

    entrenamiento ent;
    int cant=0;
    FILE * p;
    p = fopen("Dat/entrenamientoC.dat", "rb");
    while (fread(&ent,sizeof(entrenamiento),1,f)){
            int aa;
     aa = ent.fechadeEntranmiento / 10000;
        if ( aa == 2020 && ent.IDUsuario == cod ){
            cant ++;
        }
    }
    fclose(p);
    cout << "\t \t \t \t CANTIDAD DE ENTRENAMIENTOS "  << endl;
    cout << "\t \t \t \t REALIZADOS EN EL ANIO 2020:"  << cant << endl;
    system ("pause>NULL");
}
