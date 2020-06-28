#include "iostream"
using namespace std;
void notadatos (int notas, int alumnos);
void promedio (int datos [] [5], int alumnos);
int main()
{
    cout<<endl<<"CALCULO DE NOTAS"<<endl<<endl;
    int notas;
    int alumnos;

    cout<<"Ingrese la cantidad de alumnos"<<endl;
    cin>>alumnos;

     notadatos(notas, alumnos);
}
void notadatos (int notas, int alumnos){
    int datos [alumnos] [5]; 
    for (int a=0 ; a<alumnos ; a++){
        for (int i=0 ; i<5 ; i++){
        cout<<"Ingrese las notas a calcular: "<<endl;
        cin>>notas;
        notas = datos [a] [i];
        }
        promedio (datos, alumnos);
    }
}
void promedio (int datos [] [5], int alumnos){
    int sumnotas = 0.0;

    for(int i=0 ; i<5 ; i++){
        sumnotas = sumnotas + (datos [alumnos] [i] * 0.2);
    }
    if(sumnotas < 6){
        cout<<"El promedio es: "<<sumnotas<<endl;
        cout<<"Este alumno esta REPROBADO "<<endl;
    }else{
        cout<<"El promedio es: "<<sumnotas<<endl;
        cout<<"Este alumno esta APROBADO "<<endl;
    }
}