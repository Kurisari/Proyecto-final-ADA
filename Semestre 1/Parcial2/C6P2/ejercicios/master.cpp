#include <iostream>

using namespace std;

void validacion();
int seleccion();
void intercambiador(int n1, int n2);
int factorial(int num);

int main() {
    validacion();
    switch(seleccion()){
        case 1:
            cout << "Opcion 1 seleccionada" << endl;
            break;
        case 2:
            cout << "Opcion 2 seleccionada" << endl;
            break;
        case 3:
            cout << "Opcion 3 seleccionada" << endl;
            break;

    }
    intercambiador(25,40);
    cout << "El factorial es " << factorial(5);
}

void validacion(){
    int num;
    cout << "Ingresa un numero para validar: ";
    cin >> num;
    while(num < 1 or num > 5){
        cout << "Numero no valido" << endl;
        cout << "Intenta de nuevo: ";
        cin >> num;
    }
    cout << "Numero valido" << endl;
}
int seleccion(){
    int opcion;
    cout << "Seleccione una opcion del menu: " << endl << "1. Torta de jamon con jugo" << endl << "2. Sanwich de pollo con refresco" << endl << "3. Ensalada de frutas con pure" << endl;
    cin >> opcion;
    return "La opcion fue ", opcion;
}
void intercambiador(int n1, int n2){
    int aux;
    aux = n1;
    n1 = n2;
    n2 = aux;
    cout << "Los numeros intercambiados son: " << n1 << " " << n2 << endl;
}
int factorial(int num){
    int factor = 1;
    for(int i = 1; i <= num; i++){
        factor *= i;
    }
    return factor;
}