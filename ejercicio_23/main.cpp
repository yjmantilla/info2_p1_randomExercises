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

    int A=0,B=0; //numeros para evaluar el mcm
    int min=0;//el menor entre los numeros A y B
    int mcd=1,mcm=0; // maximo comun divisor y minimo comun multiplo

    /*
     Estrategia: se calcula el minimo comun multiplo usando la siguiente formula:
     mcm(A,B)=(A*B)/mcd(A,B)
    */

    cout << "Ingrese dos numeros para calcular su minimo comun multiplo" << endl;
    cin>>A>>B;
    cout<<endl;

    //Busqueda de quien es el menor, lo cual será util para buscar el mcd entre ambos numeros

    if(A<=B){min=A;}else{min=B;}

    //Calculo del mcd, se comienza a partir del menor entre ambos numeros.
    //Ya que el mcd tiene que ser menor o igual al menor entre A y B.
    //Se va iterando de manera decreciente para buscar el mayor numero que divide a A y B simultaneamente de manera exacta
    //El algoritmo finaliza cuando se llega a 1.

    for(int i = min;i>=1;i--)
    {
        if(A%i==0 && B%i==0){mcd=i;break;}
        //cuando lo anterior se cumple se ha encontrado el mcd y se finaliza el loop
    }

    //en este punto mcd=maximo comun divisor de A y B.

    //aplicamos la formula
    mcm=A*B/mcd;

    //se muestra el resultado al usuario

    cout<<"El MCM de "<<A<<" y "<<B<<" es: "<<mcm<<endl;
    return mcm;

    /*
    Este programa asume que se ingresan numeros naturales. Al ingresar numeros negativos no funciona;
    pero esto se puede resolver aplicando valor absoluto si alguno es negativo.
    Notese que en el caso que se ingrese cero en alguno o en los dos el programa devuelve correctamente que el mcm es 0.
    Esto es posible ya que el mcd se inicializa en 1 para no formar una indeterminacion. Y que el loop del for no se cumple nunca.
    */
}
