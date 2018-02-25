#include <iostream>

using namespace std;

/*
Ejercicio 3. Escriba un programa que pida dos números A y B e imprima en pantalla el mayor.
Ej: si se ingresan 7 y 3 se debe imprimir:
El mayor es 7
*/

int main()
{
    float A=0,B=0; // numeros a comparar
	cout<<"Ingrese a continuacion los numeros a comparar"<<endl;
	cin>>A>>B;
	
    //Con la siguiente condicion es suficiente para saber cual es el mayor, incluso cuando son iguales.
    if(A>=B){cout<<"El mayor es "<<A<<endl;}
    else {cout <<"El mayor es "<<B<<endl;}
	return 0;
}

