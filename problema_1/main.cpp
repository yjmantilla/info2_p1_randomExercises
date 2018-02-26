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


    char letra=0; //letra a introducir por el usuario
    int vocal_may=0; //variable para saber si letra es una vocal mayuscula
    int vocal_min=0; //variable para saber si letra es una vocal minuscula
    int consonante_may=0;//variable para saber si letra es una consonante mayuscula
    int consonante_min=0;//variable para saber si letra es una consonante minuscula

    //ciclo while permite que el usuario introduzca letras indefinidamente hasta que el ponga 0 para terminar el programa

    while(1)
    {
    cout << "Introduzca una letra o cero para salir del programa" << endl;
    cin >> letra;
    cout<<endl<<endl;

    //chequeamos si letra es vocal:
    vocal_min=(letra =='a' ||letra =='e' || letra =='i' || letra =='o' ||letra =='u');
    vocal_may=(letra =='A' ||letra =='E' || letra =='I' || letra =='O' ||letra =='U');

    if (vocal_may || vocal_min){cout<<letra<<" es una vocal"<< endl<< endl;}
        else //si letra no es vocal probamos si es consonante
            {
                //para saber si es consonante (ya sabiendo que no es vocal) se debe cumplir que
                //65<=letra<=90 o  97<=letra<=122 por el codigo ascii

                consonante_may=(65<=letra && letra<= 90);
                consonante_min=(97<=letra && letra<= 122);

                if(consonante_may|| consonante_min){cout<<letra<<" es una consonante"<< endl<< endl;}

                    else
                        //si letra no cumple ninguna de las anteriores entonces no es una letra
                        {cout<<letra<<" no es una letra"<< endl<< endl;}
            }
    //si el usuario introduce cero finaliza el programa (0 en ASCII es 48)
    if (letra==48){cout<<endl<<"Hasta Luego!"<<endl;break;}

    }
    return 0;
}
