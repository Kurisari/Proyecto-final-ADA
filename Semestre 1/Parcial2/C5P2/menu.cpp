#include <iostream>

using namespace std;

int main() {
    char opc;
    do{
        cout << "Ingresa una opcion del 1 - 4 para seleccionar un paquete: (Escribe S para salir)";
        cin >> opc;
        switch (opc) {
            case '1':
                cout << "1. Torta de jamon con jugo de frutas" << endl;
                break;
            case '2':
                cout << "2. Sandwich con fruta picada" << endl;
                break;
            case '3':
                cout << "3. Hot dog con refresco coca cola" << endl;
                break;
            case '4':
                cout << "4. Quesadilla con jugo de naranja" << endl;
                break;
            default:
                cout << "Cerrando menu" << endl;
        }
    } while(opc != 's' or opc == 'S');
}