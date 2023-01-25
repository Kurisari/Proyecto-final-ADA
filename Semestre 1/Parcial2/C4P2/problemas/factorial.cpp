#include <iostream>

using namespace std;

int main() {
    int n, f;
    cout << "Ingresa el numero para sacar el factorial: ";
    cin >> n;
    f = 1;
    for(int i = n; i > 0; i--){
        f *= i;
    }
    cout << "El factorial de " << n << " es " << f;
}
