#include <iostream>

using namespace std;

int main() {
    int num, potencia, final = 1;
    cout << "Ingresa la base de la potencia: ";
    cin >> num;
    cout << "Ingresa el exponente de la potencia: ";
    cin >> potencia;
    for(int i = 1; i <= potencia; i++){
        final *= num;
    }
    cout << "La potencia es " << final;
}