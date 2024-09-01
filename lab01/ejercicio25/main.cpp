#include <iostream>
using namespace std;

int main(){
    float a,b,c;
    string d;
    cout << "ingrese un numero, un operando (+,-,*,/) y otro numero para conocer el resultado" << endl;
    cin >> a;
    cin >> d;
    while (d!="+" and d!= "-" and d!= "/" and d!= "*"){
        cout << "ingrese un operador valido" << endl;
        cin >> d;
    }
    cin >> b;
    if (d=="+"){
        c=a+b;
    }
    else if (d=="-"){
        c=a-b;
    }
    else if (d=="/"){
        c=a/b;
    }
    else if (d=="*"){
        c=a*b;
    }
    cout << a << d << b << " = " << c;
    return 0;
}
