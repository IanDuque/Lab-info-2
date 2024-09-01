#include <iostream>
using namespace std;

int main()
{
    cout << "ingrese un numero para concer la cantidad de cifras que este tiene"<< endl;
    int a,b,c;
    cin >> a;
    c=a;
    if (a==0){
        cout << a << " tiene 1 cifra";
    }
    else{
        while (a!=0){
            a=a/10;
            b++;
        }
        cout << c <<" tiene " << b << " cifra(s)";
    }
    return 0;
}
