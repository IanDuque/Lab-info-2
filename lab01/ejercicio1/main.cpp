#include <iostream>
using namespace std;
int main()
{
    float a,b;
    cout << "ingrese 2 numeros para conocer el mayor de ellos";
    cout << endl;
    cin >> a >> b;
    if (a>b){
        cout << a << " es el mayor numero ingresado";

    }
    else {
        cout << b << " es el mayor numero ingresado";
    }
    return 0;
}
