#include <iostream>
using namespace std;

int main () {
    int a,b,c,x;
    cout << "ingrese un numero entero para saber si este es primo o no" << endl;
    cin >> a;
    x=1;
    c=0;
    while (x<=a){
        b=a%x;
        if (b==0){
            c++;
        }
        x++;
    }
    if (c==2){
        cout << a << " es un numero primo" << endl;
    }
    else {
        cout << a << " no es un numero primo" << endl;
    }
    return 0;
}
