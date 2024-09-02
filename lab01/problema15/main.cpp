#include <iostream>
using namespace std;

int main()
{
    int a,b,x,max,sem;
    cout << "ingrese un numero para conocer que numero menor que el genera la serie mas larga (siguiendo la serie de collatz)" << endl;
    cin >> a;
    while (a<0){
        cout << "el numero debe ser positivo" << endl;
        cin >>a;
    }
    sem=a;
    b=a;
    max=0;
    while (b>0){
        if (b!=1){
            cout << "para la semilla " << b << ": ";
        }
        x=0;
        a=b;
        while (a!=1){
            if (a%2==0){
                a=a/2;
            }
            else {
                a= 3*a+1;
            }
            if (a!=1){
                cout << a << ", ";
            }
            else {
                cout << a << endl;
            }
            x++;
        }
        if (x>max){
            sem=b;
            max=x;
        }
        b--;
    }
    cout << "la serie mas larga es con la semilla: " << sem << " , teniendo " << max << " digitos";
    return 0;
}
