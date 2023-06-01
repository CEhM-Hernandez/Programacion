#include<iostream>

using namespace std;

int numeros[3][3];

int main(){
	
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
			cin>>numeros[i][j];
		}
	}
	
	cout<<"\nMatriz Normal\n";
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cout<<numeros[i][j]<<"\t";
		}
		cout<<"\n";
	}
	
	cout<<"\nMatriz Transpuesta\n";
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cout<<numeros[j][i]<<"\t";
		}
		cout<<"\n\n";
	}
	
	system("pause");
	return 0;
}