#include "iostream"
using namespace std;
void arriba(float [ ],float);
void abajo(float [ ], float);
float promedio(float arreglo[]){
    float acum = 0.0;
    for(int i=0 ; i<25 ; i++){
        acum+=arreglo[i];
    }
    return acum / 25;
}
int main()
{
    cout<<endl<<"PROMEDIO DE ALTURAS"<<endl<<endl;
    cout<<"Ingrese las medidas de los 25 estudiantes "<<endl<<endl;
    
     float alturas[25];
     for(int i=0 ; i<25 ; i++){
         cout<<"Ingrese la medida "<<i+1<<": ";
         cin>>alturas[i];
     }
     float prom = promedio(alturas);
     cout<<"La media es de: "<<prom<<endl;
     arriba(alturas, prom);
     abajo (alturas, prom);
}
void arriba(float alturas[], float prom){
    int contador=0;
    for(int i=0 ; i<25 ; i++){
        if(alturas[i] > prom){
            contador++;
        }
    }
    cout<<"El numero de estudiantes arriba de la media es: "<<contador<<endl;
}
void abajo(float alturas[], float prom){
    float contador2 = 0;
    for(int i=0 ; i<25 ; i++){
        if(alturas[i]<prom){
            contador2++;
        }
    }
    cout<<"El numero de estudiantes arriba de la media es: "<<contador2<<endl;
}