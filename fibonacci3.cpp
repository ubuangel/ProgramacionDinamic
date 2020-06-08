/*
 * fibonaci.cpp
 *
 *  Created on: 7 jun. 2020
 *      Author: angel
 */


#include<iostream>
#include<vector>

using namespace std;

//usando top-doen
string respuesta;

int fiboDinamic(int tabla[], int n) {
	if (n <= 1)
		return n;
	if (tabla[n - 1] == -1) {
		tabla[n - 1] = fiboDinamic(tabla, n - 1);
	}
	if (tabla[n - 2] == -1) {
		tabla[n - 2] = fiboDinamic(tabla, n - 2);

	}

	tabla[n] = tabla[n - 2] + tabla[n - 1];
	return tabla[n];

}

int main() {
//1.forma de validar

int tamano;
int n;
int veces;
cout<<"cuantas veces deceas calcular el fibonaci"<<endl;
cin>>veces;

	for (int var = 0; var < veces; ++var) {

	cout << "ingrese un tamano: ";
	cin >> tamano;
	cout << " ingrese la posicion a calcular para el numero de fibonacci: ";
	cin >> n;
	
	if(n>tamano) break;

	int tabla[tamano];
					for (int var = 0; var < tamano; ++var) {
						tabla[var] = -1;
					}

			cout << fiboDinamic(tabla, n) << "\n";

	cout << "Para continuar eliga 1 y No elija el 2\n" << endl;
	getline(cin, respuesta);



	while (respuesta != "1" && respuesta!="2") {

//		cout << "Uppps!!para continuar eliga  1 y para salir 2\n" << endl;
		getline(cin, respuesta);

	}

		if (respuesta == "2") {

//	cout<<"valores nigresados no validos porfavor ,vuelva a intentarlo \n";
			break;
		}
		
		


	}
	cout << "Uppps!!\n" << endl;
		

}

