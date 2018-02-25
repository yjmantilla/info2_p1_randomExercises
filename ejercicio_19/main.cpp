/*
Ejercicio 19. Escriba un programa que pida un número N e imprima si es o no un número primo.
Ej: si se ingresa 7 se debe imprimir:
7 es un numero primo.
y si se ingresa 8 se debe imprimir:
8 NO es un numero primo.
*/

#include <iostream>

using namespace std;

int main()
{
    int num=0;//este es el numero que se desea evaluar
    int div=0;//guarda el numero de divisores de un numero
    int prime=1;//variable que dice si es primo o no. 0 no es, 1 si es. Se asume primo al principio.

    cout << "Ingrese el numero del que se desea saber si es primo" << endl;
    cin >> num;

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

    //impresion del resultado

    cout<<endl;
    if (prime==1){cout<<num<<" ES un numero primo"<<endl;}
    else {cout<<num<<" NO ES un numero primo"<<endl;}

    /*
    Este algoritmo es ineficiente y lento para numeros muy grandes. El hecho de contar divisores gasta memoria.
    Pero para nuestros fines es suficiente y me parecio una manera interesante de resolverlo.
    Ademas SE ASUME QUE LA ENTRADA ES UN NUMERO NATURAL. En otras palabras el usuario no deberia colocar numeros negativos
    pero en cualquier caso eso se resuelve facilmente. Asi como esta el programa dira que no es primo para numeros negativos
    porque nunca entra en el for.
    */

    return prime;
}
