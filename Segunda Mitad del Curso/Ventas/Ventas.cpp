#include <iostream>

using namespace std;

int Ventas[12], MayorVentas = -1, Suma = 0, posicion;
string Meses[12] = {"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};

int main(){
    
    cout<<"Ingrese las ventas de cada mes:\n";
    for (int i = 0; i < 12; i++){
        cout<<"Ventas en el mes de " <<Meses[i] <<": ";
        cin>>Ventas[i];
        if (Ventas[i] > MayorVentas){
            MayorVentas = Ventas[i];
            posicion = i;
        }
        else if (Ventas[i] == MayorVentas){
            MayorVentas = 0;
        }
        Suma += Ventas[i];
    }
    if (MayorVentas == 0){
        cout<<"\nLas ventas fueron estables.\n\n";
    }
    else{
        cout<<"El mes con mayor ventas fue " <<Meses[posicion] <<" con " <<Ventas[posicion] <<" ventas.\n\n";
    }
    cout<<"El promedio de ventas fue de " <<Suma/12 <<" ventas al mes.\n\n";


    system("pause");
    return 0;
}