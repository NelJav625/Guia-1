#include "iostream"
#include "math.h"

using namespace std;

int main()
{
    cout<<endl;
    cout<< "El numero es par o impar " <<endl<<endl;

    int numero1;

    cout<< "Ingrese un numero X "<<endl;
    cin>> numero1;

    if(numero1 % 2 == 0){
        cout<<"El numero es par ";
    }else{
        cout<<"El numero es impar ";
    }
}