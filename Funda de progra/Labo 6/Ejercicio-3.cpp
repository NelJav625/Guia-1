#include <iostream>
using namespace std;
int main()
{

int a; //a = AÑO 
    cout<<endl<< "EL PROGRAMA DESEA SABER SI EN UN ANIO BISIESTO O NO?\nINGRESE EL ANiO"<<endl;
    cin>>a;

    if ((a%4==0) &&(a%100!=0) || (a%400==0)){
        cout<<"el anio ingresado SI es bisiesto:"<<endl;
    }else{
        cout<<"el ano ingresado NO es bisiesto";
    }
}