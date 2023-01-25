#include <iostream>

using namespace std;

int factorial(int base, int exponente);
int main() {
    cout << "La potencia es " << factorial(2, 3);
}

int factorial(int base, int exponente){
    int potencia = 1;
    for(int i = 1; i <= exponente; i++){
        potencia *= base;
    }
    return potencia;
}