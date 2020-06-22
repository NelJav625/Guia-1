#include "iostream"
using namespace std;
int main(void)
{
    int n = 0;
    int impares[100]{};

    for(int i = 1 ; i < 201 ; i+= 2){
        impares[n] = i;
        n++;
    }
    for(int i = 99 ; i >= 0 ; i--){
        cout<<impares[i]<<", ";
    }
    cout<<endl<<"TERMINADO";
}