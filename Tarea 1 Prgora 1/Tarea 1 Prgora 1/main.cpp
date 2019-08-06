//
//  main.cpp
//  Tarea 1 Prgora 1
//
//  Created by Christian Pernillo on 2/7/19.
//  Copyright © 2019 Christian Pernillo. All rights reserved.
//

#include <iostream>

using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    float cdolar;
    cout << "Ingrese cantidad en quetzales" << endl;
    cin >> cdolar;
    cout << "La cantidad en dolares es de: " << printf("%.2f\n", (cdolar / 7.6));
    return 0;
}
