//
//  main.cpp
//  Tarea 1 Progra 1 - Ej 6
//
//  Created by Christian Pernillo on 2/7/19.
//  Copyright © 2019 Christian Pernillo. All rights reserved.
//

#include <iostream>
using namespace std;
int centro(int x , int y, int z);
int main()
{
    int a;
    int b;
    int c;
    int md;
    
    
    cout << "Ingrese el primer numero:" << endl;
    cin>>a;
    cout <<  "Ingrese el segundo numero:"<< endl;
    cin>>b;
    cout << "Ingrese el tercer numero:" << endl;
    cin>>c;
    
    md=centro(a,b,c);
    cout << endl<<"EL intermedio es "<<md <<endl;
    return 0;
}
int centro(int x , int y, int z)
{
    int mayor = 0;
    if(x<=y && y<= z){
        mayor = y;
    }
    if(y<=x && x<=z){
        mayor = x;
    }
    if(x<=z && z<=y){
        mayor = z;
    }
    return mayor;
}
