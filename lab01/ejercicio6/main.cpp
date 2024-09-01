#include <iostream>
using namespace std;
int main(){
    int a,b,x;
    cout << "ingrese un numero para mostrar su factorial "<< endl;
    cin>>a;
    x=1;
    b=1;
    while (x<=a){
        b=b*x;
        x++;
    }
    cout<< "el factorial del numero "<< a << " es igual a "<< b;
    return 0;
}
