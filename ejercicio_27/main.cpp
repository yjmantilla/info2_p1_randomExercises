/*
Ejercicio 27. Escriba un programa que actúe como una calculadora con operaciones de suma,
resta, multiplicación y división, el usuario debe ingresar los operandos y la operación a realizar.
Ej: si se ingresan 3, + y 5 se debe imprimir:
3+5=8
*/

#include <iostream>

using namespace std;

int main()
{
    int opc=0; //opcion seleccionada por el usuario
    float A=1,B=1;//numeros a operar

    //usamos un ciclo while que corre continuamente hasta que el usuario desee salir

    while(1)
    {
        //presentacion del programa
        cout << "Bienvenido, a continuacion se muestran las opciones de calculo:" << endl;
        cout <<endl<<"1.Suma"<<endl<<"2.Resta"<<endl<<"3.Multiplicacion"<<endl<<"4.Division"<<endl<<"5.Salir"<<endl<<endl;

        //entrada de opciones y numeros

        //opcion
        cout <<endl<<endl<<"Ingrese el numero de la operacion que desea realizar:"<<endl<<endl;
        cin >> opc;

        //numeros a operar, los pide si la opcion no fue salir
        if(opc!=5)
        {
        cout <<endl<<endl<<"Ingrese los numeros que desea operar en su respectivo orden:"<<endl<<endl;
        cin>>A>>B;
        }

        //ejecucion segun lo deseado por el usuario
        switch (opc)
        {
        case 1: {cout<<A<<"+"<<B<<"="<<A+B<<endl<<endl;break;}//suma
        case 2: {cout<<A<<"-"<<B<<"="<<A-B<<endl<<endl;break;}//resta
        case 3: {cout<<A<<"x"<<B<<"="<<A*B<<endl<<endl;break;}//multiplicacion
        case 4: //division
            {//proteccion contra division entre cero
             while(B==0){cout<<endl<<endl<<"Error! Division entre 0. Vuelva a ingresar B"<<endl<<endl; cin>>B;cout<<endl;}
             cout<<A<<"/"<<B<<"="<<A/B<<endl<<endl;break;
            }
        case 5: {cout<<endl<<endl<<"Hasta luego!"<<endl<<endl;return 0;}//salida del programa, notese que se retorna 0 para salir del main

        //si el usuario coloca una opcion no disponible
        default:{cout<<endl<<endl<<"A introducido una operacion no valida. El programa reiniciara"<<endl<<endl;break;}

        }
    }
    return 0; //en teoria esto nunca deberia ejecutarse pero esta por proteccion

    //NOTA: si el usuario ingresa una letra o cualquier caracter que no sean numeros en los operandos el programa no correra correctamente
}
