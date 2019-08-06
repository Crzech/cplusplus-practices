//
//  main.cpp
//  Tarea 1 Progra 1 - Ej 4
//
//  Created by Christian Pernillo on 2/7/19.
//  Copyright © 2019 Christian Pernillo. All rights reserved.
//

#include <iostream>

using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    float nota1, nota2, nota3, nota4, prom;
    cout << "Ingrese la nota 1" << endl;
    cin >> nota1;
    cout << "Ingrese la nota 2" << endl;
    cin >> nota2;
    cout << "Ingrese la nota 3" << endl;
    cin >> nota3;
    cout << "Ingrese la nota 4" << endl;
    cin >> nota4;
    prom = (nota1 + nota2 + nota3 + nota4) / 4;
    if(prom < 61){
        cout << "El estudiante ha reprobado el curso" << endl;
    } else {
        cout << "El estudiante ha aprobado el curso" << endl;
    }
    return 0;
}
