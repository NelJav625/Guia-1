#include <iostream>
#include <string>
char codigoM(char clave[], int i); // codigoM = codigo murcielago
void arreglomurcielago(char x[ ], int n); //arreglo perteneciente a la palabra murcielago
using namespace std;
int main(void)
{
    string palabra, resultado;
    char clave[50];
    int n;
    cout<<endl<<"EL CODIGO MURCIELAGO. "<<endl<<endl;
    cout<<"Ingrese la palabra a codificar/transformar:" <<endl;
    cin>>clave;
    palabra=clave;
    n=(palabra).length();
    for(int i = 0; i < n; i++){
    codigoM(clave, i);}
    resultado=clave;
     cout<<"La palabra '"<<palabra<<"' codificada en clave murcielago es '"<<resultado <<"'." <<endl;
    arreglomurcielago(clave, n);
}
char codigoM(char clave[], int i)
{
    switch (clave[i])
    {
    case 'm':
        clave[i]='0'; return clave[i];
        break;
        case 'u':
        clave[i]='1'; return clave[i];
        break;
        case 'r':
        clave[i]='2'; return clave[i];
        break;
        case 'c':
        clave[i]='3'; return clave[i];
        break;
        case 'i':
        clave[i]='4'; return clave[i];
        break;
        case 'e':
        clave[i]='5'; return clave[i];
        break;
        case 'l':
        clave[i]='6'; return clave[i];
        break;
        case 'a':
        clave[i]='7'; return clave[i];
        break;
        case 'g':
        clave[i]='8'; return clave[i];
        break;
        case 'o':
        clave[i]='9'; return clave[i];
        break;
    
    default:  return clave[i];
        break;
    }
    return clave[i];
}
void arreglomurcielago(char x[ ], int n)
{
int i;
for(i = 0; i < n; i++)
cout << x[i] << " ";
cout << endl;
}