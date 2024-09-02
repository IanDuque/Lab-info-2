#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a,b,c;
    cout << "ingrese un numero para conocer la suma de los digitos elevados a si mismos" << endl;
    cin >> a;
    while (a!=0){
        b=a%10;
        c=c+ pow(b,b);
        a=a/10;
    }
    cout << "el resultado de la suma es: " << c;
    return 0;
}
