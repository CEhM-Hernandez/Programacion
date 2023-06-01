#include <iostream>

using namespace std;

int Vector[5], suma;
string Numeros[5] = {"primer", "segundo", "tercero", "cuarto", "quinto"};

int main(){

    cout<<"Ingrese los numeros a sumar\n\n";
    for (int i = 0; i < 5; i++){
        cout<<"Ingrese el " <<Numeros[i] <<" numero: ";
        cin>>Vector[i];
        suma += Vector[i];
    }
    cout<<"\nLa suma de los numeros ingresados es: " <<suma <<"\n\n";

    system("pause");
    return 0;
}