#ifndef VISUALES_H_INCLUDED
#define VISUALES_H_INCLUDED

///FUNCIONES VISUALES

void gotoxy(short x, short y){                                                  //DECLARACION DEL GOTOXY
    COORD a;
    a.X = x;
    a.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),a);
}
void ShowConsoleCursor(bool showFlag){                                          //MOSTRARA DONDE SE ENCUENTRA EL CURSOR EN LA CONSOLA
    HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO     cursorInfo;
    GetConsoleCursorInfo(out, &cursorInfo);
    cursorInfo.bVisible = showFlag;
    SetConsoleCursorInfo(out, &cursorInfo);
}
void recuadro(short iniX, short iniY, short ancho, short alto){                 //CON ESTA FUNCION NOS PERMITIRA CREAR UN RECUADRO
    int i, j;
    for(i=iniX; i<=iniX+ancho; i++){
        for(j=iniY; j<=iniY+alto; j++){
            gotoxy(i, j);
            if(i==iniX && j==iniY){cout << (char) 218;                          ///ARRIBA  - IZQUIERDA
            }
            else if(i==iniX+ancho && j==iniY){cout << (char) 191;               ///ARRIBA  - DERECHA
            }
            else if(i==iniX && j==iniY+alto){cout << (char) 192;                ///ABAJO   - IZQUIERDA
            }
            else if(i==iniX+ancho && j==iniY+alto){cout << (char) 217;          ///ABAJO   - DERECHA
            }
            else if(j==iniY || j==iniY+alto){cout << (char) 196;                ///ARRIBA  - ABAJO
            }
            else if(i==iniX || i==iniX+ancho){cout << (char) 179;               ///DERECHA - IZQUIERDA
            }
            else{cout << " ";                                                   ///DENTRO DEL RECUADRO
            }
        }
    }
}


#endif // VISUALES_H_INCLUDED
