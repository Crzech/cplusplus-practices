//
//  main.cpp
//  Tarea 1 Progra 1 - Ej 3
//
//  Created by Christian Pernillo on 2/7/19.
//  Copyright © 2019 Christian Pernillo. All rights reserved.
//

#include <iostream>

using namespace std;
int main(int argc, const char * argv[]) {
    int n;
    long factorial = 1;
    
    cout << "Ingrese un numero entero positivo: ";
    cin >> n;
    
    for(int i = 1; i <=n; ++i)
    {
        factorial *= i;
    }
    
    cout << "El factorial del numero " << n << " = " << factorial;
    return 0;
}
