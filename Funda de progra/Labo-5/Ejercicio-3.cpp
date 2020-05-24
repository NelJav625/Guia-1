#include "iostream"
#include "math.h"

using namespace std;

int main()
{
    int numero;

    cout <<"Ingrese el numero a comprobar: ";
    cin >> numero;

    if(numero > 0){
        cout <<"El numero es positivo ";
    }else if(numero < 0){
        cout <<"El numero es Negativo ";
    }else{
        cout <<"El numero es 0";
    }
}
