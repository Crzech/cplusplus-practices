//
//  main.cpp
//  Tarea 1 Progra 1 - Ej 10
//
//  Created by Christian Pernillo on 2/7/19.
//  Copyright © 2019 Christian Pernillo. All rights reserved.
//

#include <iostream>
using namespace std;
float factorial(float numero);
int main(int argc, const char * argv[]) {
    float n, r, result;
    cout << "Ingrese n:" << endl;
    cin >> n;
    cout << "Ingrese n:" << endl;
    cin >> r;
    result = factorial(n) / (factorial(r) * factorial((n-r)));
    cout << "El resultado es: " << result;
    return 0;
}
float factorial(float numero){
    long factorial = 1;
    
    for(int i = 1; i <=numero; ++i)
    {
        factorial *= i;
    }
    return factorial;
}
