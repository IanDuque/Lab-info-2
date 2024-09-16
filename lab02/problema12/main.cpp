#include <iostream>
using namespace std;

int main() {
    int n=3;
    int matrix[3][3]={};
    cout << "Ingrese los elementos de la matriz: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    int sumFila, sumColumna, sumDiagonalPrincipal = 0, sumDiagonalSecundaria = 0;
    int sumaReferencia;
    bool esMagica = true;

    sumaReferencia = 0;
    for (int j = 0; j < n; j++) {
        sumaReferencia += matrix[0][j];
    }

    for (int i = 0; i < n; i++) {
        sumFila = 0;
        sumColumna = 0;
        for (int j = 0; j < n; j++) {
            sumFila += matrix[i][j];
            sumColumna += matrix[j][i];
        }

        if (sumFila != sumaReferencia || sumColumna != sumaReferencia) {
            esMagica = false;
        }
        sumDiagonalPrincipal += matrix[i][i];
        sumDiagonalSecundaria += matrix[i][n - i - 1];
    }

    if (sumDiagonalPrincipal != sumaReferencia || sumDiagonalSecundaria != sumaReferencia) {
        esMagica = false;
    }

    if (esMagica) {
        cout << "Todas las filas, columnas y diagonales suman lo mismo: " << sumaReferencia << endl;
    } else {
        cout << "Las filas, columnas o diagonales no suman lo mismo." << endl;
    }

    for (int i = 0; i < n; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}
