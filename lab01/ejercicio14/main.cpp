#include <iostream>
using namespace std;

int main () {
    float a,b,x;
    cout << "ingrese numeros para concer el mayor de ellos, para dar el resultado ingrese el valor 0"<< endl;
    a=1;
    x=-1;
    while (a!=0){
        cin >>a;
        b=b+a;
        x++;
    }
    b=b/x;
    cout << "el promedio es: "<< b << endl;
    return 0;
}
