#include <iostream>
#include <random>
#include <string>
#include <cctype>
using namespace std;
//variables y matrices para llevar control de cada uno de los precios por region y ventas por estacion.
int opcion;
int cantES=3;
int preciosComb[3][3]={{15000,20000,25000},
                       {16000,19000,25000},
                       {15500,19750,23000}};

//El segundo corchete debe contener una variable para poder agregar o eliminar E/S (cantES), buscar solucion.

int total_V_ES[3][3][3]=   //matriz de E/S y el acumulado de sus ventas por combustible (norte).
                               {{{0,0,0},
                                 {0,0,0},
                                 {0,0,0}},
                                //matriz de E/S y el acumulado de sus ventas por combustible (central).
                                {{0,0,0},
                                 {0,0,0},
                                 {0,0,0}},
                                //matriz de E/S y el acumulado de sus ventas por combustible (sur).
                                {{0,0,0},
                                 {0,0,0},
                                 {0,0,0}}};

//Funcion que basandose en el tipo de combustible solicitado devuelve el precio que se encuentra en un arreglo con los respectivos valores de cada uno.
//recibe un string con el que asigna un valor al precio y lo retorna.
int tipoComb(string tcomb,int precios[][3],unsigned short int region){
    int precio;
    if (tcomb=="Regular"){
        precio=*(*(precios+region));
    }
    else if (tcomb=="Premium"){
        precio=*(*(precios+region)+1);
    }
    else if (tcomb=="EcoExtra"){
        precio=*(*(precios+region)+2);
    }
    return precio;
}
//Funcion que calcula el precio total de una venta teniendo en cuenta la cantidad de combustible, tipo y precio.
//Se apoya en otra funcion que le da el valor de el tipo de combustible solicitado para devolver el total calculado.
int venta(string tcomb, float cantidad){
    unsigned short int region;
    cout << "ingrese la region de compra" << endl;
    cin>> region;
    string aux="";
    for (int i=0; i<tcomb.length(); i++){
        aux= aux+tcomb[i];
    }
    tcomb=aux;
    int precio=tipoComb(tcomb,preciosComb,region);
        while (precio==0){
        cout << "Tipo de combustible no a la venta" << endl;
        cin>> tcomb;
        precio=tipoComb(tcomb,preciosComb,region);
    }
    float totalventa=cantidad*precio;
    return totalventa;
}
void GestionR(){
    cout << "Seleccione una opcion: " << endl;
    cout << "1.Agregar/eliminar estaciones de servicio\n" << "2.Eliminar E/S de la red nacional\n" << "3.Calcular monto total de ventas de cada E/S en el pais por tipo de combustible\n" << "4.Fijar precios para toda la red\n" << "5.Volver al meu principal" << endl;
    cin >> opcion;
    while (opcion!=5){
        switch(opcion){
        case 1:
            //AgregarES();
            break;
        case 2:
            //EliminarES();
            break;
        case 3:
            //CalcVtotales();
            break;
        case 4:
            //Fijarprecios();
            break;
        default:
            cout << "opcion invalida, ingrese otra" << endl;
            cin >> opcion;
        }
    }
}
void GestionES(){

}
void Sistfugas(){

}
void SimV(){

}
//Funcion principal que permite el acceso a las diferentes funciones definidas en el programa.
int main(){
    cout << "Bienvenido a TerMax" << endl;
    cout << "Que operacion desea realizar?" << endl;
    cout << "1.Gestion de la red\n" << "2.Gestion de estaciones de servicio\n" << "3.Acceder al sistema nacional de fugas\n" << "4.Simular una venta\n" << "0.Salir" << endl;
    cin >> opcion;
    while (opcion!=0){
        switch(opcion){
        case 1:
            GestionR();
            break;
        case 2:
            GestionES();
            break;
        case 3:
            Sistfugas();
            break;
        case 4:
            SimV();
            break;
        default:
            cout << "opcion invalida, ingrese otra" << endl;
            cin>> opcion;
        }
    }
}
