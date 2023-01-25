#include <iostream>

using namespace std;

int main() {
    float pL, lP, pK, lM;
    string n;
    cout << "Escribe el nombre de tu dinosaurio ";
    cin >> n;
    cout << "Escribe el peso de " << n << " en libras ";
    cin >> pL;
    cout << "Escribe la longitud de " << n << " en pies ";
    cin >> lP;
    pK = pL/2.205;
    lM = lP/3.281;
    cout << n << " tiene un peso de " << pK << " kg y una longitud de " << lM << " m"; 
}