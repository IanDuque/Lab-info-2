#include <iostream>
using namespace std;

int main()
{
    int a,b,c,x,z,suma;
    cout << "ingrese un numero impar para calcular la suma de las diagonales de una matriz cuadrada en espiral con dicha magnitud"<< endl;
    cin >>a;
    while (a<0 or a%2==0){
        cout << "el numero ingresado debe ser impar y positivo" << endl;
        cin >> a;
    }
    suma=1;
    x=2;
    b=2;
    c=1;
    while (x<=a){
        z=0;
        while (z<4){
            c=c+b;
            suma=c+suma;
            z++;
            cout << c << endl;
        }
        b=b+2;
        x=x+2;
    }
    cout << "en una espiral de " << a << "x" << a << " la suma es: " << suma;
    return 0;
}
