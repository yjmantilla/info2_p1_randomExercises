/*Ejercicio 15. Escriba un programa que pida constantemente números hasta que se ingrese el número cero e imprima en 
pantalla la suma de todos los números ingresados.
Ej: si se ingresan 1, 2, 3, 0 se debe imprimir:
El resultado de la sumatoria es: 6
*/

#include <iostream>
using namespace std;

int main()
{
    float num=0,sum=0;//num es el numero que se ingresa continuamente, sum acumula la sumatoria
    cout<<"A continuacion se le pediran numeros para hacer su sumatoria, ingrese cero para terminarla.";
    cout<<endl<<endl<<"Inserte los numeros, presione enter en cada uno:"<<endl<<endl;

    while(1) //el while siempre se evalua y solo sale en el break
		{

			cin>>num;
			sum=num+sum;
            if (num==0){break;} //el break solo ocurre si el usuario ingresa 0
		}

    cout<<endl<<"El resultado de la sumatoria es "<<sum<<endl;
	return sum;
}
