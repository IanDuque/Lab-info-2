#include <iostream>
using namespace std;

int main()
{
    cout << "ingrese una letra para convertirla en minuscula y viceversa"<< endl;
    char a;
    cin >> a;
    if (toupper(a)==a){
        a=tolower(a);
    }
    else{
        a=toupper(a);
    }
    cout << "letra convertida: " << a;
    return 0;
}
