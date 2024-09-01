#include <iostream>
using namespace std;

int main () {
    float a,b;
    cout << "ingrese numeros para concer la sumatoria total de ellos, para dar el resultado ingrese el valor 0"<< endl;
    a=1;
    while (a!=0){
        cin >>a;
        b=b+a;
    }
    cout << "el resultado de la sumatoria es: "<< b << endl;
    return 0;
}
