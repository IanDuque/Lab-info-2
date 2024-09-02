#include <iostream>
using namespace std;

int main() {
    int n,mcm;
    cout << "Ingrese un numero para calcular el MCM de todos los numeros entre 1 y el" << endl;
    cin >> n;
    while (n <= 0) {
        cout << "el numero debe ser positivo" << endl;
        cin >> n;
    }
    mcm=1;
    for (int i = 1; i <= n; i++) {
        int temp = mcm;
        while (temp % i != 0) {
            temp += mcm;
        }
        mcm = temp;
    }
    cout << "El minimo comun multiplo es: " << mcm;
    return 0;
}
