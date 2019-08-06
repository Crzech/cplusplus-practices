//
//  main.cpp
//  Tarea 2 - Progra 1 - Ejercicio 5
//
//  Created by Christian Pernillo on 2/14/19.
//  Copyright © 2019 Christian Pernillo. All rights reserved.
//

#include <iostream>
#include <math.h>

using namespace std;
void formula();
int main(int argc, const char * argv[]) {
    formula();
    return 0;
}
void formula(){
    float p =0, r = 0, n = 0, result = 0;
    cout << "Ingrese valor de P:" << endl;
    cin >> p;
    cout << "Ingrese valor de n:" << endl;
    cin >> n;
    cout << "Ingrese valor de r:" << endl;
    cin >> r;
    result = p * ((r*pow((1+r),n))/pow((1+r), n) - 1);
    cout << "El resultado es:" << endl;
    cout << result;
}
