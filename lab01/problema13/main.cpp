#include <iostream>
using namespace std;

int main() {
    int a,b;
    cout << "ingrese 2 numeros de 3 cifras para conocer el mayor palindromo de su producto" << endl;
    cout << "Ingrese el primer numero" << endl;
    cin >> a;
    cout << "Ingrese el segundo numero" << endl;
    cin >> b;
    while (a < 100 or a > 999 or b < 100 or b > 999) {
        cout << "Ambos numeros deben ser de 3 digitos." << endl;
        cin >> a >> b;
    }
    int max = 0;

    for (int i = 100; i <= a; i++) {
        for (int j = 100; j <= b; j++) {
            int producto = i * j;
            int original = producto;
            int invertido = 0;
            while (original > 0) {
                int digito = original % 10;
                invertido = invertido * 10 + digito;
                original /= 10;
            }
            if (producto == invertido and producto > max) {
                max = producto;
            }
        }
    }

    if (max > 0) {
        cout << "El numero palindromo mas grande obtenido es: " << max << endl;
    } else {
        cout << "No se encontro ningun palindromo en el rango dado." << endl;
    }

    return 0;
}
