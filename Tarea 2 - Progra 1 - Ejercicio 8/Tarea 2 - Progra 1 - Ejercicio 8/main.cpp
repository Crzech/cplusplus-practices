//
//  main.cpp
//  Tarea 2 - Progra 1 - Ejercicio 8
//
//  Created by Christian Pernillo on 2/14/19.
//  Copyright © 2019 Christian Pernillo. All rights reserved.
//

#include <iostream>
using namespace std;
void menuPrincipal();
void anio();
void trinomio();
int main(int argc, const char * argv[]) {
    menuPrincipal();
    return 0;
}
void menuPrincipal() {
    int opcion = 0;
    cout << "Ingrese la opcion que desea visualizar: "<< endl;
    cout << "1. Anio bisiesto de un anio ingresado"<< endl;
    cout << "2. Trinomio cuadrado perfecto de (x+4)2"<< endl;
    cout << "3. Salir"<< endl;
    cin >> opcion;
    switch (opcion) {
        case 1:
            anio();
            menuPrincipal();
            break;
        case 2:
            trinomio();
            menuPrincipal();
            break;
        case 3:
            exit(0);
            break;
        default:
            cout << "No ha ingresado una opcion valida"<< endl;
            menuPrincipal();
            break;
    }
}
void anio() {
    int a;
    cout << "Ingrese el anio que desea saber si es bisiesto: " <<endl;
    cin >> a;
    if(a % 4 == 0 && (a % 100 != 0 || a % 400 == 0)){
        cout<<"El anio "<<a<<" Si es bisiesto ";
    }else{
        cout<<"El anio "<<a<<" No es bisiesto ";
    }
}
void trinomio() {
    cout << "x^2 + 8x + 16" << endl;
}
