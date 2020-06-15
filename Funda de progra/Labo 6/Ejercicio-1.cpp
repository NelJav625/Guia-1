#include "iostream"
#include "math.h"
using namespace std;

int main()
{
    int a;
    int b;

    cout<<"digite el dividendo y despues el divisor: "<<endl;
    cin>>a>>b;

    int resi = (a % b);
    cout<<"El residuo que queda es: "<<endl<<resi;
    cout<<endl;
    cout<<"NOTA: El ultimo numero de estos residuo es el MCD en caso de ser 0 ignore y pase al numero anterior ";
    cout<<endl;

    int resi2 = (b % resi);
    cout<<resi2;
    cout<<endl;
    cout<<"NOTA: El ultimo numero de estos residuo es el MCD en caso de ser 0 ignore y pase al numero anterior ";
    cout<<endl;

    int resi3 = (resi % resi2);
    cout<<resi3;
    cout<<endl;
    cout<<"NOTA: El ultimo numero de estos residuos es el MCD en caso de ser 0 ignore y pase al numero anterior ";
    cout<<endl;

    int resi4 = (resi2 % resi3);
    cout<<resi4;
    cout<<endl;
    cout<<"NOTA: El ultimo numero de estos residuos es el MCD en caso de ser 0 ignore y pase al numero anterior ";
    cout<<endl;

    int resi5 = (resi3 % resi4);
    cout<<resi5;
    cout<<endl;
    cout<<"NOTA: El ultimo numero de estos residuos es el MCD en caso de ser 0 ignore y pase al numero anterior ";
    cout<<endl;

    int resi6 = (resi4 % resi5);
    cout<<resi6;
    cout<<endl;
    cout<<"NOTA: El ultimo numero de estos residuos es el MCD en caso de ser 0 ignore y pase al numero anterior ";
}




