#include <iostream>
using namespace std;
int main(){
    int a,b,x;
    cout << "ingrese un numero para conocer la suma de todos los anteriores a el"<< endl;
    cin>>a;
    x=1;
    b=0;
    while (x<=a){
        b=b+x;
        x++;
    }
    cout<< "la sumatoria de todos los numeros anteriores a "<< a << " es igual a "<< b;
    return 0;
}
