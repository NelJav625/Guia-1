#include "iostream"
using namespace std;
int main()
{
    int hora, minuto, segundo;

    cout<<"Ingrese la hora: ";
    cin>>hora;

    cout<<"Ingrese los minutos: ";
    cin>>minuto;

    cout<<"Ingrese los segundos: ";
    cin>>segundo;

    if ((hora < 24 ) && (minuto <= 59) && (segundo <= 58)) //pasar de segundo
    {
        hora = hora;
        minuto = minuto;
        segundo = (segundo + 1);

        cout<<"La hora un segundo despues es: "<<hora<<":"<<minuto<<":"<<segundo<<endl;
    }
    else if ((hora < 24 ) && (minuto <= 58) && (segundo <= 59)) //pasar de minuto
    {
        hora = hora;
        minuto = (minuto + 1);
        segundo = 00;

        cout<<"La hora un segundo despues es: "<<hora<<":"<<minuto<<":"<<segundo<<endl;
    }
    else if ((hora < 23 ) && (minuto = 59) && (segundo = 59)) //pasar de hora
    {
        hora = (hora + 1);
        minuto = 00;
        segundo = 00;

        cout<<"La hora un segundo despues es: "<<hora<<":"<<minuto<<":"<<segundo<<endl;
    }
    else if ((hora < 24 ) && (minuto = 59) && (segundo = 59))
    {
        hora = 00;
        minuto = 00;
        segundo = 00;

        cout<<"La hora un segundo despues es: "<<hora<<":"<<minuto<<":"<<segundo<<endl;
    }
}