#ifndef USUARIOS_H_INCLUDED
#define USUARIOS_H_INCLUDED

///USUARIOS FUNCIONES

//USUARIO CARGA
Usuario CargarUsuario(){                                                        //CARGA DE DATOS
    Usuario user;
    system("cls");
    int  opc, pos = 1;
    int  dia, mes, anio, f;
    bool verificado;
    verificado = false;
    SetConsoleTextAttribute(hConsole, 6);                                       ///DISEÑO DE LA CARGA DE DATOS
    recuadro(26,10,46,25);
    recuadro(26,36,46,2);
    SetConsoleTextAttribute(hConsole, 7);
    gotoxy(31,37); cout <<"***PRESIONA ENTER CUANDO TERMINES***";
    SetConsoleTextAttribute(hConsole, 6);
    gotoxy(29,12); cout << "ID DE USUARIO";                                     ///ID
    gotoxy(29,15); cout << "NOMBRE";                                            ///NOMBRE
    gotoxy(29,18); cout << "APELLIDO";                                          ///APELLIDO
    gotoxy(29,21); cout << "FECHA DE NACIMIENTO";                               ///FECHA DE NAC.
    gotoxy(29,24); cout << "ALTURA";                                            ///ALTURA
    gotoxy(29,27); cout << "PESO";                                              ///PESO
    gotoxy(29,30); cout << "PERFIL ACTIVO";                                     ///PERFIL ACTIVO
    gotoxy(29,33); cout << "APTO MEDICO";                                       ///APTO MEDICO
    SetConsoleTextAttribute(hConsole, 7);                                       ///RECUADROS
    recuadro(52,11,18,2);
    recuadro(52,14,18,2);
    recuadro(52,17,18,2);
    recuadro(52,20,18,2);
    recuadro(52,23,18,2);
    recuadro(52,26,18,2);
    recuadro(52,29,18,2);
    recuadro(52,32,8,2); gotoxy(55,33); cout << "S I";
    recuadro(62,32,8,2); gotoxy(65,33); cout << "N O";
    ShowConsoleCursor(true);                                                    ///MOSTRARA EL CURSOR
    gotoxy(53,12); cin >> user.Id;                                              ///ID. DEL USUARIO
    while(user.Id <=0){
        SetConsoleTextAttribute(hConsole, 12);
        gotoxy(29,11); cout << "DEBE SER MAYOR A 0!!!";
        SetConsoleTextAttribute(hConsole, 7);
        gotoxy(53,12); cout << "           ";
        gotoxy(53,12); cin >> user.Id;
    }
    while(BuscarId(user.Id)>=0){
        SetConsoleTextAttribute(hConsole, 12);
        gotoxy(29,11); cout << "ID YA REGISTRADA";
        SetConsoleTextAttribute(hConsole, 7);
        gotoxy(53,12); cout << "           ";
        gotoxy(53,12); cin >> user.Id;
    }
    SetConsoleTextAttribute(hConsole, 2);
    gotoxy(29,11); cout << "                      ";
    gotoxy(29,11); cout << "VERIFICADO";
    SetConsoleTextAttribute(hConsole, 7);
    cin.ignore();
    gotoxy(53,15); cin.getline(user.Nombre, 50);                                ///NOMBRE DEL USUARIO
    SetConsoleTextAttribute(hConsole, 2);
    gotoxy(29,14); cout << "VERIFICADO";
    SetConsoleTextAttribute(hConsole, 7);
    gotoxy(53,18); cin.getline(user.Apellido, 50);                              ///APELLIDO DEL USUARIO
    SetConsoleTextAttribute(hConsole, 2);
    gotoxy(29,17); cout << "VERIFICADO";
    SetConsoleTextAttribute(hConsole, 11);
    gotoxy(29,20); cout << "DIA MES ANIO";                                      ///FECHA DE NAC. DEL USUARIO
    while(verificado!=true){
    SetConsoleTextAttribute(hConsole, 7);
    gotoxy(30,37); cout <<"***PRESIONA ENTER PARA PASAR AL MES***";
    gotoxy(53,21); cin >> dia;
    gotoxy(30,37); cout <<"                                        ";
    gotoxy(30,37); cout <<"***PRESIONA ENTER PARA PASAR AL ANIO***";
    gotoxy(56,21); cout <<"/"; cin >> mes;
    gotoxy(30,37); cout <<"                                        ";
    gotoxy(31,37); cout <<"***PRESIONA ENTER CUANDO TERMINES***";
    gotoxy(60,21); cout <<"/"; cin >> anio;
    user.FechaNac = dia + (mes * 100) + (anio * 10000);
    f = Fechasverificador(dia,mes,anio);
    gotoxy(29,20); cout << "                      ";
    switch(f){
    case 1:
        SetConsoleTextAttribute(hConsole, 2);
        gotoxy(29,20); cout << "VERIFICADO";
        verificado = true;
    break;
    case 2:
        SetConsoleTextAttribute(hConsole, 12);
        gotoxy(29,20); cout << "DEBE SER MAYOR A 13";
        gotoxy(53,21); cout << "           ";
    break;
    case 3:
        SetConsoleTextAttribute(hConsole, 12);
        gotoxy(29,20); cout << "LA FECHA NO EXISTE";
        gotoxy(53,21); cout << "           ";
    break;
    }
    }
    SetConsoleTextAttribute(hConsole, 7);
    gotoxy(53,24); cin >> user.Altura;                                          ///ALTURA DEL USUARIO
    while(user.Altura <= 0){
        SetConsoleTextAttribute(hConsole, 12);
        gotoxy(29,23); cout << "DEBE SER MAYOR A 0!!!";
        SetConsoleTextAttribute(hConsole, 7);
        gotoxy(53,24); cout << "           ";
        gotoxy(53,24); cin >> user.Altura;
    }
    SetConsoleTextAttribute(hConsole, 2);
    gotoxy(29,23); cout << "                      ";
    gotoxy(29,23); cout << "VERIFICADO";
    SetConsoleTextAttribute(hConsole, 7);
    gotoxy(53,27); cin >> user.Peso;                                            ///PESO DEL USUARIO
    while(user.Peso <= 0){
        SetConsoleTextAttribute(hConsole, 12);
        gotoxy(29,26); cout << "DEBE SER MAYOR A 0!!!";
        SetConsoleTextAttribute(hConsole, 7);
        gotoxy(53,27); cout << "           ";
        gotoxy(53,27); cin >> user.Peso;
    }
    SetConsoleTextAttribute(hConsole, 2);
    gotoxy(29,26); cout << "                      ";
    gotoxy(29,26); cout << "VERIFICADO";
    SetConsoleTextAttribute(hConsole, 7);
    gotoxy(53,30); cin >> user.PerfilAct;                                       ///PERFIL ACTIVO DEL USUARIO
    while(user.PerfilAct != 'a' && user.PerfilAct != 'b' && user.PerfilAct != 'c' && user.PerfilAct != 'A' && user.PerfilAct != 'B' && user.PerfilAct != 'C'){
        SetConsoleTextAttribute(hConsole, 12);
        gotoxy(29,29); cout << "'A' 'B' o 'C' !!!";
        SetConsoleTextAttribute(hConsole, 7);
        gotoxy(53,30); cout << "           ";
        gotoxy(53,30); cin >> user.PerfilAct;
    }
    SetConsoleTextAttribute(hConsole, 2);
    gotoxy(29,29); cout << "                      ";
    gotoxy(29,29); cout << "VERIFICADO";
    SetConsoleTextAttribute(hConsole, 7);
    ShowConsoleCursor(false);
    opc = 1;
    while(true){                                                                ///APTO MEDICO DEL USUARIO
    switch(opc){
    case 77: //IZQUIERDA
    pos++;
    if(pos>2){pos=1;}
    break;
    case 75: //DERECHA
    pos--;
    if(pos<1){pos=2;}
    break;
    case 13: //ENTER
        switch(pos){
        case 1:
            user.AptoMedico = true;
            user.Estado = true;
            system("cls");
            GuardarUsuarios(user);

            return user;
        break;
        case 2:
            user.AptoMedico = false;
            user.Estado = true;
            system("cls");
            GuardarUsuarios(user);

            return user;
        break;
        }
        }
        switch(pos){
    case 1:
    ShowConsoleCursor(false);
    SetConsoleTextAttribute(hConsole, 2);
    recuadro(52,32,8,2); gotoxy(55,33); cout << "S I";
    SetConsoleTextAttribute(hConsole, 7);
    recuadro(62,32,8,2); gotoxy(65,33); cout << "N O";
    break;
    case 2:
    ShowConsoleCursor(false);
    SetConsoleTextAttribute(hConsole, 7);
    recuadro(52,32,8,2); gotoxy(55,33); cout << "S I";
    SetConsoleTextAttribute(hConsole, 12);
    recuadro(62,32,8,2); gotoxy(65,33); cout << "N O";
    break;
    }
    opc = getch();
}
}
bool GuardarUsuarios(Usuario user){                                             //FUNCION GUARDAR USUARIO
    bool grabo;
    FILE *f;
    f = fopen("Dat/usuarioC.dat","ab");                                            ///CREARA UN ARCHIVO
    if(f == NULL){
        return false;                                                           ///EN CASO DE QUE NO PUEDA CREARLO
    }
    fwrite(&user, sizeof(Usuario),1,f);                                         ///ESCRIBIRA EL STRUCT "USUARIO" EN EL ARCHIVO
    fclose(f);
    MenuUsuario();
}

//USUARIO MODIFICADORES
void BajaUsuario(){
    int cod;
    system("cls");
    SetConsoleTextAttribute(hConsole, 6);                                       ///APARTADO VISUAL
    recuadro(26,10,46,25);
    SetConsoleTextAttribute(hConsole, 7);
    gotoxy(31,11); cout << "           ELIMINAR USUARIO";
    gotoxy(27,12); cout << "---------------------------------------------";
    ShowConsoleCursor(true);
    gotoxy(27,20); cout << "  INGRESE LA ID DE USUARIO PARA DAR DE BAJA";
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
    SetConsoleTextAttribute(hConsole, 12);
    gotoxy(36,26); cout << "                               ";
    gotoxy(36,26); cout << "       ESTAS SEGURO?!";
    SetConsoleTextAttribute(hConsole, 7);
    int pos = 1;
    int opc = 1;
    while(true){                                                                ///APTO MEDICO DEL USUARIO
    switch(opc){
    case 77: //IZQUIERDA
    pos++;
    if(pos>2){pos=1;}
    break;
    case 75: //DERECHA
    pos--;
    if(pos<1){pos=2;}
    break;
    case 13: //ENTER
        switch(pos){
        case 1:
    SetConsoleTextAttribute(hConsole, 2);
    gotoxy(36,26); cout << "                               ";
    gotoxy(36,26); cout << "EL USUARIO FUE DADO DE BAJA";
    SetConsoleTextAttribute(hConsole, 7);
    Usuario user;
    FILE *f;
    FILE *p;
    f = fopen("Dat/usuarioC.dat","rb");
    fseek(f,(BuscarId(cod))*sizeof(Usuario),SEEK_SET);
    fread(&user,sizeof(Usuario),1,f);
    user.Estado = false;
    p = fopen("Dat/usuarioC.dat","rb+");
    fseek(p,BuscarId(cod)*sizeof(Usuario),SEEK_SET);
    fwrite(&user, sizeof(Usuario),1,p);
    fclose(f);
    fclose(p);
    ShowConsoleCursor(false);
    system("pause>NULL");
    MenuUsuario();
        break;
        case 2:
    SetConsoleTextAttribute(hConsole, 12);
    gotoxy(36,26); cout << "                               ";
    gotoxy(36,26); cout << "   LA BAJA FUE CANCELADA";
    SetConsoleTextAttribute(hConsole, 7);
    ShowConsoleCursor(false);
    system("pause>NULL");
    MenuUsuario();
        break;
        }
        }
        switch(pos){
    case 1:
    ShowConsoleCursor(false);
    SetConsoleTextAttribute(hConsole, 2);
    recuadro(34,28,13,2); gotoxy(39,29); cout << "S I";
    SetConsoleTextAttribute(hConsole, 7);
    recuadro(50,28,13,2); gotoxy(55,29); cout << "N O";
    break;
    case 2:
    ShowConsoleCursor(false);
    SetConsoleTextAttribute(hConsole, 7);
    recuadro(34,28,13,2); gotoxy(39,29); cout << "S I";
    SetConsoleTextAttribute(hConsole, 12);
    recuadro(50,28,13,2); gotoxy(55,29); cout << "N O";
    break;
    }
    opc = getch();
}
}
void ModificarUsuario(){                                                        //MODIFICARA EL USUARIO (POR ID)
    int cod;
    system("cls");
    SetConsoleTextAttribute(hConsole, 6);                                       ///APARTADO VISUAL
    recuadro(26,10,46,25);
    SetConsoleTextAttribute(hConsole, 7);
    gotoxy(31,11); cout << "          MODIFICAR USUARIO";
    gotoxy(27,12); cout << "---------------------------------------------";
    ShowConsoleCursor(true);
    gotoxy(27,20); cout << " INGRESE LA ID DE USUARIO QUE DESEA MODIFICAR";
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
    Usuario user;
    system("cls");
    int  opc, pos = 1;
    int  dia, mes, anio, f;
    bool verificado;
    verificado = false;
    SetConsoleTextAttribute(hConsole, 6);                                       ///DISEÑO DE LA CARGA DE DATOS
    recuadro(26,10,46,25);
    recuadro(26,36,46,2);
    SetConsoleTextAttribute(hConsole, 7);
    gotoxy(31,37); cout <<"***PRESIONA ENTER CUANDO TERMINES***";
    SetConsoleTextAttribute(hConsole, 6);
    gotoxy(29,12); cout << "ID DE USUARIO";                                     ///ID
    gotoxy(29,15); cout << "NOMBRE";                                            ///NOMBRE
    gotoxy(29,18); cout << "APELLIDO";                                          ///APELLIDO
    gotoxy(29,21); cout << "FECHA DE NACIMIENTO";                               ///FECHA DE NAC.
    gotoxy(29,24); cout << "ALTURA";                                            ///ALTURA
    gotoxy(29,27); cout << "PESO";                                              ///PESO
    gotoxy(29,30); cout << "PERFIL ACTIVO";                                     ///PERFIL ACTIVO
    gotoxy(29,33); cout << "APTO MEDICO";                                       ///APTO MEDICO
    SetConsoleTextAttribute(hConsole, 7);                                       ///RECUADROS
    recuadro(52,11,18,2);
    recuadro(52,14,18,2);
    recuadro(52,17,18,2);
    recuadro(52,20,18,2);
    recuadro(52,23,18,2);
    recuadro(52,26,18,2);
    recuadro(52,29,18,2);
    recuadro(52,32,8,2); gotoxy(55,33); cout << "S I";
    recuadro(62,32,8,2); gotoxy(65,33); cout << "N O";
    ShowConsoleCursor(true);                                                    ///MOSTRARA EL CURSOR
    gotoxy(53,12); cout << cod;
    user.Id = cod;
    SetConsoleTextAttribute(hConsole, 2);
    gotoxy(29,11); cout << "                      ";
    gotoxy(29,11); cout << "VERIFICADO";
    SetConsoleTextAttribute(hConsole, 7);
    cin.ignore();
    gotoxy(53,15); cin.getline(user.Nombre, 50);                                ///NOMBRE DEL USUARIO
    SetConsoleTextAttribute(hConsole, 2);
    gotoxy(29,14); cout << "VERIFICADO";
    SetConsoleTextAttribute(hConsole, 7);
    gotoxy(53,18); cin.getline(user.Apellido, 50);                              ///APELLIDO DEL USUARIO
    SetConsoleTextAttribute(hConsole, 2);
    gotoxy(29,17); cout << "VERIFICADO";
    SetConsoleTextAttribute(hConsole, 11);
    gotoxy(29,20); cout << "DIA MES ANIO";                                      ///FECHA DE NAC. DEL USUARIO
    while(verificado!=true){
    SetConsoleTextAttribute(hConsole, 7);
    gotoxy(30,37); cout <<"***PRESIONA ENTER PARA PASAR AL MES***";
    gotoxy(53,21); cin >> dia;
    gotoxy(30,37); cout <<"                                        ";
    gotoxy(30,37); cout <<"***PRESIONA ENTER PARA PASAR AL ANIO***";
    gotoxy(56,21); cout <<"/"; cin >> mes;
    gotoxy(30,37); cout <<"                                        ";
    gotoxy(31,37); cout <<"***PRESIONA ENTER CUANDO TERMINES***";
    gotoxy(60,21); cout <<"/"; cin >> anio;
    user.FechaNac = dia + (mes * 100) + (anio * 10000);
    f = Fechasverificador(dia,mes,anio);
    gotoxy(29,20); cout << "                      ";
    switch(f){
    case 1:
        SetConsoleTextAttribute(hConsole, 2);
        gotoxy(29,20); cout << "VERIFICADO";
        verificado = true;
    break;
    case 2:
        SetConsoleTextAttribute(hConsole, 12);
        gotoxy(29,20); cout << "DEBE SER MAYOR A 13";
        gotoxy(53,21); cout << "           ";
    break;
    case 3:
        SetConsoleTextAttribute(hConsole, 12);
        gotoxy(29,20); cout << "LA FECHA NO EXISTE";
        gotoxy(53,21); cout << "           ";
    break;
    }
    }
    SetConsoleTextAttribute(hConsole, 7);
    gotoxy(53,24); cin >> user.Altura;                                          ///ALTURA DEL USUARIO
    while(user.Altura <= 0){
        SetConsoleTextAttribute(hConsole, 12);
        gotoxy(29,23); cout << "DEBE SER MAYOR A 0!!!";
        SetConsoleTextAttribute(hConsole, 7);
        gotoxy(53,24); cout << "           ";
        gotoxy(53,24); cin >> user.Altura;
    }
    SetConsoleTextAttribute(hConsole, 2);
    gotoxy(29,23); cout << "                      ";
    gotoxy(29,23); cout << "VERIFICADO";
    SetConsoleTextAttribute(hConsole, 7);
    gotoxy(53,27); cin >> user.Peso;                                            ///PESO DEL USUARIO
    while(user.Peso <= 0){
        SetConsoleTextAttribute(hConsole, 12);
        gotoxy(29,26); cout << "DEBE SER MAYOR A 0!!!";
        SetConsoleTextAttribute(hConsole, 7);
        gotoxy(53,27); cout << "           ";
        gotoxy(53,27); cin >> user.Peso;
    }
    SetConsoleTextAttribute(hConsole, 2);
    gotoxy(29,26); cout << "                      ";
    gotoxy(29,26); cout << "VERIFICADO";
    SetConsoleTextAttribute(hConsole, 7);
    gotoxy(53,30); cin >> user.PerfilAct;                                       ///PERFIL ACTIVO DEL USUARIO
    while(user.PerfilAct != 'a' && user.PerfilAct != 'b' && user.PerfilAct != 'c' && user.PerfilAct != 'A' && user.PerfilAct != 'B' && user.PerfilAct != 'C'){
        SetConsoleTextAttribute(hConsole, 12);
        gotoxy(29,29); cout << "'A' 'B' o 'C' !!!";
        SetConsoleTextAttribute(hConsole, 7);
        gotoxy(53,30); cout << "           ";
        gotoxy(53,30); cin >> user.PerfilAct;
    }
    SetConsoleTextAttribute(hConsole, 2);
    gotoxy(29,29); cout << "                      ";
    gotoxy(29,29); cout << "VERIFICADO";
    SetConsoleTextAttribute(hConsole, 7);
    ShowConsoleCursor(false);
    opc = 1;
    while(true){                                                                ///APTO MEDICO DEL USUARIO
    switch(opc){
    case 77: //IZQUIERDA
    pos++;
    if(pos>2){pos=1;}
    break;
    case 75: //DERECHA
    pos--;
    if(pos<1){pos=2;}
    break;
    case 13: //ENTER
        switch(pos){
        case 1:
            user.AptoMedico = true;
            user.Estado = true;
            system("cls");
            FILE *f;
            f = fopen("Dat/usuarioC.dat","rb+");
            fseek(f,BuscarId(cod)*sizeof(Usuario),SEEK_SET);
            fwrite(&user, sizeof(Usuario),1,f);
            fclose(f);
            MenuUsuario();
        break;
        case 2:
            user.AptoMedico = false;
            user.Estado = true;
            system("cls");
            FILE *p;
            p = fopen("Dat/usuarioC.dat","rb+");
            fseek(p,BuscarId(cod)*sizeof(Usuario),SEEK_SET);
            fwrite(&user, sizeof(Usuario),1,p);
            fclose(p);
            MenuUsuario();
        break;
        }
        }
        switch(pos){
    case 1:
    ShowConsoleCursor(false);
    SetConsoleTextAttribute(hConsole, 2);
    recuadro(52,32,8,2); gotoxy(55,33); cout << "S I";
    SetConsoleTextAttribute(hConsole, 7);
    recuadro(62,32,8,2); gotoxy(65,33); cout << "N O";
    break;
    case 2:
    ShowConsoleCursor(false);
    SetConsoleTextAttribute(hConsole, 7);
    recuadro(52,32,8,2); gotoxy(55,33); cout << "S I";
    SetConsoleTextAttribute(hConsole, 12);
    recuadro(62,32,8,2); gotoxy(65,33); cout << "N O";
    break;
    }
    opc = getch();
}
}

//USUARIO MOSTRAR
void ListarId(){                                                                //LISTARA EL USUARIO CON LA ID
    int cod;
    system("cls");
    SetConsoleTextAttribute(hConsole, 6);                                       ///APARTADO VISUAL
    recuadro(26,10,46,25);
    SetConsoleTextAttribute(hConsole, 7);
    gotoxy(31,11); cout << "           LISTAR POR ID";
    gotoxy(27,12); cout << "---------------------------------------------";
    ShowConsoleCursor(true);
    recuadro(44,14,25,2);
    gotoxy(29,15); cout << "INGRESE LA ID: ";
    gotoxy(45,15); cin >> cod;
    while(BuscarId(cod) <0){
        SetConsoleTextAttribute(hConsole, 12);
        gotoxy(29,17); cout << "ESTA ID NO FUE REGISTRADA";
        SetConsoleTextAttribute(hConsole, 7);
        gotoxy(45,15); cout << "               ";
        gotoxy(45,15); cin >> cod;
    }
    SetConsoleTextAttribute(hConsole, 2);
    gotoxy(29,17); cout << "                             ";
    gotoxy(29,17); cout << "ID ENCONTRADA!";
    SetConsoleTextAttribute(hConsole, 7);
    ShowConsoleCursor(false);
    Usuario user;
    FILE *f;
    f = fopen("Dat/usuarioC.dat","rb");
    fseek(f,(BuscarId(cod))*sizeof(Usuario),SEEK_SET);
    fread(&user,sizeof(Usuario),1,f);
    fclose(f);
    cout << endl << endl;
    MostrarUsuario(user);
    system("pause>NULL");
    system("cls");
    MenuUsuario();
}
void ListarUsuarios(){                                                          //FUNCION LISTAR USUARIO
    system("cls");
    Usuario user;
    FILE * f;
    f = fopen("Dat/usuarioC.dat","rb");                                            ///LEERA EL ARCHIVO CREADO
    if(f == NULL){                                                              ///EN CASO DE QUE NO CONTEGA DATOS
        return;
    }
    while(fread(&user, sizeof(Usuario),1,f)){                                   ///EN CASO DE QUE TENGA DATOS, LEERA DE A UNO
         MostrarUsuario(user);
    }
    fclose(f);
    system("pause>NULL");
    MenuUsuario();                                                              ///VUELVE AL MENU USUARIO
}
void MostrarUsuario(Usuario user){
    int dd,mm,aa;
    aa = user.FechaNac / 10000;
    mm = (user.FechaNac - (aa * 10000)) / 100 ;
    dd = user.FechaNac - (aa * 10000) - (mm * 100);                                              //MOSTRAR USUARIOS
    SetConsoleTextAttribute(hConsole, 7);
    cout << "\t \t \t \t ================================" << endl;
    cout << "\t \t \t \t ID: "                  << user.Id << endl;                         ///ID
    cout << "\t \t \t \t NOMBRE: "              << user.Nombre << endl;                     ///NOMBRE
    cout << "\t \t \t \t APELLLIDO: "           << user.Apellido << endl;                   ///APELLIDO
    cout << "\t \t \t \t FECHA DE NACIMIENTO: " << dd << "/" << mm << "/" << aa << endl;    ///FECHA DE NAC.
    cout << "\t \t \t \t ALTURA: "              << user.Altura << endl;                     ///ALTURA
    cout << "\t \t \t \t PESO: "                << user.Peso << endl;                       ///PESO
    cout << "\t \t \t \t PERFIL MEDICO: "       << user.PerfilAct << endl;                  ///PERFIL MEDICO
    if(user.AptoMedico == true){                                                ///APTO MEDICO
        cout << "\t \t \t \t APTO MEDICO: SI" << endl;
    }
    else{
        cout << "\t \t \t \t APTO MEDICO: NO" << endl;
    }
    if(user.Estado == true){                                                    ///ESTADO
        cout << "\t \t \t \t ESTADO: ACTIVO"  << endl;
    }
    else{
        cout << "\t \t \t \t ESTADO: INACTIVO"<< endl;
    }
    cout << "\t \t \t \t ================================" << endl << endl;
}

//USUARIO VERIFICADORES
int BuscarId(int id){                                                           //BUSCARA LA ID DEL USUARIO
    Usuario user;
    FILE *f;
    INT pos = 0;
    f = fopen("Dat/usuarioC.dat","rb");
    while(fread(&user,sizeof(Usuario),1,f)){
        if(id == user.Id){
            fclose(f);
            return pos;
        }
        pos++;
    }
    fclose(f);
    return -1;
}
int Fechasverificador(int dd, int mm, int aa){                                  //ESTA FUNCION VERIFICARA SI LA FECHA EXISTE Y SI ES MAYOR A 13 AÑOS
    int fechaUsuario, fechaActual, diferencia, opcion;
    bool Existe;
    bool Mayor;
    Mayor  = false;                                                             ///PARA SABER SI ES MAYOR A 13 AÑOS
    Existe = false;                                                             ///PARA SABER SI LA FECHA EXISTE
    fechaUsuario = (aa*10000) + (mm * 100) + dd;                                ///CALCULO DE LA FECHA EN SUMA
        switch(mm){                                                             ///COMPRUEBA QUE SEA UNA FECHA VALIDA
        case 1:                                                                 ///ENERO
            if(dd>0 && dd<=31 && aa>=0){
                Existe = true;
            }
        break;
        case 2:                                                                 ///FEBRERO
            if(aa%4==0 || aa%100==0 || aa%400==0){                              ///EN CASO DE UN AÑO BICIESTO
                if(dd>0 && dd<=29 && aa>=0){
                    Existe = true;
                }
            }
            else{
                if(dd>0 && dd<=28 && aa>=0){                                    ///EN CASO DE QUE NO SEA BICIESTO
                    Existe = true;
                }
            }
        break;
        case 3:                                                                 ///MARZO
            if(dd>0 && dd<=31 && aa>=0){
                Existe = true;
            }
        break;
        case 4:                                                                 ///ABRIL
            if(dd>0 && dd<=30 && aa>=0){
                Existe = true;
            }
        break;
        case 5:                                                                 ///MAYO
            if(dd>0 && dd<=31 && aa>=0){
                Existe = true;
            }
        break;
        case 6:                                                                 ///JUNIO
            if(dd>0 && dd<=30 && aa>=0){
                Existe = true;
            }
        break;
        case 7:                                                                 ///JULIO
            if(dd>0 && dd<=31 && aa>=0){
                Existe = true;
            }
        break;
        case 8:                                                                 ///AGOSTO
            if(dd>0 && dd<=31 && aa>=0){
                Existe = true;
            }
        break;
        case 9:                                                                 ///SEPTIEMBRE
            if(dd>0 && dd<=30 && aa>=0){
                Existe = true;
            }
        break;
        case 10:                                                                ///OCTUBRE
            if(dd>0 && dd<=31 && aa>=0){
                Existe = true;
            }
        break;
        case 11:                                                                ///NOVIEMBRE
            if(dd>0 && dd<=30 && aa>=0){
                Existe = true;
            }
        break;
        case 12:                                                                ///DICIEMBRE
            if(dd>0 && dd<=31 && aa>=0){
                Existe = true;
            }
        break;
        default:                                                                ///SI LA FECHA NO EXISTE
            Existe = false;
        break;
        }
        time_t tiempo;                                                           ///SACARA LA FECHA ACTUAL
        struct tm * tmPtr;
        tiempo = time(NULL);
        tmPtr  = localtime(&tiempo);
        fechaActual = tmPtr->tm_mday + ((tmPtr->tm_mon+1) * 100) + ((1900+tmPtr->tm_year) * 10000);

        diferencia = fechaActual - fechaUsuario;                                ///COMPARA LAS FECHAS PARA SABER SI ES MAYOR A 13 AÑOS
        if(diferencia >= 130000){
            Mayor = true;
        }
        if(Existe == true && Mayor == true){                                    ///EN CASO DE QUE LA FECHA EXISTE Y SEA MAYOR
            opcion = 1;
        }
        else if(Existe == true && Mayor == false){                              ///EN CASO QUE NO SEA MAYOR DE 13 AÑOS
            opcion = 2;
        }
        else{                                                                   ///EN CASO QUE LA FECHA NO EXISTE
            opcion = 3;
        }
    return opcion;
}

#endif // USUARIOS_H_INCLUDED
