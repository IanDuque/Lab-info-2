#include <iostream>
using namespace std;

int main() {
    int per[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n, count = 1;

    cout << "Ingrese un valor n para conocer la enesima permutacion lexicografica con los numeros del 0 al 9 ";

    do {
        cout << "El valor debe ser positivo y mayor que uno: ";
        cin >> n;
    } while (n < 1);

    while (count < n) {
        int i = 8;
        while (i >= 0 and per[i] >= per[i + 1]) {
            i--;
        }

        if (i == -1) {
            break;
        }

        int j = 9;
        while (per[j] <= per[i]) {
            j--;
        }

        int temp = per[i];
        per[i] = per[j];
        per[j] = temp;

        int left = i + 1, right = 9;
        while (left < right) {
            temp = per[left];
            per[left] = per[right];
            per[right] = temp;
            left++;
            right--;
        }

        count++;
    }

    cout << "La permutacion numero " << n << " es: " << endl;
    for (int i = 0; i < 10; i++) {
        cout << per[i];
    }
    cout << endl;

    return 0;
}
