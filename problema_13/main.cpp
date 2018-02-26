/*
Problema 13. Escriba un programa que reciba un número y calcule la suma de todos los primos
menores que el número ingresado.
Ej: Si se recibe 10 el programa debe imprimir 17.
Nota: la salida del programa debe ser: El resultado de la suma es: 17.
*/

#include <iostream>
using namespace std;

//funciones
int prime(int num);

int main()
{

    int sum=0;//acumulador para la suma

    int N=0;//numero a ingresar por el usuario

    cout<<"Ingrese un numero para conocer la sumatoria de todos los numeros primos menores o iguales a el:"<<endl;
    cin>>N;
    cout<<endl<<endl;


    for(int i=0;i<=N;i++)
    {
        //si el numero es primo se agrega a la sumatorio, si no se prosigue al siguiente hasta llegar al limite dado por el usuario
        if(prime(i)){sum=sum+i;}
    }

    cout<<"El resultado de la suma es: "<<sum<<endl;
    return 0;
}

//funcion que devuelve 1 si el numero es primo, 0 si no lo es. Basado en el ejercicio 19
int prime(int num)
{
    int div=0;//guarda el numero de divisores de un numero
    int prime=1;//variable que dice si es primo o no. 0 no es, 1 si es. Se asume primo al principio.

    //Estrategia: contar el numero de divisores del numero, si son solo 2 (1 y el mismo), entonces es primo.

    for (int i=1;i<=num;i++)
    {
        if(num%i==0){div++;}
    }

    if (div==2){prime=1;}
    else {prime=0;}

    /*
    Notese que los casos del 0, 1 y 2 arrojan resultados correctos.
    0 no entra en el for y el numero de divisores queda en cero (aunque en realidad son infinitos)
    1 entra pero solo arroja un divisor y por lo tanto no se considera primo. (que corresponde a la convencion matematica)
    2 entra y solo arroja dos divisores como todo numero primo
    */

    /*
    Este algoritmo es ineficiente y lento para numeros muy grandes. El hecho de contar divisores gasta memoria.
    Pero para nuestros fines es suficiente y me parecio una manera interesante de resolverlo.
    Ademas SE ASUME QUE LA ENTRADA ES UN NUMERO NATURAL. En otras palabras el usuario no deberia colocar numeros negativos
    pero en cualquier caso eso se resuelve facilmente. Asi como esta el programa dira que no es primo para numeros negativos
    porque nunca entra en el for.
    */

    return prime;
}
