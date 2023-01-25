#include <iostream>

using namespace std;

int main() {
    int n, s;
    n = 0;
    while(n >= 0){
        cout << "Ingresa un numero: ";
        cin >> n;
        s += n;
    }
    s = s - n;
    cout << "La suma es total es " << s;
}
