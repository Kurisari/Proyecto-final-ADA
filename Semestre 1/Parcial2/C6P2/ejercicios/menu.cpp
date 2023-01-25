#include <iostream>

using namespace std;

int seleccion();
int main() {
    switch(seleccion()){
        case 1:
            cout << "Opcion 1 seleccionada";
            break;
        case 2:
            cout << "Opcion 2 seleccionada";
            break;
        case 3:
            cout << "Opcion 3 seleccionada";
            break;
    }
}

int seleccion(){
    int opcion;
    cout << "Seleccione una opcion del menu: " << endl << "1. Torta de jamon con jugo" << endl << "2. Sanwich de pollo con refresco" << endl << "3. Ensalada de frutas con pure" << endl;
    cin >> opcion;
    return opcion;
}