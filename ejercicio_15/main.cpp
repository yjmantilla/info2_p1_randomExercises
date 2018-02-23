/*Ejercicio 15. Escriba un programa que pida constantemente números hasta que se ingrese el número cero e imprima en 
pantalla la suma de todos los números ingresados.
Ej: si se ingresan 1, 2, 3, 0 se debe imprimir:
El resultado de la sumatoria es: 6
*/

#include <iostream>
using namespace std;

int main()
{
	float num=0,sum=0;

	while(1)
		{
			cout<<"Inserte numero:"<<endl;
			cin>>num;
			sum=num+sum;
			cout<<"La suma es "<<sum<<endl;
			if (num==0){break;}
	
		}

	return sum;
}
