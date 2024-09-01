#include <iostream>
using namespace std;
int main(){
    float a,b,x;
    cout << "ingrese un numero para conocer todos sus multiplos entre 1 y 100"<< endl;
    cin >> a;
    b=0;
    x=1;
    if (a<=100){
        cout << "los multiplos de "<< a << " entre 1 y 100 son: "<< endl;
        while (b<=100){
            b=a*x;
            x++;
            if (b<=100){
                cout << b << endl;
            }
        }
    }
    else{
        cout << a << "no tiene multiplos entre 1 y 100";
    }
    return 0;
}
