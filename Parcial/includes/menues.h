#ifndef MENUES_H_INCLUDED
#define MENUES_H_INCLUDED

///FUNCIONES MENUES

void menuParcial(){                                                             //MENU EXCLUSIVO PARA EL PARCIAL
system("cls");
    int opc, pos=1;
    SetConsoleTextAttribute(hConsole, 6);                                       ///APARTADO VISUAL
    recuadro(26,10,46,25);
    SetConsoleTextAttribute(hConsole, 7);
    gotoxy(31,11); cout << "          PARCIAL RESPUESTAS";
    gotoxy(27,12); cout << "---------------------------------------------";
    gotoxy(27,32); cout << "---------------------------------------------";
    while(true){
    switch(opc){
    case 80: //ABAJO
    pos++;
    if(pos>3){pos=1;}
    break;
    case 72: //ARRIBA
    pos--;
    if(pos<1){pos=3;}
    break;
    case 13: //ENTER
        switch(pos){
        case 1:
            puntoUno();
            menuParcial();
        break;
        case 2:
            puntoDos();
            menuParcial();
        break;
        case 3:
            MenuPrincipal();
        break;
        }
        }
        switch(pos){
        case 1:
        ShowConsoleCursor(false);
        SetConsoleTextAttribute(hConsole, 6);
        recuadro(30,16,38,2);
        gotoxy(31,17); cout << "             ACTIVIDAD 1";
        SetConsoleTextAttribute(hConsole, 7);
        recuadro(30,19,38,2);
        gotoxy(31,20); cout << "             ACTIVIDAD 2";
        recuadro(30,28,38,2);
        gotoxy(31,29);cout << "            MENU PRINCIPAL";
        break;
        case 2:
        ShowConsoleCursor(false);
        recuadro(30,16,38,2);
        gotoxy(31,17); cout << "             ACTIVIDAD 1";
        SetConsoleTextAttribute(hConsole, 6);
        recuadro(30,19,38,2);
        gotoxy(31,20); cout << "             ACTIVIDAD 2";
        SetConsoleTextAttribute(hConsole, 7);
        recuadro(30,28,38,2);
        gotoxy(31,29);cout << "            MENU PRINCIPAL";
        break;
        case 3:
        ShowConsoleCursor(false);
        recuadro(30,16,38,2);
        gotoxy(31,17); cout << "             ACTIVIDAD 1";
        recuadro(30,19,38,2);
        gotoxy(31,20); cout << "             ACTIVIDAD 2";
        SetConsoleTextAttribute(hConsole, 6);
        recuadro(30,28,38,2);
        gotoxy(31,29);cout << "            MENU PRINCIPAL";
        SetConsoleTextAttribute(hConsole, 7);
        break;
        }
        opc = getch();
    }
}


void MenuPrincipal(){                                                           //FUNCION DEL MENU PRINCIPAL
    system("cls");
    int opc, pos=1;
    SetConsoleTextAttribute(hConsole, 6);                                       ///APARTADO VISUAL
    recuadro(26,10,46,25);
    SetConsoleTextAttribute(hConsole, 7);
    gotoxy(31,11); cout << "            MENU PRINCIPAL";
    gotoxy(27,12); cout << "---------------------------------------------";
    gotoxy(27,32); cout << "---------------------------------------------";
    while(true){
    switch(opc){
    case 80: //ABAJO
    pos++;
    if(pos>5){pos=1;}
    break;
    case 72: //ARRIBA
    pos--;
    if(pos<1){pos=5;}
    break;
    case 13: //ENTER
        switch(pos){
        case 1:                                                                 ///APARTADO "USUARIOS"
            MenuUsuario();
        break;
        case 2:
            menuEntrenamiento();                                                                 ///APARTADO "ENTRENIMIENTOS"
        break;
        case 3:
            menuParcial();                                                                 ///APARTADO "REPORTES"
        break;
        case 4:
            menuConfiguraciones();                                                                 ///APARTADO "CONFIGURACION"
        break;
        case 5:                                                                 ///APARTADO "SALIR DEL PROGRAMA"
            exit(0);
        break;
        }
        }
        switch(pos){
        case 1:                                                                 ///APARTADO "USUARIOS"
        ShowConsoleCursor(false);
        SetConsoleTextAttribute(hConsole, 6);
        recuadro(30,14,38,2);
        gotoxy(31,15); cout << "              USUARIOS";
        SetConsoleTextAttribute(hConsole, 7);
        recuadro(30,17,38,2);
        gotoxy(31,18); cout << "           ENTRENAMIENTOS";
        recuadro(30,20,38,2);
        gotoxy(31,21); cout << "           PRIMER PARCIAL";
        recuadro(30,23,38,2);
        gotoxy(31,24); cout << "            CONFIGURACION";
        recuadro(30,28,38,2);
        gotoxy(31,29);cout << "          SALIR DEL PROGRAMA";
        break;
        case 2:                                                                 ///APARTADO "ENTRETENIMIENTO"
        ShowConsoleCursor(false);
        SetConsoleTextAttribute(hConsole, 6);
        recuadro(30,17,38,2);
        gotoxy(31,18); cout << "           ENTRENAMIENTOS";
        SetConsoleTextAttribute(hConsole, 7);
        recuadro(30,14,38,2);
        gotoxy(31,15); cout << "              USUARIOS";
        recuadro(30,20,38,2);
        gotoxy(31,21); cout << "           PRIMER PARCIAL";
        recuadro(30,23,38,2);
        gotoxy(31,24); cout << "            CONFIGURACION";
        recuadro(30,28,38,2);
        gotoxy(31,29);cout << "          SALIR DEL PROGRAMA";
        break;
        case 3:                                                                 ///APARTADO "REPORTES"
        ShowConsoleCursor(false);
        SetConsoleTextAttribute(hConsole, 6);
        recuadro(30,20,38,2);
        gotoxy(31,21); cout << "           PRIMER PARCIAL";
        SetConsoleTextAttribute(hConsole, 7);
        recuadro(30,14,38,2);
        gotoxy(31,15); cout << "              USUARIOS";
        recuadro(30,17,38,2);
        gotoxy(31,18); cout << "           ENTRENAMIENTOS";
        recuadro(30,23,38,2);
        gotoxy(31,24); cout << "            CONFIGURACION";
        recuadro(30,28,38,2);
        gotoxy(31,29);cout << "          SALIR DEL PROGRAMA";
        break;
        case 4:                                                                 ///APARTADO "CONFIGURACION"
        ShowConsoleCursor(false);
        SetConsoleTextAttribute(hConsole, 6);
        recuadro(30,23,38,2);
        gotoxy(31,24); cout << "            CONFIGURACION";
        SetConsoleTextAttribute(hConsole, 7);
        recuadro(30,17,38,2);
        gotoxy(31,18); cout << "           ENTRENAMIENTOS";
        recuadro(30,20,38,2);
        gotoxy(31,21); cout << "           PRIMER PARCIAL";
        recuadro(30,14,38,2);
        gotoxy(31,15); cout << "              USUARIOS";
        recuadro(30,28,38,2);
        gotoxy(31,29);cout << "          SALIR DEL PROGRAMA";
        break;
        case 5:                                                                 ///APARTADO "SALIR"
        ShowConsoleCursor(false);
        SetConsoleTextAttribute(hConsole, 6);
        recuadro(30,28,38,2);
        gotoxy(31,29);cout << "          SALIR DEL PROGRAMA";
        SetConsoleTextAttribute(hConsole, 7);
        recuadro(30,17,38,2);
        gotoxy(31,18); cout << "           ENTRENAMIENTOS";
        recuadro(30,20,38,2);
        gotoxy(31,21); cout << "           PRIMER PARCIAL";
        recuadro(30,23,38,2);
        gotoxy(31,24); cout << "            CONFIGURACION";
        recuadro(30,14,38,2);
        gotoxy(31,15); cout << "              USUARIOS";
        break;
        }
        opc = getch();
    }
}
void MenuUsuario(){                                                             //FUNCION DEL MENU DE USUARIO
    system("cls");
    int opc, pos=1;
    SetConsoleTextAttribute(hConsole, 6);                                       ///APARTADO VISUAL
    recuadro(26,10,46,25);
    SetConsoleTextAttribute(hConsole, 7);
    gotoxy(31,11); cout << "           MENU  USUARIO";
    gotoxy(27,12); cout << "---------------------------------------------";
    gotoxy(27,32); cout << "---------------------------------------------";
    while(true){
    switch(opc){
    case 80: //ABAJO
    pos++;
    if(pos>6){pos=1;}
    break;
    case 72: //ARRIBA
    pos--;
    if(pos<1){pos=6;}
    break;
    case 13: //ENTER
        switch(pos){
        case 1:                                                                 ///APARTADO "NUEVO USUARIO"
            CargarUsuario();
            MenuUsuario();
        break;
        case 2:                                                                 ///APARTADO "MODIFICAR USUARIO"
            ModificarUsuario();
            MenuUsuario();
        break;
        case 3:                                                                 ///APARTADO "LISTAR USUARIO POR ID"
            ListarId();
            MenuUsuario();
        break;
        case 4:                                                                 ///APARTADO "LISTAR USUARIOS"
            ListarUsuarios();
            MenuUsuario();
        break;
        case 5:                                                                 ///APARTADO "ELIMINAR USUARIOS"
            BajaUsuario();
            MenuUsuario();
        break;
        case 6:                                                                 ///APARTADO "VOLVER"
            MenuPrincipal();
        break;
        }
        }
        switch(pos){
    case 1:                                                                     ///APARTADO "NUEVO USUARIO"
    ShowConsoleCursor(false);
    SetConsoleTextAttribute(hConsole, 6);
    recuadro(30,13,38,2);
    gotoxy(31,14); cout << "           NUEVO USUARIO";
    SetConsoleTextAttribute(hConsole, 7);
    recuadro(30,16,38,2);
    gotoxy(31,17); cout << "         MODIFICAR USUARIO";
    recuadro(30,19,38,2);
    gotoxy(31,20); cout << "       LISTAR USUARIO POR ID";
    recuadro(30,22,38,2);
    gotoxy(31,23); cout << "     LISTAR TODOS LOS USUARIOS";
    recuadro(30,25,38,2);
    gotoxy(31,26); cout << "          ELIMINAR USUARIO";
    recuadro(30,28,38,2);
    gotoxy(31,29);cout << "       VOLVEL AL MENU PRINCIPAL";
    break;
    case 2:                                                                     ///APARTADO "MODIFICAR USUARIO"
    ShowConsoleCursor(false);
    SetConsoleTextAttribute(hConsole, 6);
    recuadro(30,16,38,2);
    gotoxy(31,17); cout << "         MODIFICAR USUARIO";
    SetConsoleTextAttribute(hConsole, 7);
    recuadro(30,13,38,2);
    gotoxy(31,14); cout << "           NUEVO USUARIO";
    recuadro(30,19,38,2);
    gotoxy(31,20); cout << "       LISTAR USUARIO POR ID";
    recuadro(30,22,38,2);
    gotoxy(31,23); cout << "     LISTAR TODOS LOS USUARIOS";
    recuadro(30,25,38,2);
    gotoxy(31,26); cout << "          ELIMINAR USUARIO";
    recuadro(30,28,38,2);
    gotoxy(31,29);cout << "       VOLVEL AL MENU PRINCIPAL";
    break;
    case 3:                                                                     ///APARTADO "LISTAR USUARIO POR ID"
    ShowConsoleCursor(false);
    SetConsoleTextAttribute(hConsole, 6);
    recuadro(30,19,38,2);
    gotoxy(31,20); cout << "       LISTAR USUARIO POR ID";
    SetConsoleTextAttribute(hConsole, 7);
    recuadro(30,13,38,2);
    gotoxy(31,14); cout << "           NUEVO USUARIO";
    recuadro(30,16,38,2);
    gotoxy(31,17); cout << "         MODIFICAR USUARIO";
    recuadro(30,22,38,2);
    gotoxy(31,23); cout << "     LISTAR TODOS LOS USUARIOS";
    recuadro(30,25,38,2);
    gotoxy(31,26); cout << "          ELIMINAR USUARIO";
    recuadro(30,28,38,2);
    gotoxy(31,29);cout << "       VOLVEL AL MENU PRINCIPAL";
    break;
    case 4:                                                                     ///APARTADO "LISTAR USUARIOS"
    ShowConsoleCursor(false);
    SetConsoleTextAttribute(hConsole, 6);
    recuadro(30,22,38,2);
    gotoxy(31,23); cout << "     LISTAR TODOS LOS USUARIOS";
    SetConsoleTextAttribute(hConsole, 7);
    recuadro(30,13,38,2);
    gotoxy(31,14); cout << "           NUEVO USUARIO";
    recuadro(30,16,38,2);
    gotoxy(31,17); cout << "         MODIFICAR USUARIO";
    recuadro(30,19,38,2);
    gotoxy(31,20); cout << "       LISTAR USUARIO POR ID";
    recuadro(30,25,38,2);
    gotoxy(31,26); cout << "          ELIMINAR USUARIO";
    recuadro(30,28,38,2);
    gotoxy(31,29);cout << "       VOLVEL AL MENU PRINCIPAL";
    break;
    case 5:                                                                     ///APARTADO "ELIMINAR USUARIO"
    ShowConsoleCursor(false);
    SetConsoleTextAttribute(hConsole, 6);
    recuadro(30,25,38,2);
    gotoxy(31,26); cout << "          ELIMINAR USUARIO";
    SetConsoleTextAttribute(hConsole, 7);
    recuadro(30,13,38,2);
    gotoxy(31,14); cout << "           NUEVO USUARIO";
    recuadro(30,16,38,2);
    gotoxy(31,17); cout << "         MODIFICAR USUARIO";
    recuadro(30,19,38,2);
    gotoxy(31,20); cout << "       LISTAR USUARIO POR ID";
    recuadro(30,22,38,2);
    gotoxy(31,23); cout << "     LISTAR TODOS LOS USUARIOS";
    recuadro(30,28,38,2);
    gotoxy(31,29);cout << "       VOLVEL AL MENU PRINCIPAL";
    break;
    case 6:                                                                     ///APARTADO "VOLVER"
    ShowConsoleCursor(false);
    SetConsoleTextAttribute(hConsole, 6);
    recuadro(30,28,38,2);
    gotoxy(31,29);cout << "       VOLVEL AL MENU PRINCIPAL";
    SetConsoleTextAttribute(hConsole, 7);
    recuadro(30,13,38,2);
    gotoxy(31,14); cout << "           NUEVO USUARIO";
    recuadro(30,16,38,2);
    gotoxy(31,17); cout << "         MODIFICAR USUARIO";
    recuadro(30,19,38,2);
    gotoxy(31,20); cout << "       LISTAR USUARIO POR ID";
    recuadro(30,22,38,2);
    gotoxy(31,23); cout << "     LISTAR TODOS LOS USUARIOS";
    recuadro(30,25,38,2);
    gotoxy(31,26); cout << "          ELIMINAR USUARIO";
    break;
    }
    opc = getch();
}
}
void menuEntrenamiento(){                                                       //FUNCION DEL MENU DE ENTRENAMIENTO
    system("cls");
    int opc, pos=1;
    SetConsoleTextAttribute(hConsole, 6);                                       ///APARTADO VISUAL
    recuadro(26,10,46,25);
    SetConsoleTextAttribute(hConsole, 7);
    gotoxy(31,11); cout << "         MENU ENTRENAMIENTO";
    gotoxy(27,12); cout << "---------------------------------------------";
    gotoxy(27,32); cout << "---------------------------------------------";
    while(true){
    switch(opc){
    case 80: //ABAJO
    pos++;
    if(pos>6){pos=1;}
    break;
    case 72: //ARRIBA
    pos--;
    if(pos<1){pos=6;}
    break;
    case 13: //ENTER
        switch(pos){
        case 1:                                                                 ///APARTADO "NUEVO ENTRENAMIENTO"
            Cargarentrenamiento();
            menuEntrenamiento();
        break;
        case 2:                                                                 ///APARTADO "MODIFICAR ENTRENAMIENTO"
            modificarEntrenamiento();
            menuEntrenamiento();
        break;
        case 3:                                                                 ///APARTADO "LISTAR POR ID DE ENTRENAMIENTO"
            listarIdEntrenamiento();
            menuEntrenamiento();
        break;
        case 4:                                                                 ///APARTADO "LISTAR POR ID DE USUARIO"
            listarEntrenamientoXusuario();
            menuEntrenamiento();
        break;
        case 5:                                                                 ///APARTADO "LISTAR TODOS LOS ENTRENAMIENTOS"
            listarEntrenamiento();
            menuEntrenamiento();
        break;
        case 6:                                                                 ///APARTADO "VOLVER"
            MenuPrincipal();
        break;
        }
        }
        switch(pos){
    case 1:                                                                     ///APARTADO "NUEVO ENTRENAMIENTO"
    ShowConsoleCursor(false);
    SetConsoleTextAttribute(hConsole, 6);
    recuadro(30,13,38,2);
    gotoxy(31,14); cout << "        NUEVO ENTRENAMIENTO";
    SetConsoleTextAttribute(hConsole, 7);
    recuadro(30,16,38,2);
    gotoxy(31,17); cout << "      MODIFICAR ENTRENAMIENTO";
    recuadro(30,19,38,2);
    gotoxy(31,20); cout << "    LISTAR ENTRENAMIENTO POR ID";
    recuadro(30,22,38,2);
    gotoxy(31,23); cout << " LISTAR ENTRENAMIENTOS POR IDUSUARIO";
    recuadro(30,25,38,2);
    gotoxy(31,26); cout << "  LISTAR TODOS LOS ENTRENAMIENTOS";
    recuadro(30,28,38,2);
    gotoxy(31,29);cout << "      VOLVEL AL MENU PRINCIPAL";
    break;
    case 2:                                                                     ///APARTADO "MODIFICAR ENTRENAMIENTO"
    ShowConsoleCursor(false);
    recuadro(30,13,38,2);
    gotoxy(31,14); cout << "        NUEVO ENTRENAMIENTO";
    SetConsoleTextAttribute(hConsole, 6);
    recuadro(30,16,38,2);
    gotoxy(31,17); cout << "      MODIFICAR ENTRENAMIENTO";
    SetConsoleTextAttribute(hConsole, 7);
    recuadro(30,19,38,2);
    gotoxy(31,20); cout << "    LISTAR ENTRENAMIENTO POR ID";
    recuadro(30,22,38,2);
    gotoxy(31,23); cout << " LISTAR ENTRENAMIENTOS POR IDUSUARIO";
    recuadro(30,25,38,2);
    gotoxy(31,26); cout << "  LISTAR TODOS LOS ENTRENAMIENTOS";
    recuadro(30,28,38,2);
    gotoxy(31,29);cout << "      VOLVEL AL MENU PRINCIPAL";
    break;
    case 3:                                                                     ///APARTADO "LISTAR POR ID ENTRENAMIENTO"
    ShowConsoleCursor(false);
    recuadro(30,13,38,2);
    gotoxy(31,14); cout << "        NUEVO ENTRENAMIENTO";
    recuadro(30,16,38,2);
    gotoxy(31,17); cout << "      MODIFICAR ENTRENAMIENTO";
    SetConsoleTextAttribute(hConsole, 6);
    recuadro(30,19,38,2);
    gotoxy(31,20); cout << "    LISTAR ENTRENAMIENTO POR ID";
    SetConsoleTextAttribute(hConsole, 7);
    recuadro(30,22,38,2);
    gotoxy(31,23); cout << " LISTAR ENTRENAMIENTOS POR IDUSUARIO";
    recuadro(30,25,38,2);
    gotoxy(31,26); cout << "  LISTAR TODOS LOS ENTRENAMIENTOS";
    recuadro(30,28,38,2);
    gotoxy(31,29);cout << "      VOLVEL AL MENU PRINCIPAL";
    break;
    case 4:                                                                     ///APARTADO "LISTAR POR ID DE USUARIO"
    ShowConsoleCursor(false);
    recuadro(30,13,38,2);
    gotoxy(31,14); cout << "        NUEVO ENTRENAMIENTO";
    recuadro(30,16,38,2);
    gotoxy(31,17); cout << "      MODIFICAR ENTRENAMIENTO";
    recuadro(30,19,38,2);
    gotoxy(31,20); cout << "    LISTAR ENTRENAMIENTO POR ID";
    SetConsoleTextAttribute(hConsole, 6);
    recuadro(30,22,38,2);
    gotoxy(31,23); cout << " LISTAR ENTRENAMIENTOS POR IDUSUARIO";
    SetConsoleTextAttribute(hConsole, 7);
    recuadro(30,25,38,2);
    gotoxy(31,26); cout << "  LISTAR TODOS LOS ENTRENAMIENTOS";
    recuadro(30,28,38,2);
    gotoxy(31,29);cout << "      VOLVEL AL MENU PRINCIPAL";
    break;
    case 5:                                                                     ///APARTADO "LISTAR TODOS LOS ENTRENAMIENTOS"
    ShowConsoleCursor(false);
    recuadro(30,13,38,2);
    gotoxy(31,14); cout << "        NUEVO ENTRENAMIENTO";
    recuadro(30,16,38,2);
    gotoxy(31,17); cout << "      MODIFICAR ENTRENAMIENTO";
    recuadro(30,19,38,2);
    gotoxy(31,20); cout << "    LISTAR ENTRENAMIENTO POR ID";
    recuadro(30,22,38,2);
    gotoxy(31,23); cout << " LISTAR ENTRENAMIENTOS POR IDUSUARIO";
    SetConsoleTextAttribute(hConsole, 6);
    recuadro(30,25,38,2);
    gotoxy(31,26); cout << "  LISTAR TODOS LOS ENTRENAMIENTOS";
    SetConsoleTextAttribute(hConsole, 7);
    recuadro(30,28,38,2);
    gotoxy(31,29);cout << "      VOLVEL AL MENU PRINCIPAL";
    break;
    case 6:                                                                     ///APARTADO "VOLVER AL MENU PRINCIPAL"
    ShowConsoleCursor(false);
    recuadro(30,13,38,2);
    gotoxy(31,14); cout << "        NUEVO ENTRENAMIENTO";
    recuadro(30,16,38,2);
    gotoxy(31,17); cout << "      MODIFICAR ENTRENAMIENTO";
    recuadro(30,19,38,2);
    gotoxy(31,20); cout << "    LISTAR ENTRENAMIENTO POR ID";
    recuadro(30,22,38,2);
    gotoxy(31,23); cout << " LISTAR ENTRENAMIENTOS POR IDUSUARIO";
    recuadro(30,25,38,2);
    gotoxy(31,26); cout << "  LISTAR TODOS LOS ENTRENAMIENTOS";
    SetConsoleTextAttribute(hConsole, 6);
    recuadro(30,28,38,2);
    gotoxy(31,29);cout << "      VOLVEL AL MENU PRINCIPAL";
    SetConsoleTextAttribute(hConsole, 7);
    break;
    }
    opc = getch();
}
}
void menuConfiguraciones(){                                                     //FUNCION DEL MENU DE CONFIGURACIONES
system("cls");
    int opc, pos=1;
    SetConsoleTextAttribute(hConsole, 6);                                       ///APARTADO VISUAL
    recuadro(26,10,46,25);
    SetConsoleTextAttribute(hConsole, 7);
    gotoxy(31,11); cout << "            MENU CONFIGURACION";
    gotoxy(27,12); cout << "---------------------------------------------";
    gotoxy(27,32); cout << "---------------------------------------------";
    while(true){
    switch(opc){
    case 80: //ABAJO
    pos++;
    if(pos>3){pos=1;}
    break;
    case 72: //ARRIBA
    pos--;
    if(pos<1){pos=3;}
    break;
    case 13: //ENTER
        switch(pos){
        case 1:

            crearCopia();
            menuConfiguraciones();
        break;
        case 2:
            restaurarCopia();
            menuConfiguraciones();
        break;
        case 3:
        MenuPrincipal();
        break;
        }
        }
        switch(pos){
        case 1:                                                                 ///APARTADO "REPORTES"
        ShowConsoleCursor(false);
        SetConsoleTextAttribute(hConsole, 6);
        recuadro(30,16,38,2);
        gotoxy(31,17); cout << "      REALIZAR COPIA DE SEGURIDAD";
        SetConsoleTextAttribute(hConsole, 7);
        recuadro(30,20,38,2);
        gotoxy(31,21); cout << "      RESTARUAR COPIA DE SEGURIDAD";
        recuadro(30,28,38,2);
        gotoxy(31,29);cout << "            MENU PRINCIPAL";
        break;
        case 2:                                                                 ///APARTADO "REPORTES"
        ShowConsoleCursor(false);
        recuadro(30,16,38,2);
        gotoxy(31,17); cout << "      REALIZAR COPIA DE SEGURIDAD";
        SetConsoleTextAttribute(hConsole, 6);
        recuadro(30,20,38,2);
        gotoxy(31,21); cout << "      RESTARUAR COPIA DE SEGURIDAD";
        SetConsoleTextAttribute(hConsole, 7);
        recuadro(30,28,38,2);
        gotoxy(31,29);cout << "            MENU PRINCIPAL";
        break;
        case 3:                                                                 ///APARTADO "REPORTES"
        ShowConsoleCursor(false);
        recuadro(30,16,38,2);
        gotoxy(31,17); cout << "      REALIZAR COPIA DE SEGURIDAD";
        recuadro(30,20,38,2);
        gotoxy(31,21); cout << "      RESTARUAR COPIA DE SEGURIDAD";
        SetConsoleTextAttribute(hConsole, 6);
        recuadro(30,28,38,2);
        gotoxy(31,29);cout << "            MENU PRINCIPAL";
        SetConsoleTextAttribute(hConsole, 7);
        break;
        }
        opc = getch();
    }
}

#endif // MENUES_H_INCLUDED
