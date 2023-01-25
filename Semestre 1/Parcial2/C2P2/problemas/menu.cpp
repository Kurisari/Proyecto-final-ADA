#include <iostream>

using namespace std;

int main() {
    int s;
    error:
    cout << "Ingresa una opcion del menu: (1-4):" << endl;
    cin >> s;
    switch (s) {
        case 1: 
            cout << "1. Torta de jamon con jugo de frutas";
            break;
        case 2: 
            cout << "2. Sandwich de salchicha con cocacola";
            break;
        case 3: 
            cout << "3. Coctel de frutas con pan tostado";
            break;
        case 4: 
            cout << "4. Hot dog con refresco";
            break;
        default:
            cout << "Ese paquete no existe, intentalo de nuevo " << endl;
            goto error;
    }
}