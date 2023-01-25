#include <iostream>

using namespace std;

int main() {
    float m, mF, d;
    cout << "Ingresa el monto de compra: ";
    cin >> m;
    if(m < 500){
        d = 1;
    } else if(m >= 500 && m < 1000){
        d = .95;
    } else if(m >= 1000 && m < 7000){
        d = .89;
    } else if(m >= 7000 && m < 15000){
        d = .82;
    } else d = .75;
    mF = m*d;
    d = d-1;
    cout << "El monto final de compra, con un descuento de: " << -d*100 << " % es $" << mF;
}