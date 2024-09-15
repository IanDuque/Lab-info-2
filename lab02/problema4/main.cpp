#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string num;
    int numc;
    cout << "ingrese una cadena de caracteres numericos para convertirla en un valor entero" << endl;
    cin >> num;
    numc= stoi(num);
    cout << "el valor retornado es: " << numc << endl;
    return 0;
}
