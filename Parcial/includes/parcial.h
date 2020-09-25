#ifndef PARCIAL_H_INCLUDED
#define PARCIAL_H_INCLUDED

/// --------   INICIO ACTIVIDAD 1 --------- ///

void puntoUno(){
    system("cls");
    float pMax, pMin;
    SetConsoleTextAttribute(hConsole, 6);                                       ///APARTADO VISUAL
    recuadro(26,10,46,25);
    SetConsoleTextAttribute(hConsole, 7);
    gotoxy(31,11); cout << "        MOSTRAR POR RANGO DE PESO";
    gotoxy(27,12); cout << "---------------------------------------------";
    ShowConsoleCursor(true);
    gotoxy(35,21); cout << "INGRESE EL PESO MINIMO";
    gotoxy(35,26); cout << "INGRESE EL PESO MAXIMO";
    SetConsoleTextAttribute(hConsole, 6);
    recuadro(34,22,28,2);
    recuadro(34,27,28,2);
    SetConsoleTextAttribute(hConsole, 7);
    ShowConsoleCursor(true);
    gotoxy(35,23); cin >> pMin;
    gotoxy(35,28); cin >> pMax;
    ShowConsoleCursor(false);
    system("pause>NULL");
    system("cls");
    Usuario user;
    FILE * f;
    f = fopen("Dat/usuarioC.dat","rb");
    if(f == NULL){
        return;
    }
    while(fread(&user, sizeof(Usuario),1,f)){
         if(user.Peso>=pMin && user.Peso<=pMax){
            SetConsoleTextAttribute(hConsole, 12);
            cout << endl;
            cout << " ================================" << endl;
            SetConsoleTextAttribute(hConsole, 7);
            cout << " ID: "              << user.Nombre << endl;
            cout << " NOMBRE: "          << user.Apellido << endl;
            cout << " PESO: "            << user.Peso << endl;
            SetConsoleTextAttribute(hConsole, 12);
            cout << " ================================" << endl;
         }

         }
    fclose(f);
    system("pause>NULL");
}
/// --------      FIN ACTIVIDAD 1 --------- ///

/// --------   INICIO ACTIVIDAD 2 --------- ///
void puntoDos(){
    int opc, pos=1;
    int cont =0;
    system("cls");
    float pMax, pMin;
    SetConsoleTextAttribute(hConsole, 6);                                       ///APARTADO VISUAL
    recuadro(26,10,46,25);
    SetConsoleTextAttribute(hConsole, 7);
    gotoxy(31,11); cout << "        MOSTRAR POR RANGO DE PESO";
    gotoxy(27,12); cout << "---------------------------------------------";
    ShowConsoleCursor(true);
    gotoxy(40,15); cout << "SELECCIONE UN RANGO";
    SetConsoleTextAttribute(hConsole, 6);
    while(true){
    switch(opc){
    case 80: //ABAJO
    pos++;
    if(pos>4){pos=1;}
    break;
    case 72: //ARRIBA
    pos--;
    if(pos<1){pos=4;}
    break;
    case 13: //ENTER
        switch(pos){
        case 1:
            pMin=40;
            pMax=50;
            rangoPuntoDos(pMin, pMax, cont);
            menuParcial();
        break;
        case 2:
            pMin=50;
            pMax=70;
            rangoPuntoDos(pMin, pMax, cont);
            menuParcial();
        break;
        case 3:
            pMin=70;
            pMax=90;
            rangoPuntoDos(pMin, pMax, cont);
            menuParcial();
        break;
        case 4:
            pMin=90;
            pMax=0;
            rangoPuntoDos(pMin, pMax, cont);
            menuParcial();
        break;
        }
        }
        switch(pos){
        case 1:
        ShowConsoleCursor(false);
        SetConsoleTextAttribute(hConsole, 6);
        recuadro(34,16,28,2);
        gotoxy(35,17); cout << "    ENTRE 40 Y 50 KGS";
        SetConsoleTextAttribute(hConsole, 7);
        recuadro(34,20,28,2);
        gotoxy(35,21); cout << "    ENTRE 50 Y 70 KGS";
        recuadro(34,24,28,2);
        gotoxy(35,25); cout << "    ENTRE 70 Y 90 KGS";
        recuadro(34,28,28,2);
        gotoxy(35,29); cout << "      MAYOR A 90 KGS";
        break;
        case 2:
        ShowConsoleCursor(false);
        recuadro(34,16,28,2);
        gotoxy(35,17); cout << "    ENTRE 40 Y 50 KGS";
        SetConsoleTextAttribute(hConsole, 6);
        recuadro(34,20,28,2);
        gotoxy(35,21); cout << "    ENTRE 50 Y 70 KGS";
        SetConsoleTextAttribute(hConsole, 7);
        recuadro(34,24,28,2);
        gotoxy(35,25); cout << "    ENTRE 70 Y 90 KGS";
        recuadro(34,28,28,2);
        gotoxy(35,29); cout << "      MAYOR A 90 KGS";
        break;
        case 3:
        ShowConsoleCursor(false);

        recuadro(34,16,28,2);
        gotoxy(35,17); cout << "    ENTRE 40 Y 50 KGS";
        recuadro(34,20,28,2);
        gotoxy(35,21); cout << "    ENTRE 50 Y 70 KGS";
        SetConsoleTextAttribute(hConsole, 6);
        recuadro(34,24,28,2);
        gotoxy(35,25); cout << "    ENTRE 70 Y 90 KGS";
        SetConsoleTextAttribute(hConsole, 7);
        recuadro(34,28,28,2);
        gotoxy(35,29); cout << "      MAYOR A 90 KGS";
        break;
        case 4:
        ShowConsoleCursor(false);
        recuadro(34,16,28,2);
        gotoxy(35,17); cout << "    ENTRE 40 Y 50 KGS";
        recuadro(34,20,28,2);
        gotoxy(35,21); cout << "    ENTRE 50 Y 70 KGS";
        recuadro(34,24,28,2);
        gotoxy(35,25); cout << "    ENTRE 70 Y 90 KGS";
        SetConsoleTextAttribute(hConsole, 6);
        recuadro(34,28,28,2);
        gotoxy(35,29); cout << "      MAYOR A 90 KGS";
        SetConsoleTextAttribute(hConsole, 7);
        break;
        }
        opc = getch();
    }

}

void rangoPuntoDos(int pMin, int pMax, int cont){
    int acu=0;
    Usuario user;
    int id;
    FILE * f;
    f = fopen("Dat/usuarioC.dat","rb");
    if(f == NULL){

        return;
    }
    while(fread(&user, sizeof(Usuario),1,f)){
         if(user.Peso>=pMin && user.Peso<=pMax){
            id = user.Id;
            cont = contadorPuntoDos(id, cont);
         }
         else if(user.Peso>=pMin && pMax == 0 ){
                id = user.Id;
            cont = contadorPuntoDos(id, cont);

            }
         }
    fclose(f);
    acu+=cont;
    SetConsoleTextAttribute(hConsole, 2);
    gotoxy(35,32);cout << "CANTIDAD DE ENTRENAMIENTOS: " <<  acu ;
    system("pause>NULL");

}
int contadorPuntoDos(int Id, int cont){
    entrenamiento ent;
    FILE * f;
    f = fopen("Dat/entrenamientoC.dat","rb");
    if(f == NULL){
        return 0;
    }
    while(fread(&ent, sizeof(entrenamiento),1,f)){
        if(Id == ent.IDUsuario){
            cont ++;
        }
    }
    fclose(f);
    return cont;
}
/// --------      FIN ACTIVIDAD 2 --------- ///







#endif // PARCIAL_H_INCLUDED
