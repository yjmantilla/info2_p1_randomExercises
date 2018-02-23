#include <iostream>
using namespace std;

/*
	programa que dice si un numero es par o impar
*/
int main()
{
	int number;
	cout<< "Inserte el numero"<<endl;
	cin>> number; // Se pide un numero por consola

	cout<<"El numero que escribio es:"<<number<<endl;

	if(number%2==0){cout<<"El numero"<<number<<"es par"<<endl;}
	else{cout<<"El numero"<<number<<"es impar"<<endl;}

	return 0;

}
