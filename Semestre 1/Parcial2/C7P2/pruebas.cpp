#include <iostream>

using namespace std;

int main(){
    int ventasGalones, precioLitro;
    float ventasLitros, total;
    
    cout << "Ingresa la venta en galones: ";
    cin >> ventasGalones;
    cout << "Ingresa el precio por litro: ";
    cin >> precioLitro;
    
    ventasLitros = ventasGalones*3.786;
    total = ventasLitros*precioLitro;
    
    cout << total;
}