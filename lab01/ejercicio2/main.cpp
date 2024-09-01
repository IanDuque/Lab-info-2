#include <iostream>
using namespace std;
int main()
{
    float a,b;
    cout << "ingrese 2 numeros para conocer el menor de ellos";
    cout << endl;
    cin >> a >> b;
    if (a<b){
        cout << a << " es el menor numero ingresado";

    }
    else {
        cout << b << " es el menor numero ingresado";
    }
    return 0;
}
