#include <iostream>
using namespace std;

int main()
{
    int per[10]={0,1,2,3,4,5,6,7,8,9};
    int n;
    int aux=0;
    int cont=0;
    int i=0;
    cout << "ingrese un valor n para conocer a que permutacion lexicografica con los valores 0 a 9 corresponde" << endl;
    do{
        cout << "el valor ingresado debe ser positivo mayor de uno" << endl;
        cin >>n;
    }
    while (n<1);

    while (cont!=n){
        for (int x=8 ; x>=i ; x--){
            aux=*(per+x);
            *(per+x)=*(per+9);
            *(per+9)=aux;
            cont=cont+1;
            if (cont == n){
                    break;
            }
        }
        i++;
    }
    for (int z=0 ; z<10 ; z++){
        cout << per[z];
    }
    cout << endl;
    return 0;
}
