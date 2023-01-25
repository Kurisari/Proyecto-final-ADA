#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float r, h, aB, v, pi;
    pi = 3.1415;
    cout << "Ingresa el radio de la base ";
    cin >> r;
    cout << "Ingresa la altura del cilindro ";
    cin >> h;
    aB = pi*pow(r,2);
    v = aB*h;
    cout << "El area de la base es " << aB << " y el volumen del cilindro es " << v;
}