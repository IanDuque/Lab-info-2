#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Ingrese un numero N para saber si es o no un palindromo" << endl;
    cin>> a;
    b = a;
    while(a > 0){
        c = c + a %10;
        c = c * 10;
        a = a/10;
    }
    if(b == c/10){
        cout<<"El numero "<<b<<" es palindromo";
    }
    else{
       cout<<"El numero "<<b<<" no es palindromo";
    }
    return 0;
}
