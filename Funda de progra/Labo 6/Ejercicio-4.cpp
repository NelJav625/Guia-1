#include "iostream"
using namespace std;
int main()
{
    int anio, mes, dia;

    cout<<"Ingrese el anio: ";
    cin>>anio;

    cout<<"Ingrese el mes: ";
    cin>>mes;

    cout<<"Ingrese el dia: ";
    cin>>dia;

    //para meses que tienen hasta 31 dias

    if ((anio > 0) && (mes <= 12) && (dia <= 30)) //pasar de dia
    {
        anio = anio;
        mes = mes;
        dia = (dia + 1);

        cout<<"La fecha un dia despues es: "<<anio<<":"<<mes<<":"<<dia<<endl;
    }
    else if ((anio > 0) && (mes <= 11) && (dia <= 31)) //pasar de mes
    {
        anio = anio;
        mes = (mes + 1);
        dia = 1;

        cout<<"La fecha un dia despues es: "<<anio<<":"<<mes<<":"<<dia<<endl;
    }
    else if ((anio > 0) && (mes <= 12) && (dia <= 31)) //pasar de anio
    {
        anio = (anio + 1);
        mes = 1;
        dia = 1;

        cout<<"La fecha un dia despues es: "<<anio<<":"<<mes<<":"<<dia<<endl;
    }

    // para meses que solo tienen hasta 30 dias

    if ((anio > 0) && (mes <= 12) && (dia <= 29)) //para dia
    {
        anio = anio;
        mes = mes;
        dia = (dia + 1);

        cout<<"La fecha un dia despues es: "<<anio<<":"<<mes<<":"<<dia<<endl; 
    }
    else if ((anio > 0) && (mes <= 11) && (dia <= 30)) //para mes
    {
        anio = anio;
        mes = (mes + 1);
        dia = 1;

        cout<<"La fecha un dia despues es: "<<anio<<":"<<mes<<":"<<dia<<endl;
    }
    else if ((anio > 0) && (mes <= 12) && (dia <= 30)) //para anio
    {
        anio = (anio + 1);
        mes = 1;
        dia = 1;

        cout<<"La fecha un dia despues es: "<<anio<<":"<<mes<<":"<<dia<<endl;
    }

    // año bisiesto

    if (((anio > 0) && (mes = 2) && (dia = 29)) == true); // febrero mes bisiesto

    // NO PUDE HACER LO DEL BICIESTO SORRY!

    

}