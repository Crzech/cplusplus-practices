//
//  main.cpp
//  Tarea 2 - Progra 1 - Ejercicio 6
//
//  Created by Christian Pernillo on 2/14/19.
//  Copyright © 2019 Christian Pernillo. All rights reserved.
//

#include <iostream>
using namespace std;
void fibonacci();
int main(int argc, const char * argv[]) {
    fibonacci();
    return 0;
}
void fibonacci() {
    int n, t1 = 0, t2 = 1, nextTerm = 0;
    
    cout << "Ingrese el numero de terminos: ";
    cin >> n;
    
    cout << "Serie de fibonacci: ";
    
    for (int i = 1; i <= n; ++i)
    {
        if(i == 1)
        {
            cout << " " << t1;
            continue;
        }
        if(i == 2)
        {
            cout << t2 << " ";
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        
        cout << nextTerm << " ";
    }
}
