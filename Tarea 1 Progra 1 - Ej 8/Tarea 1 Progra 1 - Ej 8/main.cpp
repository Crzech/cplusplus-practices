//
//  main.cpp
//  Tarea 1 Progra 1 - Ej 8
//
//  Created by Christian Pernillo on 2/7/19.
//  Copyright © 2019 Christian Pernillo. All rights reserved.
//

#include <iostream>
using namespace std;

int sumaAnteriores(int a, int b, int c);
int main(int argc, const char * argv[]) {
    int a, b, c, resp;
    cout << "Ingrese numero 1" << endl;
    cin >> a;
    cout << "Ingrese numero 2" << endl;
    cin >> b;
    cout << "Ingrese numero 3" << endl;
    cin >> c;
    resp = sumaAnteriores(a, b, c);
    if(resp == 1){
        cout << "El tercer numero corresponde a la suma de los 2 anteriores" << endl;
    } else {
        cout << "El tercer numero no corresponde a la suma de los 2 anteriores" << endl;
    }
    return 0;
}
int sumaAnteriores(int a, int b, int c) {
    int resp = 0;
    if((a+b) == c){
        resp = 1;
    }
    return resp;
}
