#include <iostream>

using namespace std;

int main() {
    float m, i, mF;
    cout << "Ingresa el monto del articulo: ";
    cin >> m;
    if(m >= 0 && m <= 50) i = 1;
    else if(m > 50 && m <= 100) i = 1.05;
    else if(m > 100 && m <= 500) i = 1.1;
    else if(m > 500) i = 1.15;
    else {
        cout << "Numero fuera de rango" << endl;
        return 0;
    }
    mF = m*i;
    i = i-1;
    cout << "El monto final del articulo es $" << mF << " con un impuesto de " << i*100 << " %";
}