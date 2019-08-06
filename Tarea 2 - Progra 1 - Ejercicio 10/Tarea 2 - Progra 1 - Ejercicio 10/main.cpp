//
//  main.cpp
//  Tarea 2 - Progra 1 - Ejercicio 10
//
//  Created by Christian Pernillo on 2/14/19.
//  Copyright © 2019 Christian Pernillo. All rights reserved.
//

#include <iostream>
using namespace std;
void tablas();
int main(int argc, const char * argv[]) {
    tablas();
    return 0;
}
void tablas() {
    for(int i = 1; i <= 10; i++){
        for(int i2 = 1; i2 <= 10; i2++){
            cout << i <<" X " << i2 << " = " << i*i2 << endl;
        }
    }
}
