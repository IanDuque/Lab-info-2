#include <iostream>
using namespace std;

int main(){
    int a, b,c,m1,aux,h1,m2,h2,i,h,m;
    cout << "ingrese 2 horas en formato 24 horas para conocer el resultante de la suma de ambas (sin incluir :)" << endl;
    do{
        m1 = 0;
        i = 1;
        h1 = 0;
        cout<<"Ingrese un numero A en formato 24 horas"<<endl;
        cin>>a;
        c = a;
        while(i!=4){
            aux = c % 10;
            c = c / 10;
            if(i == 1){
                m1 = (c % 10)* 10 + aux;
            }
            else if(i != 1){
                h1 = (c % 10)* 10 + aux;
            }

            i++;
        }
        if(h1 >= 24 || m1 > 59|| a < 0 ){
            cout<<"Hora invalida"<<endl;
        }
    }
    while(h1 >= 24 || m1 > 59 || a < 0);

    do{
        i = 1;
        m2 = 0;
        h2 = 0;
        cout<<"Ingrese un numero B en formato 24 horas"<<endl;
        cin>> b;
        c = b;
        while(i!=4){
            aux = c % 10;
            c = c / 10;
            if(i == 1){
                m2 = (c % 10)* 10 + aux;
            }
            else if(i != 1){
                h2 = (c % 10)* 10 + aux;
            }

            i++;
        }
        if(m2 > 59 || h2 > 24|| b < 0 ){
            cout<<"Hora invalida"<<endl;
        }
    }
    while(h2 >= 24 || m2 > 59 || b < 0 );
    h = h1 + h2;
    if (h > 23){
        h -= 24;
    }
    m = m1 + m2;
    if(m >= 60){
        m -= 60;
        h += 1;
    }
    if(m == 0){
        h *= 10;
    }
    if(h == 0){
        cout<<"La hora es: 0"<<h<<m;
    }
    else{
        cout<<"La hora es: "<<h<<m;
    }
    return 0;
}
