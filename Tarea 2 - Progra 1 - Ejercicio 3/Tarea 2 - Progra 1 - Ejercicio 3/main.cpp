//
//  main.cpp
//  Tarea 2 - Progra 1 - Ejercicio 3
//
//  Created by Christian Pernillo on 2/14/19.
//  Copyright © 2019 Christian Pernillo. All rights reserved.
//

#include <iostream>

using namespace std;
void calculaSueldo();
int main(int argc, const char * argv[]) {
    calculaSueldo();
    return 0;
}
void calculaSueldo() {
    char nombre[35];
    int nohoras = 0;
    float preciohoras = 0,suma =0, precioohoras=0, discount = 0, preciohorasextra = 0;
    cout << "Ingrese el nombre del trabajador:" << endl;
    cin >> nombre;
    cout << "Ingrese las horas trabajadas este dia:" << endl;
    cin >> nohoras;
    cout << "Ingrese el pago por hora:" << endl;
    cin >> preciohoras;
    cout << "Su salario diario esta compuesto de la siguiente manera:" << endl;
    if(nohoras >= 8){
        discount = nohoras - 8;
        precioohoras = (8 * preciohoras);
        preciohorasextra = discount * (preciohoras * 1.5);
        suma = precioohoras + preciohorasextra;
        cout << "Q " << precioohoras << " por 8 horas trabajadas" << endl;
        cout << "Q " << preciohorasextra << " por " << discount <<" horas extras trabajadas" << endl;
    } else {
        suma = (nohoras * preciohoras);
        cout << "Q " << suma << " por " << nohoras <<" horas trabajadas" << endl;
    }
}
