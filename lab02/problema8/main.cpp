#include<iostream>
using namespace std;

int main() {
    char num[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    string a, numero = "", pal = "";

    cout << "ingrese letras y numeros mezclados para separarlos" << endl;
    cin >> a;

    bool ban = false;

    for(int i = 0; i < a.size(); i++) {
        ban = false;
        for(int c = 0; c < sizeof(num)/sizeof(num[0]); c++) {
            if(a[i] == num[c]) {
                ban = true;
                break;
            }
        }
        if(ban == true) {
            numero += a[i];
        } else {
            pal += a[i];
        }
    }

    cout << "Letras: " << pal << endl;
    cout << "Numeros: " << numero << endl;
    return 0;
}
