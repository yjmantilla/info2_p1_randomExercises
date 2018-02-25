#include <iostream>
using namespace std;

/*
Ejercicio 3. Escriba un programa que pida dos números A y B e imprima en pantalla el mayor.
Ej: si se ingresan 7 y 3 se debe imprimir:
El mayor es 7
*/

int main()
{
        int number; //numero a ser ingresado por el usuario
        cout<< "Inserte el numero"<<endl;
	cin>> number; // Se pide un numero por consola

	cout<<"El numero que escribio es:"<<number<<endl;

        //si el resto de dividir el numero por 2 0 entonces es par, de lo contrario es impar

        if(number%2==0){cout<<"El numero "<<number<<" es par"<<endl;}
        else{cout<<"El numero "<<number<<" es impar"<<endl;}

	return 0;

}
