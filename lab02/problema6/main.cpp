#include <iostream>
using namespace std;

int main() {
    char cadena[100], original [100];

    cout << "Ingrese una cadena de texto para transformar todas sus letras en mayusculas" << endl;
    cin >> cadena;
    for (int i=0; i<100; i++){
        original[i]=cadena[i];
    }
    cout << "Original: " << cadena << endl;

    for (int i = 0; cadena[i] != '\0'; ++i) {
        if (cadena[i] >= 'a' and cadena[i] <= 'z') {
            cadena[i] = cadena[i] - ('a' - 'A');
        }
    }

    cout << "Original " << original << " En mayuscula: " << cadena << endl;

    return 0;
}
