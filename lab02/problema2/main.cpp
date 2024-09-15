#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    char arreglo[200];
    int letras[26] = {0};

    for (int i = 0; i < 200; ++i) {
        arreglo[i] = 'A' + (rand() % 26);
        letras[arreglo[i] - 'A']++;
    }

    for (int i = 0; i < 200; ++i) {
        cout << arreglo[i];
    }
    cout << endl;
    for (int i = 0; i < 26; ++i) {
        if (letras[i] > 0) {

            char letra = 'A' + i;
            cout << letra << ": " << letras[i] << endl;
        }
    }
    return 0;
}
