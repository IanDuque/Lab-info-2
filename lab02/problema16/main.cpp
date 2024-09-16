#include <iostream>

using namespace std;

int main()
{
    int n, rutas, num, den;
    cout << "ingrese un valor n para calcular la cantidad posible de caminos de una esquina a otra en una cuadricula de nxn" << endl;
    cin >> n;
    num=1;
    den=1;
    for (int i=1; i<=2*n ; i++){
        num=i*num;
    }
    for (int i=1; i<=n ; i++){
        den=i*den;
    }
    rutas= num/(den*den);
    cout << "la cantidad de rutas posibles en una cuadricula de " << n << "x" << n << "es: " << rutas << endl;

    return 0;
}
