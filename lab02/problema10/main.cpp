#include <iostream>
using namespace std;

int main() {
    string numeror = "";
    char roman[7] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
    int r[7] = {1, 5, 10, 50, 100, 500, 1000};
    int* tr = r;
    int val = 0, val2 = 0, num = 0;
    char* ptr = roman;

    cout << "ingrese un numero en romano para pasarlo a su forma arabiga" << endl;
    cin >> numeror;
    for (int i = 0; i < numeror.size(); i++) {
        for (int c = 0; c < 7; c++) {
            if (*(ptr + c) == numeror[i]) {
                val = *(tr + c);
                break;
            }
        }
        if (i + 1 < numeror.size()) {
            for (int p = 0; p < 7; p++) {
                if (*(ptr + p) == numeror[i + 1]) {
                    val2 = *(tr + p);
                    break;
                }
            }
        } else {
            val2 = 0;
        }

        if (val2 <= val) {
            num += val;
        } else {
            num += (val2 - val);
            i++;
        }
    }

    cout << "el numero ingresado fue: " << numeror << endl;
    cout << "que corresponde a: " << num <<endl;
    return 0;
}
