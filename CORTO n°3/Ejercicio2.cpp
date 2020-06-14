#include <iostream>
using namespace std;
int main()
{
    int numero=37; // EL NUMERO SECRETO ES 37
    int in= 0; // Numero de intentos 

    cout<<endl<<"EL NUMERO MAGICO"<<endl;
    cout<<endl<<"Indicaciones: Seleccione un numero entre 1-100 al azar, solo tiene 5 intentos, por cada intento recibira una pista para ver si su numero es menor o mayor al numero secreto, si usted ya no desea jugar presione 0 "<<endl<<endl;

    while (numero |= 0 && in<5){
        cout<<"Ingrese un numero: ";
        cin>> numero;

        if (numero == 37){
            cout<<"FELICIDADES! ENCONTRASTE EL NUMERO SECRETO";
            break;
        }else if (numero < 37){
            in ++;
            cout<<"El numero ingresado es menor al numero secreto"<<endl;
            cout<<"Te quedan "<<in - 5<<" intentos"<<endl;
            
        }else if (numero > 37){
            in ++;
            cout<<"El numero ingresado es mayor al numero secreto"<<endl;
            cout<<"Te quedan "<<in-5<<"intentos"<<endl;
        }
    }
}