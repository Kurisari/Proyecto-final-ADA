#include <iostream>

using namespace std;

int main() {
    int i = 1;
    char continuar;
    continuar = 'y';
    while(continuar == 'Y' or continuar == 'y'){
        cout << i << endl;
        i+=1;
        cout << "Quieres continuar? (Para continuar ingresa Y)" << endl;
        cin >> continuar;
    }
}