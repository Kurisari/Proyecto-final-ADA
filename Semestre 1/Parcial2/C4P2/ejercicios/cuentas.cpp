#include <iostream>

using namespace std;

int main() {
    string estado;
    int numCuenta = 1, i = 0;
    float saldo, suma, promedio;
    while(numCuenta > 0) {
        cout << "Ingresa el numero de cuenta: ";
        cin >> numCuenta;
        if(numCuenta > 0){
            cout << "Ingresa el saldo actual de la cuenta: ";
            cin >> saldo;
            if(saldo > 0) {
                estado = "Acreedor";
                suma += saldo;
                i++;
            }
            else if(saldo < 0) estado = "Deudor";
            else estado = "Nulo";
            cout << numCuenta << " con saldo " << saldo << " es " << estado << endl;
        }
    }
    promedio = float(suma)/float(i);
    cout << "El promedio de " << i << " saldos acreedores es " << promedio;

}