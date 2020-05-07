#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int numero1;
    int n, base;

    cout << "Ingrese el valor del radio: " << endl;
    cin >> base;
    
    double resultado = pow(base,2) * 3.1416;
    cout << " El area es igual a: " << resultado << endl; 

    double mult = 2 * 3.1416 * base;
    cout << " El perimetro es igual a: " << mult << endl;
    
}