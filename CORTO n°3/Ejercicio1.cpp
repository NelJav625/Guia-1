#include <iostream>
using namespace std;
int main()
{
    int st; //Salario total
    int sr; //Salario real
    int hn; //Hora normal
    int he; //Hora extra
    int empleados;

    cout<<endl<<"CALCULOS DE SALARIOS POR EMPLEADO"<<endl<<endl;

    cout<<"Ingrese el numero de trabajadores: ";
    cout<<endl;
    cin>> empleados;

    for (int i = 0 ; i < empleados ; i++)
    {
        cout<<endl<<"Ingrese la cantidad de Horas trabajadas por el empleado: "; // personas dentro de la empresa/compañia
        cin>> hn;
        double m = (hn * 1.75);
        cout<<endl<<"El monto total es de: $"<<m;
        cout<<endl;

        cout<<endl<<"Ingrese la cantidad de Horas Extras trabajadas por el empleado: "; //Horas extra por cada persona
        cin>> he;
        double M = (he * 2.50);
        cout<<endl;
        cout<<"El monto total es de: $"<<M;
        cout<<endl;

        double sum = (m + M);  
        cout<<endl<<"Su salario total es de: $"<<sum<<endl;
        // Resto del codigo usando IF/ELSE
        if (sum > 500){
            cout<<endl;
            float d1 = (sum * 0.04); // Descuento de Seguro Social
            float d2 = (sum * 0.0625); // Descuento de AFP
            float d3 = (sum * 0.1); // Descuento de Impuestos sobre renta
            double sd = (d1 + d2 + d3); //sd = suma de descuentos
            double dt = (sum - sd); // dt = descuento total
            cout<<"Su salario con descuento MAYOR a $500 es: $"<<dt;// d1, d2, d3...dn = descuento
            
        }else if (sum <= 500){
            cout<<endl;
            float d4 = (sum * 0.04);
            float d5 = (sum * 0.0625);
            double sd = (d4 + d5); //sd = suma de descuentos
            double dt = (sum - sd); // dt = descuento total
            cout<<"Su salario con descuento MENOR o igual a $500 es: $"<<dt;// d1, d2, d3...dn = descuento
        }
    }
}