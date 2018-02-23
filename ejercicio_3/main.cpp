#include <iostream>

using namespace std;

/*
Ejercicio 3. Escriba un programa que pida dos números A y B e imprima en pantalla el mayor.
Ej: si se ingresan 7 y 3 se debe imprimir:
El mayor es 7
*/

int main()
{
	float A,B; // numeros a comparar
	A=0;B=0; //inicializacion de variables
	cout<<"Ingrese a continuacion los numeros a comparar"<<endl;
	cin>>A>>B;
	
	if(A>=B){cout<<"El mayor es "<<A<<endl;} //Con esta condicion es suficiente para saber cual es el mayor, incluso cuando son iguales.
	else {cout <<"El mayor es "<<B<<endl;}
	return 0;
}

