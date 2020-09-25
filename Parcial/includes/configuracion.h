#ifndef CONFIGURACION_H_INCLUDED
#define CONFIGURACION_H_INCLUDED

void crearCopia(){
srand (time(NULL));
    int PIN, pos = 1, opc = 1;
    recuadro(26,10,46,25);
    gotoxy(35,15); cout << "SI CREAS UNA COPIA DE SEGURIDAD";
    gotoxy(40,16); cout << "BORRARAS LA ANTERIOR";
    SetConsoleTextAttribute(hConsole, 12);
    gotoxy(38,18); cout << "ESTAS SEGURO QUE QUIERES ";
    gotoxy(40,19); cout << "REALIZAR ESTA ACCION? ";
    SetConsoleTextAttribute(hConsole, 7);
    recuadro(40,22,8,2); gotoxy(43,23); cout << "S I";
    recuadro(51,22,8,2); gotoxy(54,23); cout << "N O";
    gotoxy(31,11); cout << "      CREANDO COPIA DE RESPALDO";
    gotoxy(27,12); cout << "---------------------------------------------";
    gotoxy(27,32); cout << "---------------------------------------------";
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
        remove("Dat/password.dat");

        remove("Dat/usuarioC.bkp");

        remove("Dat/entrenamientoC.bkp");

        recuadro(26,10,46,25);
        SetConsoleTextAttribute(hConsole, 6);
        recuadro(34,22,30,2);
        SetConsoleTextAttribute(hConsole, 7);
        gotoxy(38,15); cout << "ESTE PIN SERA NECESARIO";
        gotoxy(38,16); cout << "PARA RESTAURAR LA COPIA";
        gotoxy(44,17); cout << "DE SEGURIDAD";
        gotoxy(41,23); cout << "GENERADOR DE PIN";
        PIN = rand() %(9999-1000+1)+1000;
        SetConsoleTextAttribute(hConsole, 2);
        recuadro(34,25,30,2);

        gotoxy (58,26); cout << PIN ;
        SetConsoleTextAttribute(hConsole, 7);
        gotoxy(37,26); cout << "El PIN generado es: ";
        FILE *f;
        f = fopen("Dat/password.dat","ab");
        fwrite(&PIN, sizeof(PIN),1,f);
        fclose(f);

        backupEntrenamiento();
        backupUsuario();

        system("pause>NULL");
        system("cls");
        menuConfiguraciones();
        break;
        case 2:

        menuConfiguraciones();


        break;
        }
        }
        switch(pos){
    case 1:
    ShowConsoleCursor(false);
    SetConsoleTextAttribute(hConsole, 2);
    recuadro(40,22,8,2); gotoxy(43,23); cout << "S I";
    SetConsoleTextAttribute(hConsole, 7);
    recuadro(51,22,8,2); gotoxy(54,23); cout << "N O";
    break;
    case 2:
    ShowConsoleCursor(false);
    SetConsoleTextAttribute(hConsole, 7);
    recuadro(40,22,8,2); gotoxy(43,23); cout << "S I";
    SetConsoleTextAttribute(hConsole, 12);
    recuadro(51,22,8,2); gotoxy(54,23); cout << "N O";
    break;
    }
    opc = getch();
}
}

void restaurarCopia(){
int PIN , cod, ACC;
FILE *f;
f = fopen("Dat/password.dat","rb");
fread(&PIN, sizeof(PIN),1,f);
ACC = PIN;

/*
//EN CASO DE OLVIDAR EL "PIN" HABILITAR ESTA LINEA DE CODIGO
gotoxy(30,8); cout << PIN;
*/

fclose(f);


recuadro(26,10,46,25);
SetConsoleTextAttribute(hConsole, 7);
    gotoxy(27,11); cout << "      RESTAURANDO COPIA DE SEGURIDAD";
    gotoxy(27,12); cout << "---------------------------------------------";
    gotoxy(27,32); cout << "---------------------------------------------";
    gotoxy(35,18); cout << "INGRESE EL PIN DE SU RESPALDO";
    gotoxy(45,19); cout << "POR FAVOR";
    ShowConsoleCursor(true);
    SetConsoleTextAttribute(hConsole, 2);
    recuadro(34,22,30,2);
    SetConsoleTextAttribute(hConsole, 7);
    gotoxy(45,23); cin >> cod;
    fclose(f);
    if (cod == ACC){
        SetConsoleTextAttribute(hConsole, 2);
        gotoxy(35,26); cout << "AGUARDE UN MOMENTO 0%";
        fclose(f);
        remove ("Dat/usuarioC.dat");
        Sleep(100);
        gotoxy(35,26); cout << "AGUARDE UN MOMENTO 10%";
        Sleep(100);
        gotoxy(35,26); cout << "AGUARDE UN MOMENTO 20%";
        Sleep(100);
        gotoxy(35,26); cout << "AGUARDE UN MOMENTO 30%";
        remove("Dat/entrenamientoC.dat");

        Sleep(1000);
        gotoxy(35,26); cout << "AGUARDE UN MOMENTO 40%";

        Sleep(2000);

        gotoxy(35,26); cout << "AGUARDE UN MOMENTO 50%";
        Sleep(100);
        gotoxy(35,26); cout << "AGUARDE UN MOMENTO 60%";

        Sleep(1000);
        gotoxy(35,26); cout << "AGUARDE UN MOMENTO 70%";
        copiarBkpUsuario();
        Sleep(100);
        gotoxy(35,26); cout << "AGUARDE UN MOMENTO 80%";
        copiarBkpEntrenamiento();
        Sleep(100);
        gotoxy(35,26); cout << "AGUARDE UN MOMENTO 90%";
        Sleep(1000);
        gotoxy(35,26); cout << "LA COPIA HA SIDO RESTAURADA";
    }
    else {
        SetConsoleTextAttribute(hConsole, 12);
        gotoxy(35,26); cout << "PIN INCORRECTO";
        gotoxy(31,27); cout << "NO SE PUEDE REALIZAR";
        gotoxy(30,27); cout << "LA COPIA DE SEGURIDAD";

    }
    system("pause>NULL");
}

void copiarBkpUsuario(){
bool    f = CopyFile;
CopyFile("backup/usuarioC.bkp", "Dat/usuarioC.dat", true);
}
void copiarBkpEntrenamiento(){
bool    f = CopyFile;
CopyFile("backup/entrenamientoC.bkp", "Dat/entrenamientoC.dat", true);
}


void backupUsuario(){
    Usuario user;
    FILE *f;
    FILE *p;
    f = fopen("Dat/usuarioC.dat","rb");
    while(fread(&user, sizeof(Usuario),1,f)){
    p = fopen("backup/usuarioC.bkp","ab");
    fwrite(&user, sizeof(Usuario),1,p);
    fclose(f);
    fclose(p);
    }

}
void backupEntrenamiento(){
    entrenamiento ent;
    FILE *f;
    FILE *p;
    f = fopen("Dat/entrenamientoC.dat","rb");
    while(fread(&ent, sizeof(entrenamiento),1,f)){
    p = fopen("backup/entrenamientoC.bkp","ab");
    fwrite(&ent, sizeof(entrenamiento),1,p);
    fclose(f);
    fclose(p);
    }


}
#endif // CONFIGURACION_H_INCLUDED
