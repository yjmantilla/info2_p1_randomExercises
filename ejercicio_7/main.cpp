
/*
Ejercicio 7. Escriba un programa que pida un número N e imprima en pantalla la suma de todos
los números entre 0 y N (incluyéndose el mismo).
Ej: si se ingresa 5: 1+2+3+4+5=15, por lo que se debe imprimir:
La sumatoria desde 0 hasta 5 es: 15
*/

#include <iostream>
using namespace std;

int main(){
    int N=0,sum=0;
    //N: es el limite de la sumatoria.
    //sum es la variable que acumula la suma

    cout<<"Inserte el numero N hasta el que desea hacer la suma de los numeros naturales"<<endl;
	cin>>N;
	for(int i=0;i<=N;i++)
		{
			sum=sum+i;
		}	
    cout<<"La sumatoria desde 0 hasta "<<N<<" es: "<<sum<<endl;
	return sum;		
}

