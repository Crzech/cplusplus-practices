//
//  main.cpp
//  Tarea 2 - Progra 1 - Ejercicio 4
//
//  Created by Christian Pernillo on 2/14/19.
//  Copyright © 2019 Christian Pernillo. All rights reserved.
//

#include <iostream>
using namespace std;
void sigma();
int main(int argc, const char * argv[]) {
    sigma();
    return 0;
}
void sigma(){
    int n = 0;
    float result = 0;
    cout << "Ingrese el valor de n:" << endl;
    cin >> n;
    for(float i = 1 ; i <= n ; i++){
        result += (1/(i * (i+2)));
    }
    cout << "El resultado es:" << endl;
    cout << result;
}
