#include <iostream>

using namespace std;

int main() {
    int d, s;
    cout << "Ingresa el numero de dias ";
    cin >> d;
    s = d*86400;
    cout << "El numero de segundos en " << d << " dias es " << s << " segundos";
}