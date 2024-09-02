#include <iostream>
using namespace std;

int main(){
    int a,b,c,am = 0,bm = 0,i = 1,sum = 0;
    int x,z,w,comun;
    x=1;
    z=1;
    cout << "ingrese 3 valores para conocer cual es la sumatoria de los multiplos de los primeros 2 menores que el tercero" << endl;
    do{
        cout<<"Ingrese un numero A:"<<endl;
        cin>>a;
        cout<<"Ingrese un numero B:"<<endl;
        cin>>b;
        cout<<"Ingrese un numero C:"<<endl;
        cin>>c;
        if(a < 0 or b < 0 or c < 0){
            cout<<"Ingrese numeros positivos";
        }
    }
    while(a < 0 or b < 0 or c < 0);
    while(am < c ){
        am = i * a;
        if(i != 1){
            cout<<" + ";
        }
        if(am < c){
            sum += am;
            cout<<am;
        }
        i++;
    }
    i = 1;
    w=0;
    while(bm < c ){
        bm = i * b;
        am = i * a;
        if(am != bm & bm < c){
            if(i != 1){
                if (w==0){
                    cout<<" + ";
                }
            }
            while (a*x<c){
                comun=a*x;
                z=1;
                while (b*z<c){
                    if (b*z==comun){
                        sum -=b*z;
                    }
                    z++;
                }
                x++;
            }
            sum+=bm;
            if (bm != comun){
                cout << bm;
            }
        }
        if (bm==comun-b){
            w=1;
        }
        i++;
    }
    cout<<" = "<<sum;
    return 0;
}
