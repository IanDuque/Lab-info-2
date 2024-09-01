#include <iostream>
using namespace std;
int main(){
    float a,b,c;
    int x;
    cout<< "ingrese 2 numeros para conocer el resultado de la potencia, primero la base, luego el exponente"<< endl;
    cin>>a>>b;
    c=1;
    x=1;
    while (x<=b){
        c=c*a;
        x++;
    }
    cout << "el resultado de la potencia es "<< c;
    return 0;
}
