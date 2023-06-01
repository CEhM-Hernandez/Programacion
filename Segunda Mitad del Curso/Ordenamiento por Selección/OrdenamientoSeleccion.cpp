#include<iostream>

using namespace std;

int main(){
	int numeros[5];
	string numeracion[5] = {"primer", "segundo", "tercer", "cuarto", "quinto"};
	int i , j, aux, min;
	
	cout<<"Ingrese 5 numeros para ordenar\n\n";
	for (i = 0; i < 5; i++){
		cout<<numeracion[i] <<" numero: ";
		cin>>numeros[i];
	}

	for(i = 0; i < 5; i++){
		min = i;
		for(j = i + 1; j < 5; j++){
			if(numeros[j] < numeros[min]){
				min = j;
			}
		}
		aux = numeros[i];
		numeros[i] = numeros[min];
		numeros[min] = aux;
	}
	
	cout<<"Orden Ascendente: ";
	for(i = 0; i < 5; i++){
		cout<<numeros[i]<<" ";
	}
	
	cout<<"\nOrden Descendente: ";
	for(i = 4; i >= 0; i--){
		cout<<numeros[i]<<" ";
	}
	
	system("pause");
	return 0;
}
