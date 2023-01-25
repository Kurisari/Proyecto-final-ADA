#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Escribe hasta donde va a acabar la serie de numeros: ";
    cin >> n;
    for (int i = 0 ; i <= n; i++){
        cout << i << ", ";
    }
}