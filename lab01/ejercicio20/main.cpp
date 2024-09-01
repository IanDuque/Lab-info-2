#include <iostream>
using namespace std;

int main()
{
    cout << "ingrese una cantidad entera de segundos para conocerlo en formato hh:mm:ss"<< endl;
    int a,b,c;
    cin >> a;
    if (a>=60){
        b=a/60;
        a=a%60;
        if (b>=60){
            c=b/60;
            b=b%60;
        }
    }
    cout << c << ":" << b << ":" << a;
    return 0;
}
