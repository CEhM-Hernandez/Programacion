#include<iostream>

using namespace std;

int main(){
	int n[5];
	string numeracion[5] = {"primer", "segundo", "tercer", "cuarto", "quinto"};
	int aux;
	
	cout<<"Ingrese 5 numeros para ordenar\n\n";
	for (int i = 0; i < 5; i++){
		cout<<numeracion[i] <<" numero: ";
		cin>>n[i];
	}
	

	for(int i = 0; i < 5; i++){
		for(int j = 0; j < 4; j++){
			if(n[j] > n[j+1]){
				aux = n[j];
				n[j] = n[j+1];
				n[j + 1] = aux;
			}
		}
	}
	
	cout<<"Numeros de forma Ascendente: ";
	for(int i = 0; i < 5; i++){
		cout<<n[i] <<" ";
	}
	
	cout<<"\nNumeros de forma Descendente: ";
	for(int i = 4; i >= 0; i--){
		cout<<n[i] <<" ";
	}
	cout<<"\n\n";
	
	system("pause");
	return 0;
}
