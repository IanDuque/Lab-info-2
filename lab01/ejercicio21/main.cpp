#include <iostream>
using namespace std;

int main()
{
    cout << "ingrese 2 numeros para conocer el minimo comun multiplo de ellos" << endl;
    int a,b,c;
    cin >> a >>b;
    if (a<b){
        c=b;
    }
    else {
        c=a;
    }
    if (a!=0 and b!=0){
        while (not (c%a==0 and c%b==0))
            c++;
        cout << "el MCM de " << a << " y " << b << " es " << c;
    }
    else{
        cout << "no existe un MCM si algun valor es 0";
    }
    return 0;
}
