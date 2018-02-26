/*
Problema 9. Escriba un programa que pida un número entero N e imprima el resultado de la suma
de todos sus dígitos elevados a sí mismos.
Ej: si se ingresa 1223 el resultado sería 1

1 + 4 + 4 + 27 = 36
Nota: la salida del programa debe ser: El resultado de la suma es: 36.
*/

#include <iostream>

using namespace std;

//funciones auxiliares creadas para facilitar el programa

int pow(int a,int b);
int number_of_digits(int a);
int n_digit(int num, int n);

int main()
{
    int N=0;//este es el numero a introducir por el usuario
    cout<<"Introduzca un numero para saber la suma de cada uno de sus digitos elevados a si mismos:"<<endl;
    cin>>N;
    cout<<endl<<endl;


    int sum=0,digit=0;

    for(int i=1;i<=number_of_digits(N);i++)
        {
            //obtenemos el enesimo digito definido en la funcion n_digit
            digit=n_digit(N,i);

            //obtenemos el la potencia del enesimo digito a si mismo
            digit=pow(digit,digit);

            //sumamos el resultado a la suma acumulada
            sum=sum+digit;
        }

    cout<<endl<<"El resultado de la suma es: "<<sum<<endl;
    return 0;
}

//esta funcion da el resultado de elevar el numero "a" a la potencia "b" cuando ambos son naturales
int pow(int a,int b)
    {
        int potencia=a;
        if (b==0){return 1;}
        else
        {
        for(int i=1;i<b;i++)
            {
                    potencia=potencia*a;
            }
        return potencia;
        }
    }

//esta funcion devuelve el numero de digitos que tiene un numero "a"
int number_of_digits(int a)
    {
    int reduccion=a;
    int potencia=10;
    int digitos=0;

    //basicamente cuenta cuantas iteraciones le toma reducir un numero entero a uno sin parte entera
    //en cada iteracion divide entre 10 el numero
    //y el numero de iteraciones es basicamente el numero de digitos que tiene el numero

    while(reduccion>0)
        {
            reduccion=a/potencia;
            potencia=potencia*10;
            digitos++;
        }
    return digitos;
    }

//esta funcion devuelve el enesimo digito contados de izquierda a derecha, por ejemplo en 1223 el primer digito es 1
//basicamente usa el hecho de que al buscar el resto de un numero entre 10 se obtiene siempre el numero que esta en el lugar de las unidades
//entonces el algoritmo primero reduce el numero dividiendolo entre 10 hasta que el digito de interes quede en las unidades
//luego saca el resto entre 10
int n_digit(int num, int n)
    {
        int digit=0;
        digit=(num/pow(10,number_of_digits(num)-n))%10;
        return digit;
    }
