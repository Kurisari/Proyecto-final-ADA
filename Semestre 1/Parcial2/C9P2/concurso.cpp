#include <iostream>

using namespace std;

int main(){
    int tope, categ;
    float aum, suelN, suel, suma;
    int mayor = 0, posicion;
    cout << "Ingresa el numero de trabajadores a ingresar: ";
    cin >> tope;
    for(int i=1; i <= tope; i++){
        cout << "Ingresa la categoria del trabajador";
        cin >> categ;
        switch(categ){
            case 12:
                aum = 1.01;
                break;
            case 21:
                aum = 1.02;
                break;
            case 34:
                aum = 1.03;
                break;
            case 43:
                aum = 1.04;
                break;
            default:
                cout << "Error, intenta de nuevo";
        }
        cout << "Ingresa el sueldo del trabajador: ";
        cin >> suel;
        suelN = suel*aum;
        suma += suelN; 
        if(mayor < suelN){
            mayor = suelN;
            posicion = i;
        }
            
        }
    cout << suma << endl;
    cout << mayor << endl;
    cout << posicion << endl;

}