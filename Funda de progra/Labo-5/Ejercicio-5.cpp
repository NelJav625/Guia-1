#include "iostream"
#include "string"

using namespace std;

int main()
{
    string palabra;
    string primeraletra;
    string ultimaletra;

    cout <<"Ingrese una palabra "<<endl;
    cin >> palabra;

    primeraletra = palabra[0];
    ultimaletra = palabra[palabra.length() -1];

    if(primeraletra == ultimaletra){
        cout<<"La palabra si empieza y termina con la misma letra ";
    }else{
        cout<<"La palabra no empieza ni termina con la misma letra ";
    } 
}