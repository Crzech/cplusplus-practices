//
//  main.cpp
//  Tarea 2 - Progra 1 - Ejercicio 1
//
//  Created by Christian Pernillo on 2/13/19.
//  Copyright © 2019 Christian Pernillo. All rights reserved.
//

#include <iostream>

using namespace std;
void calculoBilletes();
int main() {
    calculoBilletes();
    return 0;
}
void calculoBilletes(){
    int cantidad = 0, bcien = 0, bcincuenta = 0, bveinte =0, bdiez =0, bcinco =0, bquet =0;
    cout << "Ingrese cantidad en quetzales" << endl;
    cin >> cantidad;
    if ((cantidad % 100) >= 0) {
        bcien = (int)cantidad / 100;
        cantidad = cantidad - (bcien * 100);
    }
    if((cantidad % 50) >= 0){
        bcincuenta = (int)cantidad / 50;
        cantidad = cantidad - (bcincuenta * 50);
    }
    if((cantidad % 20) >= 0){
        bveinte = (int)cantidad / 20;
        cantidad = cantidad - (bveinte * 20);
    }
    if((cantidad % 10) >= 0) {
        bdiez = (int)cantidad / 10;
        cantidad = cantidad - (bdiez * 10);
    }
    if((cantidad % 5) >= 0) {
        bcinco = (int)cantidad / 5;
        cantidad = cantidad - (bcinco * 5);
    }
    bquet = cantidad;
    cout << "La cantidad puede tener:" << endl;
    cout << bcien << " Billetes de 100" << endl;
    cout << bcincuenta << " Billetes de 50" << endl;
    cout << bveinte << " Billetes de 20" << endl;
    cout << bdiez << " Billetes de 10" << endl;
    cout << bcinco << " Billetes de 5" << endl;
    cout << cantidad << " Billetes de Quetzal" << endl;

}
