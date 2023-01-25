#include <iostream>

using namespace std;

int main() {
    int c;
    float s, sN, a;
    cout << "Ingresa la categoria del empleado: ";
    cin >> c;
    cout << "Ingresa el sueldo del mismo trabajador: ";
    cin >> s;
    switch (c) {
        case 1: 
            a = 1.05; 
            break;
        case 2: 
            a = 1.02; 
            break;
        case 3: 
            a = 1.03; 
            break;
        case 4: 
            a = 1.06; 
            break;
        default:
            cout << "Esa categoria no es valida";
            break;
    }
    sN = s*a;
    a = a-1;
    cout << "Empleado con categoria " << c << " y aumento del " << a*100 << " % tiene un sueldo final de $" << sN;
}