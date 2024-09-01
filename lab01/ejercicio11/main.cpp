#include <iostream>
using namespace std;

int main () {
    int a,b,c,x;
    cout << "ingrese un numero entero para conocer todos sus divisores"<< endl;
    cin >> a;
    x=1;
    c=a;
    if (a<0){
        a=-1*a;
    }
    while (x<=a){
        b=a%x;
        if (b==0){
            if (c<0){
                cout << "-" << x << endl;
            }
            cout << x << endl;
        }
        x++;
    }
    return 0;
}
