#include <iostream>

using namespace std;

int n[5];
int n2[5];
string Numeros[5] = {"primer", "segundo", "tercero", "cuarto", "quinto"};

int main(){

    cout<<"Ingrese 5 numeros para multiplicar por 2\n\n";

    for (int i = 0; i < 5; i++){
        cout<<"Ingrese el " <<Numeros[i] <<" numero: ";
        cin>>n[i];
        n2[i] = n[i]*2;
    }
    for (int i = 0; i < 5; i++){
        cout<<n[i] <<" x " <<"2 = " <<n2[i] <<endl;
    }

    system("pause");
    return 0;
}