#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, p1, p2;
    cout << "Escribe un entero positivo ";
    cin >> n;
    p1 = pow(n, 2);
    p2 = pow(n, 3);
    cout << "El numero elevado al cuadrado es " << p1 << " y el numero elevado al cubo es " << p2;
}