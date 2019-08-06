//
//  main.cpp
//  Tarea 1 Progra 1 - Ej 5
//
//  Created by Christian Pernillo on 2/7/19.
//  Copyright © 2019 Christian Pernillo. All rights reserved.
//

#include <iostream>
using namespace std;
float makeCoutaLaboral(float salario_base);
float makeCoutaPatronal(float salario_base);
float makeSueldoLiquido(float salario_base, float cuota_laboral, float cuota_patronal);
int main(int argc, const char * argv[]) {
    float salario_base;
    
    cout << "Ingrese el salario base del empleado" << endl;
    cin >> salario_base;
    float cuota_laboral = makeCoutaLaboral(salario_base);
    float cuota_patronal = makeCoutaPatronal(salario_base);
    float sueldo_liquido = makeSueldoLiquido(salario_base, cuota_laboral, cuota_patronal);
    cout << "Cuota Laboral: " << cuota_laboral << endl;
    cout << "Cuota patronal: " << cuota_patronal << endl;
    cout << "Sueldo liquido: "<< sueldo_liquido << endl;
    return 0;
}
float makeCoutaLaboral(float salario_base) {
    return (salario_base * 0.483);
}
float makeCoutaPatronal(float salario_base) {
    return (salario_base * 0.01);
}
float makeSueldoLiquido(float salario_base, float cuota_laboral, float cuota_patronal){
    return (salario_base - (cuota_laboral + cuota_patronal));
}
