#include <iostream>
#include <math.h>
using namespace std;

int main () {
    float a,b;
    int x;
    cout << "ingrese un numero para conocer las primeras 5 potencias de este" << endl;
    cin>> a;
    x=1;
    while (x<=5){
        b=pow(a,x);
        cout << a << "∧" << x << "=" << b << endl;
        x++;
    }
    return 0;
}
