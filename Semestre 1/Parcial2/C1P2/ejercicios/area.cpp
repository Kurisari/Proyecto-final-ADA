#include <iostream>

using namespace std;

int main() {
    float b, h, a;
    cout << "Ingresa la base del triangulo: ";
    cin >> b;
    cout << "Ingresa la altura del triangulo: ";
    cin >> h;
    a = (b*h)/2;
    cout << "El area del triangulo es " << a;
}