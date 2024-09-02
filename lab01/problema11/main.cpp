#include <iostream>
using namespace std;

int main(){
    int a,b,factor = 0;
    cout << "ingrese un numero para conocer el mayor factor primo de este" << endl;
    do{
        cout<<"Ingrese un numero "<<endl;
        cin>>a;
        if(a<=0){
            cout<<endl<<"Numero invalido"<<endl;
        }
    }
    while(a<=0);
    b=a;
    for(int i = 2; a > 1; i++){
        while(a % i == 0){
            a/=i;
            if(factor<i){
                factor = i;
            }
        }
    }
    cout<<"el mayor factor primo de " << b << " es: "<<factor;
    return 0;
}
