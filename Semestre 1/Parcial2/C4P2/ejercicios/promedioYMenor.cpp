#include <iostream>

using namespace std;

int main() {
    float promedio, suma;
    int nums, numero, menor = INT_MAX;
    cout << "Ingresa el limite de ingreso: ";
    cin >> nums;
    for(int i = 1; i <= nums; i++){
        cout << "Ingresa un numero: ";
        cin >> numero;
        suma += numero;
        if(menor > numero){
            menor = numero;
        }
    }
    promedio = float(suma)/float(numero);
    cout << "El promedio es " << promedio << " y el numero mas chico ingresado es " << menor;
}