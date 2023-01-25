#include <iostream>

using namespace std;

int main() {
    int clave;
    cout << "Ingresa la clave entre 1 y 5: ";
    cin >> clave;
    while(clave > 5 or clave <= 0){
        cout << "Clave no valida, intentalo de nuevo: ";
        cin >> clave;
    }
    cout << "Clave aceptada";
}