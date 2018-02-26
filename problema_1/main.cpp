/*
Problema 1. Escriba un programa que identique si un carácter ingresado es una vocal, una con-
sonante o ninguna de las 2 e imprima un mensaje según el caso.

Nota: el formato de salida debe ser:
no es una letra.
a es una vocal.
C es una consonante.
*/

#include <iostream>

using namespace std;

int main()
{


    char letra=0;
    int vocal_may=0;
    int vocal_min=0;

    while(1)
    {
    cout << "Introduzca una letra o cero para salir del programa" << endl;
    cin >> letra;
    cout<<endl<<endl;

    vocal_min=(letra =='a' ||letra =='e' || letra =='i' || letra =='o' ||letra =='u');
    vocal_may=(letra =='A' ||letra =='E' || letra =='I' || letra =='O' ||letra =='U');

    if (vocal_may || vocal_min){cout<<letra<<" es una vocal"<< endl<< endl;}
    else
    {
        if((65<=letra && letra<= 90) || (97<=letra && letra<= 122)){cout<<letra<<" es una consonante"<< endl<< endl;}
        else{cout<<letra<<" no es una letra"<< endl<< endl;}
    }
    if (letra==48){break;}
    }
    return 0;
}
