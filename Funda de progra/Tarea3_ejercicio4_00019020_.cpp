#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    string nombre;
    double precio;
    int cantidad;

    cout << "Ingrese el nombre del producto " << endl;
    cin >>nombre;

    cout << "Ingrese el precio del producto " << endl;
    cin >>precio;

    cout << "Ingrese la cantidad del producto " << endl;
    cin >>cantidad;

    double mult = precio * cantidad;
    cout << " El total de dinero gastado es: $" << mult << endl;


    

}