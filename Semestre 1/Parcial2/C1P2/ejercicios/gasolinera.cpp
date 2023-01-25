#include <iostream>

using namespace std;

int main() {
    float vG, vL, pL, f;
    cout << "Ingresa el total de galones vendidos ";
    cin >> vG;
    cout << "Ingresa el precio de la gasolina en litros ";
    cin >> pL;
    vL = vG*3.785;
    f = vL*pL;
    cout << "Lo que se debe cobrar por " << vL << " litros es $" << f;
}