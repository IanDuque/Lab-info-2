#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int k;
    cout << "ingrese el valor de k para encontrar el primer numero triangular con mas de k divisores" << endl;
    cin >> k;
    while (k <= 0) {
        cout << "El valor de k debe ser un número positivo." << endl;
        cin >> k;
    }
    int n = 1;
    while (true) {
        int triangular = n * (n + 1) / 2;
        int divisores = 0;
        int raiz = sqrt(triangular);

        for (int i = 1; i <= raiz; i++) {
            if (triangular % i == 0) {
                if (i == triangular / i) {
                    divisores++;
                } else {
                    divisores += 2;
                }
            }
        }
        if (divisores > k) {
            cout << "El numero es: " << triangular << " que tiene " << divisores << " divisores " << endl;
            break;
        }

        n++;
    }

    return 0;
}
