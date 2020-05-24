#include "iostream"
#include "math.h"

using namespace std;

int main()
{
    int numero1;
    int numero2;

    cout << "Ingrese el Dividendo: "<< endl;
    cin >> numero1;

    cout << "Ingrese el Divisor: "<< endl;
    cin >> numero2;

    if(numero2 == 0){
        cout<<"El numero NO es divisible ya que el divisor es 0 "<<endl;
    }else if(numero1 > numero2){
        cout<<"El numero SI es divisible"<<endl;
    }if(numero1 < numero2){
        cout<<"El numero sigue siendo divisible "<<endl;
    }
}