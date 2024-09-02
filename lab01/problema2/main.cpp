#include <iostream>
using namespace std;

int main(){
    int mes,dia;
    cout << "ingrese un numero de mes y dia para conocer si dicha combinacion es valida"<< endl;
    cin >> mes >> dia;
    while (mes <=0 or dia <=0){
        cout << "el mes y dia ingresados deben ser positivos" << endl;
    }
    if (mes>12){
        cout << mes << " es un mes invalido" << endl;
        cin >> mes;
    }
    if (dia>31){
        cout << dia << " es un dia invalido" << endl;
        cin >> dia;
    }
    if (mes==1){
        if (dia>31){
            cout << dia << "/" << mes << " es una fecha invalida" << endl;
        }
        else{
            cout << dia << "/" << mes << " es una fecha valida" << endl;
        }
    }
    if (mes==2){
        if (dia>29){
            cout << dia << "/" << mes << " es una fecha invalida" << endl;
        }
        else if (dia == 29){
            cout << dia << "/" << mes << " es una fecha valida en bisiesto" << endl;
        }
        else{
            cout << dia << "/" << mes << " es una fecha valida" << endl;
        }
    }
    if (mes==3){
        if (dia>31){
            cout << dia << "/" << mes << " es una fecha invalida" << endl;
        }
        else{
            cout << dia << "/" << mes << " es una fecha valida" << endl;
        }
    }
    if (mes==4){
        if (dia>30){
            cout << dia << "/" << mes << " es una fecha invalida" << endl;
        }
        else{
            cout << dia << "/" << mes << " es una fecha valida" << endl;
        }
    }
    if (mes==5){
        if (dia>31){
            cout << dia << "/" << mes << " es una fecha invalida" << endl;
        }
        else{
            cout << dia << "/" << mes << " es una fecha valida" << endl;
        }
    }
    if (mes==6){
        if (dia>30){
            cout << dia << "/" << mes << " es una fecha invalida" << endl;
        }
        else{
            cout << dia << "/" << mes << " es una fecha valida" << endl;
        }
    }
    if (mes==7){
        if (dia>31){
            cout << dia << "/" << mes << " es una fecha invalida" << endl;
        }
        else{
            cout << dia << "/" << mes << " es una fecha valida" << endl;
        }
    }
    if (mes==8){
        if (dia>31){
            cout << dia << "/" << mes << " es una fecha invalida" << endl;
        }
        else{
            cout << dia << "/" << mes << " es una fecha valida" << endl;
        }
    }
    if (mes==9){
        if (dia>30){
            cout << dia << "/" << mes << " es una fecha invalida" << endl;
        }
        else{
            cout << dia << "/" << mes << " es una fecha valida" << endl;
        }
    }
    if (mes==10){
        if (dia>31){
            cout << dia << "/" << mes << " es una fecha invalida" << endl;
        }
        else{
            cout << dia << "/" << mes << " es una fecha valida" << endl;
        }
    }
    if (mes==11){
        if (dia>30){
            cout << dia << "/" << mes << " es una fecha invalida" << endl;
        }
        else{
            cout << dia << "/" << mes << " es una fecha valida" << endl;
        }
    }
    if (mes==12){
        if (dia>31){
            cout << dia << "/" << mes << " es una fecha invalida" << endl;
        }
        else{
            cout << dia << "/" << mes << " es una fecha valida" << endl;
        }
    }
    return 0;
}
