#include <iostream>
using namespace std;

int main()
{
    cout << "ingrese un numero entero para generar un cuadrado con esas medidas"<< endl;
    int a,x,z;
    string b,c;
    cin >> a;
    c="+";
    x=1;
    while (x<a){
        c=c+"+";
        x++;
    }
    b="";
    x=1;
    while (x<a-1){
        b=b+"+";
        z=0;
        while (z<a-2){
            b=b+" ";
            z++;
        }
        b=b+"+\n";
        x++;
    }
    cout << c << endl << b << c;
    return 0;
}
