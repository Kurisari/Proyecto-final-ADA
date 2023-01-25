#include <iostream>

using namespace std;

int main() {
    int edad, suma, i=1;
    float promedio;
    cout << "Ingresa la edad: ";
    cin >> edad;
    suma = edad;
    while(edad > 17){
        cout << "Ingresa otra edad: ";
        cin >> edad;
        suma += edad;
        i++;
    }
    suma = suma - edad; 
    i = i - 1;
    promedio = float(suma)/float(i);
    cout << "El promedio de " << i << " edades es " << promedio;

}