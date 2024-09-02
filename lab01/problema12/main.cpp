#include <iostream>
using namespace std;

int main() {
    int a,n;
    cout << "Ingrese un numero para calcular la suma de todos los primos menores que el" << endl;
    cin >> n;
    if (n <= 2) {
        cout << "No hay números primos menores que " << n << endl;
        return 0;
    }
    int suma = 0;
    for (int num = 2; num < n; num++) {
        int i;
        a = 1;
        for (i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                a = 0;
            }
        }
        if (a) {
            suma += num;
        }
    }
    cout << "El resultado de la suma es: " << suma;

    return 0;
}
