#include <iostream>

using namespace std;

int main() {
    int year;
    cout << "Ingresa el year: ";
    cin >> year;
    if(year%4 == 0){
        cout << "El year: " << year << " es bisiesto";
    } else {
        cout << "El year: " << year << " no es bisiesto";
    }
}