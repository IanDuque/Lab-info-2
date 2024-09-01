#include <iostream>
using namespace std;

int main () {
    float a, b;
    int c, x;
    cout << "ingrese un numero para mostrar una tabla de multiplicar hasta el 10"<< endl;
    cin >> a;
    x=1;
    c=1;
    while (x<=10){
        b=a*c;
        cout << a<< "x" << c << "=" << b<< endl;
        x++;
        c++;
    }
    return 0;
}
