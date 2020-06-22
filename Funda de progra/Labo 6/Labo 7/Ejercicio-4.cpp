#include "iostream"
#include "math.h"
using namespace std;

//INGRESAR VALORES DE ARREGLOS
void completar(int arreglo1[], int capacidad){
    int agregar;
    for (int i = 0 ; i < capacidad ; i++)
    {
        cout<<"Ingrese el valor deseado "<<(i + 1)<<": ";
        cin>>agregar;
        arreglo1[i] = agregar;   
    }
}

//SUMAR LOS ARREGLOS
int suma(int arreglo1[], int arreglo2[], int capacidad, int Sarreglos[]){
    int sumar;
    for (int i = 0 ; i < capacidad ; i++)
    {
        Sarreglos[i] = (arreglo1[i] + arreglo2[i]);
    }
}

//MOSTRAR ARREGLO RESULTANTE
int final(int Sarreglo[], int arreglofinal[], int capacidad){
    for (int i = 0 ; i < capacidad ; i++)
    {
        arreglofinal[i] = Sarreglo[i];
    }

    Sarreglo = arreglofinal;
}

int main()
{
    int n;

    cout<<"Ingrese el valor para n: "<<endl;
    cin>>n;
    int Sarreglo[n];
    int arreglo1[n] = {0};
    int arreglo2[n];
    int arreglofinal[n];

    cout<<"El tamanio de los arreglos es de "<<n<<" valores"<<endl;

    {// PRIMERA FUNCIÓN
        completar(arreglo1, n);
        cout<<"arreglo 1["<<n<<"]"<<" = {";
        for (int i = 0 ; i < n ; i++)
        {
            arreglo1[i];
            cout<<arreglo1[i]<<", ";
        }
        cout<<"}"<<endl;

        completar(arreglo2, n);
        cout<<"arreglo 2["<<n<<"]"<<" = {";
        for (int i = 0 ; i < n ; i++)
        {
            arreglo1[i];
            cout<<arreglo2[i]<<", ";
        }
        cout<<"}"<<endl;
    }

    {// SEGUNDA FUNCION
        suma(arreglo2, arreglo1, n, Sarreglo);
        cout<<"La suma de los arreglos es: "<<"Arreglos.sumados["<<n<<"] = {";
        for (int i = 0 ; i < n ; i++)
        {
            Sarreglo[i];
            cout<<Sarreglo[i]<<", ";
        }
        cout<<"}"<<endl;
    }

        return 0;
}

