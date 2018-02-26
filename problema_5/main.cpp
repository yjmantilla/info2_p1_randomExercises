/*
Problema 5. Escriba un programa que muestre el siguiente patrón en la pantalla:

    *
   ***
  *****
 *******
  *****
   ***
    *

El tamaño del patrón estará determinado un número entero impar que ingrese el usuario. En el
ejemplo mostrado, el tamaño de la gura es 7.

*/

#include <iostream>
using namespace std;

int main()
{
    int N=0;//dimension del rombo

    //pedimos un numero al usuario, se sigue pidiendo hasta que el numero sea impar
    while(N%2==0)
    {
        cout<<"Introduzca un numero impar para generar el rombo:"<<endl;
        cin>>N;
        cout<<endl;
    }


    //parte de superior del rombo
    //el contador fila itera en numeros impares hasta que llega al numero impar inmediatamente anterior escogido por el usuario
    //como itera en numeros impares se aumenta de 2 en 2
    for(int fila=1;fila<=N-2;fila=fila+2)
    {
        //en la primera fila se imprimen N-fila espacios repartidos en dos tandas, antes y despues de los asteriscos
        //es por ello que se dividen en dos los espacios
        //luego cuando se pasa a la siguiente se quita un espacio en cada tanda (es decir dos espacios en total)
        for(int espacios=(N-fila)/2;espacios>=1;espacios--){cout<<" ";}

        //se imprimen tantos asteriscos como el numero "fila" en que nos encontremos (recordar que fila es siempre impar).
        for(int asteriscos=1;asteriscos<=fila;asteriscos++){cout<<"*";}

        //se imprime la segunda tanda de espacios
        for(int espacios=(N-fila)/2;espacios>=1;espacios--){cout<<" ";}
        cout<<endl;

    }

    //mitad del rombo
    //se imprimen tantos asteriscos como el numero escogido por el usuario
        for(int asteriscos=1;asteriscos<=N;asteriscos++){cout<<"*";}
        cout<<endl;

    //parte inferior del rombo
    //es exactamente igual a la parte superior pero las filas comienzan desde N-2 y van decreciendo de 2 en 2
    //todo lo demas es igual

        for(int fila=N-2;fila>=1;fila=fila-2)
        {
            for(int espacios=(N-fila)/2;espacios>=1;espacios--){cout<<" ";}
            for(int asteriscos=1;asteriscos<=fila;asteriscos++){cout<<"*";}
            for(int espacios=(N-fila)/2;espacios>=1;espacios--){cout<<" ";}
            cout<<endl;

        }

    return 0;
}
