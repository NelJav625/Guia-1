#include "iostream"
#include "string"

using namespace std;

int main()
{
    string palabra;
    int longitud;
    
    cout<<endl;
    cout<<"Ingrese una palabra "<<endl;
    cin>> palabra;

    longitud = palabra.length();

    cout<<endl;
    cout<<"Las letras totales de la palabra son: ";
    cout<< longitud<<endl;

    if(longitud == 10){
        cout<<"La palabra ingresada tiene exactamente 10 caracteres "<<endl;
    }else if(longitud > 10){
        cout<<"La palabra ingresada es MAYOR a 10 caracteres"<<endl;
    }else{
        cout<<"La palabra ingresada es MENOR a 10 caracteres"<<endl;

        cout<<endl;

    }if(longitud % 2 == 0){
        cout<<"La longitud de la palabra es PAR"<<endl;
    }else{
        cout<<"La longitud de la palabra es IMPAR"<<endl;
    }
  
}