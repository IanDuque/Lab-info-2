#include <iostream>
using namespace std;

int main()
{
    int a,bc = 0,bv = 0,bd = 0,bcin = 0,bdos = 0,bmil = 0,mq = 0,md = 0,mc = 0,mcin = 0;
    cout << "ingrese un valor para conocer la cantidad de cada billete necesaria para sumar dicho monto" << endl;
    cin >>a;
    while (a<0){
        cout << "el valor ingresado debe ser positivo" << endl;
        cin >> a;
    }
    if (a >= 50000){
        bc = a / 50000;
        a %= 50000;
    }
    if (a >= 20000){
        bv = a / 20000;
        a =  a % 20000;
    }
    if (a >= 10000){
        bd = a / 10000;
        a %= 10000;
    }
    if (a >= 5000){
        bcin = a / 5000;
        a %= 5000;
    }
    if (a >= 2000){
        bdos = a / 2000;
        a %= 2000;
    }
    if (a >= 1000){
        bmil = a / 1000;
        a %= 1000;
    }
    if (a >= 500){
        mq = a / 500;
        a %= 500;
    }
    if (a >= 200){
        md = a / 200;
        a %= 200;
    }
    if (a >= 100){
        mc = a / 100;
        a %= 100;
    }
    if (a >= 50){
        mcin = a / 50;
        a %= 50;
    }
    cout<<"Billetes de $50000: "<<bc<<endl;
    cout<<"Billetes de $20000: "<<bv<<endl;
    cout<<"Billetes de $10000: "<<bd<<endl;
    cout<<"Billetes de $5000: "<<bcin<<endl;
    cout<<"Billetes de $2000:"<<bdos<<endl;
    cout<<"Billetes de $1000: "<<bmil<<endl;
    cout<<"Monedas de $500: "<<mq<<endl;
    cout<<"Monedas de $200: "<<md<<endl;
    cout<<"Monedas de $100: "<<mc<<endl;
    cout<<"Monedas de $50: "<<mcin<<endl;
    cout<<"Faltante: $"<<a<<endl;
    return 0;
}
