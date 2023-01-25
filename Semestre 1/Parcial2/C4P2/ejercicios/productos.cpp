#include <iostream>

using namespace std;

int main() {
    int producto, ubiMayor, mayor;
    mayor = 0;
    ubiMayor=0;
    for (int i = 1; i <= 5; i++) {
        cout << "Ingresa el precio del producto: " << endl;
        cin >> producto;
        if (mayor < producto){
            mayor = producto;
            ubiMayor = i;
        }
    }
    cout << "La posicion del menor es " << ubiMayor;
}