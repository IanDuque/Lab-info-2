#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    cout << "piense en un numero del 1 al 100, el programa imprimira en pantalla numeros entre dicho rango" << "si el numero seleccionado es mayor al mostrado ingrese > de lo contrario ingrese >, si el numero se muestra en pantalla ingrese =" << endl;
    int max, min, x, b;
    string a;
    a="";
    b= rand () % 101;
    min=0;
    max=100;
    while (a!="="){
        cout << b << " es mayor, menor o igual al numero pensado?" << endl;
        cin >> a;
        if (a==">"){
            if (max>b){
                max=b;
            }
        }
        else{
            if (min<b){
                min=b;
            }
        }
        while ((not (b>min and b<max)) and (a!="=")){
            b= rand() % 101;
            if (b==max and b==min+1){
                a="=";
            }
        }
        x++;
    }
    cout << "su numero ha sido adivinado despues de " << x << " intentos " << "su numero era: " << b;
    return 0;
}
