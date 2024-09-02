#include <iostream>
using namespace std;

int main() {
    int n,termino;
    int suma = 0;
    int a,b;
    a=0;
    b=1;
    cout << "Ingrese un numero n para calcular la suma de los numeros de la serie de Fibonacci menores al valor ingresado" <<  endl;;
    cin >> n;
    while (b < n) {
        if (b % 2 == 0) {
            suma += b;
        }
        termino=a+b;
        a = b;
        b = termino;
    }
    cout << "La suma de los numeros pares de Fibonacci menores a " << n << " es: " << suma << endl;

    return 0;
}
