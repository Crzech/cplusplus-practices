//
//  main.cpp
//  Tarea 2 - Progra 1 - Ejercicio 2
//
//  Created by Christian Pernillo on 2/13/19.
//  Copyright © 2019 Christian Pernillo. All rights reserved.
//

#include <iostream>

using namespace std;
void calculaCategoria();
int main(int argc, const char * argv[]) {
    calculaCategoria();
    return 0;
}
void calculaCategoria() {
    int edad =0;
    cout << "Ingrese su edad: " << endl;
    cin >> edad;
    if(edad <= 5) {
        cout << "Usted es un bebe" << endl;
    } else if(edad >= 6 && edad <= 12) {
        cout << "Usted es un ninio" << endl;
    } else if(edad >= 13 && edad <= 17) {
        cout << "Usted es un adolescente" << endl;
    } else if(edad >= 18 && edad <= 50){
        cout << "Usted es un adulto" << endl;
    } else if(edad >= 51){
        cout << "Usted es un anciano" << endl;
    }
}
