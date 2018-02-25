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

    while(1)
    {
        cout << "Bienvenido, a continuacion se muestran las opciones de calculo:" << endl;
        cout <<endl<<"1.Suma"<<endl<<"2.Resta"<<endl<<"3.Multiplicacion"<<endl<<"4.Division"<<endl<<"5.Salir"<<endl<<endl;
        cout <<endl<<endl<<"Ingrese los numeros que desea operar en su respectivo orden:"<<endl<<endl;
        cin>>A>>B;
        cout <<endl<<endl<<"Ingrese el numero de la operacion que desea realizar:"<<endl<<endl;
        cin >> opc;

        switch (opc)
        {
        case 1: {cout<<A<<"+"<<B<<"="<<A+B<<endl<<endl;break;}
        case 2: {cout<<A<<"-"<<B<<"="<<A-B<<endl<<endl;break;}
        case 3: {cout<<A<<"x"<<B<<"="<<A*B<<endl<<endl;break;}
        case 4:
            {
             while(B==0){cout<<endl<<endl<<"Error! Division entre 0. Vuelva a ingresar B"<<endl<<endl; cin>>B;cout<<endl;}
             cout<<A<<"/"<<B<<"="<<A/B<<endl<<endl;break;
            }
        case 5: {cout<<"Hasta luego!"<<endl<<endl;return 0;}
        default:{cout<<"A introducido una operacion no valida. El programa reiniciara"<<endl<<endl;break;}
        }
    }
    return 0;
}
