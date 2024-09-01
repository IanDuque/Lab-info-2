#include <iostream>
using namespace std;
int main(){
    float a,b,x;
    cout << "ingrese el valor del radio de la circunferencia para calcular su perimetro y area"<< endl;
    cin >> a;
    b= (2*a*3.1416);
    x= (3.1416*a*a);
    cout << "el perimetro de la circunferencia con radio "<< a << " es igual a "<< b << endl;
    cout << "el area de la circunferencia con radio " << a << " es igual a "<< x;
    return 0;
}
