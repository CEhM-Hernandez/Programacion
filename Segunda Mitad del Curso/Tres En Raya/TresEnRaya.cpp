#include <iostream>

using namespace std;

char C [3][3];

void loop (char C[3][3]);
void primera (char C[3][3]);
void tablero (char C[3][3]);
void jugador1 (char C[3][3]);
void jugador2 (char C[3][3]);

int main(){ // -----------------MAIN------------------- //

    loop (C);

    system("pause");
    return 0;
}

void loop (char C[3][3]){ // LOOP //
    
    int contador = 0;

    primera (C);

    do{
        system ("cls");
        tablero (C);

        if (contador % 2 == 0){
            jugador1 (C);
        }
        else{
            jugador2 (C);
        }

        tablero (C);
        contador++;

    } while (contador <= 9);
    
}

void primera (char C[3][3]){ // MATRIZ //

    int x, y;
    char aux;

    aux = '1';

    for (int x = 0; x < 3; x++){
        for (int y = 0; y < 3; y++){
            C[x][y] = aux++;
        }
    }
}

void tablero (char C[3][3]){ // TABLERO //

    for (int x = 0; x < 3; x++){
        for (int y = 0; y < 3; y++){

            if (y < 2){
                printf (" %c |", C[x][y]);
            }
            else{
                printf (" %c ", C[x][y]);
            }

        }
        if (x < 2){
            cout<<"\n-----------\n";
        }
        else{
            cout<<"\n\n\n\n";
        }
    }
}

void jugador1 (char C[3][3]){ // REEMPLAZO POR "X" //
    
    char jugada;
    int x, y, k = 0;

    do{
        do{
            printf("Tu Turno jugador 1: ");
            fflush (stdin);
            scanf ("%c", &jugada);
        } while(jugada < '1' || jugada > '9');

        switch (jugada){

        case '1':

            x = 0;
            y = 0;
            
            if (C[x][y] == 'X' || C[x][y] == 'O'){
                k = 1;
                cout<<"\n\nLa casilla se encuentra ocupada\n\n\n\n";
            }

            break;
        case '2':

            x = 0;
            y = 1;

            if (C[x][y] == 'X' || C[x][y] == 'O'){
                k = 1;
                cout<<"\n\nLa casilla se encuentra ocupada\n\n\n\n";
            }

            break;
        case '3':

            x = 0;
            y = 2;

            if (C[x][y] == 'X' || C[x][y] == 'O'){
                k = 1;
                cout<<"\n\nLa casilla se encuentra ocupada\n\n\n\n";
            }

            break;
        case '4':

            x = 1;
            y = 0;

            if (C[x][y] == 'X' || C[x][y] == 'O'){
                k = 1;
                cout<<"\n\nLa casilla se encuentra ocupada\n\n\n\n";
            }

            break;
        case '5':

            x = 1;
            y = 1;

            if (C[x][y] == 'X' || C[x][y] == 'O'){
                k = 1;
                cout<<"\n\nLa casilla se encuentra ocupada\n\n\n\n";
            }

            break;
        case '6':

            x = 1;
            y = 2;

            if (C[x][y] == 'X' || C[x][y] == 'O'){
                k = 1;
                cout<<"\n\nLa casilla se encuentra ocupada\n\n\n\n";
            }

            break;
        case '7':

            x = 2;
            y = 0;

            if (C[x][y] == 'X' || C[x][y] == 'O'){
                k = 1;
                cout<<"\n\nLa casilla se encuentra ocupada\n\n\n\n";
            }

            break;
        case '8':

            x = 2;
            y = 1;

            if (C[x][y] == 'X' || C[x][y] == 'O'){
                k = 1;
                cout<<"\n\nLa casilla se encuentra ocupada\n\n\n\n";
            }

            break;
        case '9':

            x = 2;
            y = 2;

            if (C[x][y] == 'X' || C[x][y] == 'O'){
                k = 1;
                cout<<"\n\nLa casilla se encuentra ocupada\n\n\n\n";
            }

            break;
        }
    } while(k == 1);

    C[x][y] = 'X';
}

void jugador2 (char C[3][3]){ // REEMPLAZO POR "X" //
    
    char jugada;
    int x, y, k = 0;

    do{
        do{
            cout<<"Tu Turno jugador 2: ";
            cin>>jugada;
        } while(jugada < '1' || jugada > '9');

        switch (jugada){

        case '1':

            x = 0;
            y = 0;
            
            if (C[x][y] == 'X' || C[x][y] == 'O'){
                k = 1;
                cout<<"\n\nLa casilla se encuentra ocupada\n\n\n\n";
            }

            break;
        case '2':

            x = 0;
            y = 1;

            if (C[x][y] == 'X' || C[x][y] == 'O'){
                k = 1;
                cout<<"\n\nLa casilla se encuentra ocupada\n\n\n\n";
            }

            break;
        case '3':

            x = 0;
            y = 2;

            if (C[x][y] == 'X' || C[x][y] == 'O'){
                k = 1;
                cout<<"\n\nLa casilla se encuentra ocupada\n\n\n\n";
            }

            break;
        case '4':

            x = 1;
            y = 0;

            if (C[x][y] == 'X' || C[x][y] == 'O'){
                k = 1;
                cout<<"\n\nLa casilla se encuentra ocupada\n\n\n\n";
            }

            break;
        case '5':

            x = 1;
            y = 1;

            if (C[x][y] == 'X' || C[x][y] == 'O'){
                k = 1;
                cout<<"\n\nLa casilla se encuentra ocupada\n\n\n\n";
            }

            break;
        case '6':

            x = 1;
            y = 2;

            if (C[x][y] == 'X' || C[x][y] == 'O'){
                k = 1;
                cout<<"\n\nLa casilla se encuentra ocupada\n\n\n\n";
            }

            break;
        case '7':

            x = 2;
            y = 0;

            if (C[x][y] == 'X' || C[x][y] == 'O'){
                k = 1;
                cout<<"\n\nLa casilla se encuentra ocupada\n\n\n\n";
            }

            break;
        case '8':

            x = 2;
            y = 1;

            if (C[x][y] == 'X' || C[x][y] == 'O'){
                k = 1;
                cout<<"\n\nLa casilla se encuentra ocupada\n\n\n\n";
            }

            break;
        case '9':

            x = 2;
            y = 2;

            if (C[x][y] == 'X' || C[x][y] == 'O'){
                k = 1;
                cout<<"\n\nLa casilla se encuentra ocupada\n\n\n\n";
            }

            break;
        }
    } while(k == 1);

    C[x][y] = 'O';
}