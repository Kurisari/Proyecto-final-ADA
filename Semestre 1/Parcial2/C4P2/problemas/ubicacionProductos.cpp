#include <iostream>

using namespace std;

int main() {
    int p, ubiMen;
    float menor;
    for (int i = 1; i <= 5; i++) {
        menor = INT_MAX;
        ubiMen=0;
        cout << "Ingresa el precio del producto: " << endl;
        cin >> p;
        if (menor > p){
            menor = p;
            ubiMen = i;
        }
    }
    cout << "La posicion del menor es " << ubiMen;
}