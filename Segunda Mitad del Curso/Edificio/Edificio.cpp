#include <iostream>

using namespace std;

int pisos, aptos, genero, personas, edad, PromedioEdad = 0, hombres = 0, mayor = 0, TotalPersonas = 0;
string numeracion[10] = {"primera", "segunda", "tercera", "cuarta", "quinta", "sexta", "septima", "octava", "novena", "decima"};
float litros;

int main() {
	
	cout<<"Ingrese el numero pisos: ";
	cin>>pisos;
	cout<<"Ingrese el numero apartamentos por piso: ";
	cin>>aptos;
	
	for (int i = 0; i < pisos; i++){
		for (int j = 0; j < aptos; j++){
            
            cout<<"\nApartamento " << i + 1 <<"0" <<j + 1 <<":\n";
			cout<<"consumo de agua en litros: ";
			cin>>litros;

			if (litros > mayor){
				mayor = litros;
			}

			cout<<"numero de personas por apartamento: ";
			cin>>personas;

			for (int k = 0; k < personas; k++){

				cout<<"edad de la " <<numeracion[k] <<" persona: ";
				cin>>edad;
				PromedioEdad += edad;

				cout<<"genero (masculino = 1, femenino = 2): ";
				cin>>genero;

				if (genero == 1){
					hombres++;
				}
				TotalPersonas++;
			}	
		}
		cout<<"total de hombres en el psio "<<i + 1<<": "<<hombres;
		cout<<"\npromedio edad en el piso "<<i + 1<<": "<<PromedioEdad/TotalPersonas <<"\n\n";

        system("pause");
        system("cls");
	}
	cout<<"mayor consumo litros de agua:"<<mayor <<"\n\n\n";
	
    system("pause");
	return 0;
}