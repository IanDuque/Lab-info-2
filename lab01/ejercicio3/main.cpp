#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float a,b,c;
    cout << "ingrese los numeros a dividir," << " primero escriba el numerador y luego el denominador"<< endl;
    cin >> a >> b;
    c=(a/b);
    cout << "el resultado de la division entre "<< a << " y "<< b << " es " << round (c);
    return 0;
}
