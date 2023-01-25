#include <iostream>

using namespace std;

int main() {
    float c, e, cam;
    cout << "Ingrese el costo del articulo: " << endl;
    cin >> c;
    cout << "Ingrese la cantidad entregada por el cliente: " << endl;
    cin >> e;
    cam = e - c;
    cout << "El cambio que se debe entregar al cliente es $" << cam;
}