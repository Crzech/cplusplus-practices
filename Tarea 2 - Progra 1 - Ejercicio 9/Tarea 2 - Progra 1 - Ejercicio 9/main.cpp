//
//  main.cpp
//  Tarea 2 - Progra 1 - Ejercicio 9
//
//  Created by Christian Pernillo on 2/14/19.
//  Copyright © 2019 Christian Pernillo. All rights reserved.
//

#include <iostream>
using namespace std;
void marcador();
int main(int argc, const char * argv[]) {
    marcador();
    return 0;
}
void marcador () {
    char equipo1[50], equipo2[50];
    int puntaje1 =0, puntaje2=0;
    cout << "Ingrese nombre del primer equipo:" << endl;
    cin >> equipo1;
    cout << "Ingrese el puntaje de " << equipo1 << endl;
    cin >> puntaje1;
    cout << "Ingrese nombre del segundo equipo:" << endl;
    cin >> equipo2;
    cout << "Ingrese el puntaje de " << equipo2 << endl;
    cin >> puntaje2;
    if(puntaje1 > puntaje2) {
        cout << "Los ganadores son:" << endl;
        cout << equipo1;
    } else if(puntaje2 > puntaje1){
        cout << "Los ganadores son:" << endl;
        cout << equipo2;
    } else {
        cout << "El partido termino en empate";
    }
    
}
