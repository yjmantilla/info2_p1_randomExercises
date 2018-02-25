/*
Ejercicio 11. Escriba un programa que pida un número N e imprima en pantalla su tabla de multiplicar hasta 10xN.

Ej: si se ingresa 7 se debe imprimir:
1x7=7
2x7=14
3x7=21
4x7=28
5x7=35
6x7=42
7x7=49
8x7=56
9x7=63
10x7=70
*/


#include <iostream>
#define N 10 //limite de la tabla de multiplicar
using namespace std;

int main()
{	
    float num;//numero del que se desea conocer la tabla de multiplicar

	cout<<"Inserte el numero del que desea conocer su tabla de multiplicar:"<<endl;
	cin>>num;
    cout<<endl;
	
	for(int i=1;i<=N;i++)
		{
			cout<<i<<"x"<<num<<"="<<i*num<<endl;
		}
	return 0;
	
}
