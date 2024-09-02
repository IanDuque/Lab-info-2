#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    int a,b;
    b= rand() %101;
    cout << "el programa elegira un numero al azar entre 1 y 100, el programa le dira si es mayor o menor que el ingresado hasta que lo adivine" << endl;
    a=0;
    while (a!=b){
        cout<<endl<<"Ingrese un numero"<<endl;
        cin>>a;
        b++;
        if (a < b){
            cout<<endl<<a<<" es menor que el numero";
        }
        else if (a > b){
            cout<<endl<<a<<" es mayor que el numero";
        }
        else if(a == b){
            cout<<endl<<"Acertaste!!";
        }
    }
    while(a != b);
    cout<<endl<<"Numero de intentos: "<<b;
    return 0;
}
