#include <iostream>

using namespace std;

int matriz [100][100];
int filas, columnas;

int main(){

    cout<<"Ingrese el numero de filas: ";
    cin>>filas;
    cout<<"Ingrese el numero de columnas: ";
    cin>>columnas;
    
    for (int x = 0; x < filas; x++){
        for (int y = 0; y < columnas; y++){
            cout<<"Ingrese un numero [" <<x <<"]["<<y<<"]: ";
            cin>>matriz [x][y];
        }
    }
    for (int x = 0; x < filas; x++){
        for (int y = 0; y < columnas; y++){
            cout<<"\t" <<matriz [x][y];
        }
        cout<<"\t\n";
    }
    
    system("pause");
    return 0;
}