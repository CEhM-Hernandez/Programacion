#include<iostream>

using namespace std;

int main(){
	int numeros[5];
	string numeracion[5] = {"primer", "segundo", "tercer", "cuarto", "quinto"};
	int i, pos, aux;
	
	cout<<"Ingrese 5 numeros para ordenar\n\n";
	for (i = 0; i < 5; i++){
		cout<<numeracion[i] <<" numero: ";
		cin>>numeros[i];
	}

	for(i = 0; i < 5; i++){
		pos = i; 
		aux = numeros[i];
		
		while((pos>0) && (numeros[pos-1] > aux)){
			numeros[pos] = numeros[pos-1];
			pos--;
		}
		numeros[pos] = aux;
	}
	
	cout<<"Orden Ascendente: ";
	for(i = 0; i < 5; i++){
		cout<<numeros[i]<<" ";
	}
	
	cout<<"\nOrden Descendente: ";
	for(i = 4; i >= 0; i--){
		cout<<numeros[i]<<" ";
	}
	
	cout<<endl;
	
	system("pause");
	return 0;
}
