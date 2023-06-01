#include<iostream>

using namespace std;

int matriz1[3][3] = {{2,0,1},{3,0,0},{5,1,1}};
int matriz2[3][3] = {{1,0,1},{1,2,1},{1,1,0}};

int main(){

	cout<<"Matriz 1\n";
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cout<<matriz1[i][j]<<"\t";
		}
		cout<<"\n";
	}
	
	cout<<"\nMatriz 2\n";
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cout<<matriz2[i][j]<<"\t";
		}
		cout<<"\n";
	}
	
	cout<<"\nSuma de matrices\n";
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cout<<matriz1[i][j]+matriz2[i][j]<<"\t";
		}
		cout<<"\n\n";
	}
	
	system("pause");
	return 0;
}
