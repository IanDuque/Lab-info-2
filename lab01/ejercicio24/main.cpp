#include <iostream>
using namespace std;

int main(){
    cout<<"Ingrese 3 medidas de lados de un triangulo para conocer su tipo o si no es triangulo" << endl;
    int a,b,c;
    cout<<"Ingrese un lado a"<<endl;
    cin>>a;
    cout<<"Ingrese un lado b"<<endl;
    cin>>b;
    cout<<"Ingrese un lado c"<<endl;
    cin>>c;

    if(a + b > c & a - b < c){
        if(a == b & a == c){
            cout<<"Se forma un triangulo equilatero";
        }
        else if(a == b or a == c or b == c){
            cout<<"Se forma un triangulo isosceles";
        }
        else if(a != b & a != c & b != c){
            cout<<"Se forma un triangulo escaleno";
        }
    }
    else{
        cout<<"No se forma ningun triangulo";
    }
    return 0;
}
