#include <iostream>
using namespace std;

int main() {
    int a;
    double e = 1.0;
    double factorial = 1;
    cout << "ingrese un valor para determinar la cantidad de terminos a calcular para aproximar e (un numero mayor de terminos resulta en una aproximacion mas exacta)" << endl;
    cin >> a;
    for (int n = 1; n < a; ++n) {
        factorial *= n;
        e += 1.0 / factorial;
    }

    cout << "El valor aproximado de Euler (e) es: " << e << endl;

    return 0;
}
