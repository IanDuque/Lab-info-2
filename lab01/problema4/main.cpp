#include <iostream>
using namespace std;

int main() {
    int a,esp;
    cout << "Introduzca un numero impar para crear un rombo con dichas dimensiones" << endl;;
    cin >> a;
    esp= a/2;
    while (a % 2 == 0) {
        cout << "el numero ingresado debe ser impar" << endl;
        cin >> a;
    }
    for (int i = 1; i <= a; i += 2) {
        for (int j = 0; j < esp; j++) {
            cout << " ";
            }
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << endl;
        esp--;
        }
    esp = 1;
    for (int i = a - 2; i >= 1; i -= 2) {
        for (int j = 0; j < esp; j++) {
            cout << " ";
        }
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << endl;
        esp++;
    }
    return 0;
}
