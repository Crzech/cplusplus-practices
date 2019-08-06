//
//  main.cpp
//  Tarea 1 - Progra 1 ej 2
//
//  Created by Christian Pernillo on 2/7/19.
//  Copyright © 2019 Christian Pernillo. All rights reserved.
//

#include <iostream>

using namespace std;


int main(int argc, const char * argv[]) {
    // insert code here...
    int a, b, c;
    cout << "Ingrese lado a del triangulo" << endl;
    cin >> a;
    cout << "Ingrese lado b del triangulo" << endl;
    cin >> b;
    cout << "Ingrese lado c del triangulo" << endl;
    cin >> c;
    
    if(a==b && b==c)
        cout << "Triangulo Equilatero";
    else if(a==b || a==c || b==c)
        cout << "Triangolo isoceles";
    else
        cout << "Triangulo escaleno";
    
    return 0;
}
