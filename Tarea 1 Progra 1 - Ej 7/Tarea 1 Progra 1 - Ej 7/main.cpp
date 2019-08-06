//
//  main.cpp
//  Tarea 1 Progra 1 - Ej 7
//
//  Created by Christian Pernillo on 2/7/19.
//  Copyright © 2019 Christian Pernillo. All rights reserved.
//

#include <iostream>
using namespace std;
void diaSemana(int numero_dia);
int main(int argc, const char * argv[]) {
    int numero_semana;
    cout << "Ingrese el numero de la semana" << endl;
    cin >> numero_semana;
    diaSemana(numero_semana);
    return 0;
}
void diaSemana(int numero_dia) {
    switch (numero_dia) {
        case 1:
            cout << "Lunes" << endl;
            break;
        case 2:
            cout << "Martes" << endl;
            break;
        case 3:
            cout << "Miercoles" << endl;
            break;
        case 4:
            cout << "Jueves" << endl;
            break;
        case 5:
            cout << "Viernes" << endl;
            break;
        case 6:
            cout << "Sabado" << endl;
            break;
        case 7:
            cout << "Domingo" << endl;
            break;
            
        default:
            cout << "Numero invalido" << endl;
            break;
    }
}

