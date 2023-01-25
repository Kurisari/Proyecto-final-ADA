#include <iostream>

using namespace std;

int main() {
    int c, min;
    float p, cos;
    error:
    cout << "Ingresa la clave de la zona: ";
    cin >> c;
    switch(c){
        case 12:
            cout << "Zona seleccionada: America del Norte" << endl;
            p = 2;
            break;
        case 15:
            cout << "Zona seleccionada: America del Centro" << endl;
            p = 2.2;
            break;
        case 18:
            cout << "Zona seleccionada: America del Sur" << endl;
            p = 4.5;
            break;
        case 19:
            cout << "Zona seleccionada: Europa" << endl;
            p = 4.5;
            break;
        case 23:
            cout << "Zona seleccionada: Asia" << endl;
            p = 6;
            break;
        default:
            cout << "La zona seleccionada no existe, intentelo de nuevo" << endl;
            goto error;

    }
    cout << "Ingresa el numero de minutos llamados: ";
    cin >> min;
    cos = p*min;
    cout << "El costo total de la llamada es $" << cos;
}