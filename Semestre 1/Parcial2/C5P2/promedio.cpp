#include <iostream>

using namespace std;

int main() {
    int calificacion, cantidad, suma;
    float promedio;
    cout << "Ingresa el numero de calificaciones que quieres ingresar: ";
    cin >> cantidad;
    for(int i = 0; i < cantidad; i++) {
        cout << "Ingresa la calificacion: ";
        cin >> calificacion;
        suma += calificacion; 
    }
    promedio = float(suma)/float(cantidad);
    cout << "El promedio de las calificaciones es: " << promedio;
}