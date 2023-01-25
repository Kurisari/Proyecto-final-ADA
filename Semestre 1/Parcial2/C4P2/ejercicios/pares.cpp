#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Ingresa el limite de la serie: ";
    cin >> n;
    for(int i = 1; i <= n/2; i++) {
        cout << " [ "<< 2*i << " ] ";
    }
}