//
//  main.cpp
//  Tarea 2 Progra 1 Ejercicio 7
//
//  Created by Christian Pernillo on 2/14/19.
//  Copyright © 2019 Christian Pernillo. All rights reserved.
//

#include <iostream>
using namespace std;
void ingresaNumero();
int main(int argc, const char * argv[]) {
    ingresaNumero();
    return 0;
}
void ingresaNumero() {
    int numero =0,  suma = 0, cont = 0;
    cout << "Ingrese un numero mayor a 1" << endl;
    cin >> numero;
    for(int i =1; i <= numero ; i++){
        if((i % 2) == 0){
            suma += i;
            cont++;
        }
    }
    cout << "La suma de numeros impares es:" << endl;
    cout << suma << endl;
    cout << "Encontramos " << cont << " numeros impares" << endl;

    
}
