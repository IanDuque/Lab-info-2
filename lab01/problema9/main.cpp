#include <iostream>
using namespace std;

int main(){
    int n,c = 1,tope = 2, count = 0,num;
    do{
        cout<<"ingrese un numero para saber cual es el enesimo numero primo de dicho valor"<<endl;
        cin>>n;
    }
    while(n < 0);
    while(c != n){
        tope++;
        count = 0;
        for(int i = 2;i<=tope;i++){
            if(tope % i == 0){
                count++;
                num = tope;
            }
        }
        if (count == 1){
            c++;
        }
    }
    cout<<"El primo numero "<<n<<" es: "<<num;
    return 0;
}
