#include <iostream>

using namespace std;

string Letras1[5] = {"a", "b", "c", "d", "e"};
string Letras2[5] = {"f", "g", "h", "i", "j"};
string Letras3[10];

int main(){

    for (int i = 0; i < 5; i++){
        Letras3[i] = Letras1[i];
    }
    for (int i = 5; i < 10; i++){
        Letras3[i] = Letras2[i-5];
    }
    for (int i = 0; i < 10; i++){
        cout<<Letras3[i] <<", ";
    }
    cout<<"\n\n";

    system("pause");
    return 0;
}