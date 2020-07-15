/*
 * rutas.cpp
 *
 *  Created on: 1 jun. 2020
 *      Author: angel
 */

#include<iostream>
#include<vector>
using namespace std;
int rutai;
int rutaf;
int summax(int arr[],int tam){
	int res=-1000;
	int sum=0;
	for (int i = 0; i < tam; ++i) {
		sum=sum+arr[i];
		if (sum<0) {
			sum=0;
			rutai=i+1;
		}

		if (sum>res ) {res=sum;
		rutaf=i+1; }

	}
	return res;
}
int main(){

int calles;
int rutas;
cin>>rutas;

for (int var = 0; var < rutas; ++var) {

cin>>calles;

	int arr[calles-1];
	for (int i = 0; i < calles-1; ++i) {
		cin>>arr[i];
	}
int resultado=summax(arr,calles-1);
	cout<<" La mejor parte de la ruta "<<var+1<<"  es entre las calles:"<<rutai+1<<" y "<<rutaf+1<<"es"<<resultado<<endl;

	}
}






