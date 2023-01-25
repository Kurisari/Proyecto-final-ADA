#include <iostream>

using namespace std;

int main() {
    int fib = 0, aux = 1, lim, init;
    cout << "Ingresa el limite de la serie: ";
    cin >> lim;
    if(lim > 0){
        for(init = 1; init <= lim+1; init++){
            cout << "[ " << fib << " ]";
            aux += fib;
            fib = aux - fib;
        }
    } else{
        cout << "El numero debe ser mayor a 0";
    }
}