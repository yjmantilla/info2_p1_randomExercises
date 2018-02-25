/*
Ejercicio 23. Escriba un programa que pida dos números A y B e imprima en pantalla el mínimo
común múltiplo entre los dos.
Ej: si se ingresan 4 y 6 se debe imprimir:
El MCM de 4 y 6 es: 12
*/

#include <iostream>

using namespace std;

int main()
{
    int A=0,B=0,min=0,mcd=1,mcm=0;
    cout << "Ingrese dos numeros para calcular su minimo comun multiplo" << endl;
    cin>>A>>B;
    cout<<endl;

    //busqueda de quien es el menor

    if(A<=B){min=A;}else{min=B;}


    //calculo de mcd

    for(int i = min;i>=1;i--)
    {
        if(A%i==0 && B%i==0){mcd=i;break;}
    }

    mcm=A*B/mcd;

    cout<<mcm<<endl;
    return mcm;
}
