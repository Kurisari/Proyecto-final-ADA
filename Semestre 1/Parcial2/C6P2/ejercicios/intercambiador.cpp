#include <iostream>

using namespace std;

void intercambiador(int n1, int n2);
int main() {
    int num1, num2;
    cout << "Ingresa dos numeros: ";
    cin >> num1 >> num2;
    intercambiador(num1, num2);
}

void intercambiador(int n1, int n2){
    cout << "Los numeros intercambiados son: " << n2 << " " << n1 << endl;
}