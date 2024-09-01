#include <iostream>
using namespace std;

int main () {
    int a,b,c,x;
    cout << "ingrese un numero entero para conocer si es un cuadrado perfecto"<< endl;
    cin >> a;
    c=0;
    x=1;
    while (a<0){
        cout << "el numero ingresado debe ser positivo"<< endl;
        cin >> a;
    }
    while (x<=a){
        b=(x*x);
        if (b==a){
            cout << a << " es un numero perfecto"<< endl;
            x=x+a;
            c++;
        }
        x++;
    }
    if (c==0){
        cout << a << " no es un numero perfecto"<< endl;
    }
    return 0;
}
