#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Ingresa el comienzo de la cuenta regresiva: ";
    cin >> n;
    for(int i = n; i > 0; i--){
        cout << i << endl;
    }
}