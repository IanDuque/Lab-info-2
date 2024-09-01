#include <iostream>
using namespace std;

int main () {
    float a,b,c;
    cout << "ingrese numeros para concer el mayor de ellos, para dar el resultado ingrese el valor 0"<< endl;
    a=1;
    while (a!=0){
        cin >>a;
        b=a;
        if (b>c){
            c=b;
        }
    }
    cout << "el mayor numero ingresado es: "<< c << endl;
    return 0;
}
