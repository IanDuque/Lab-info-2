#include <iostream>
using namespace std;

int main(){
    float a,c,d;
    double b;
    int x;
    cout << "ingrese el numero de elementos a usar en la aproximacion de pi (mas terminos resultan en una aproximacion mas acertada)" << endl;
    cin >> a;
    x=1;
    c=-1;
    d=1;
    while (x<=a){
        b=b-c/d;
        d=d+2;
        c=-c;
        x++;
    }
    cout << "pi es aproximadamente " << 4*b;
    return 0;
}
