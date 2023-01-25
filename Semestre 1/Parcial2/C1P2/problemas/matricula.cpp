#include <iostream>

using namespace std;

int main() {
    int mat;
    float c1, c2, c3, c4, c5, prom;
    cout << "Escribe tu matricula: ";
    cin >> mat;
    cout << "Escribe tus 5 calificaciones: ";
    cin >> c1 >> c2 >> c3 >> c4 >> c5;
    prom = (c1+c2+c3+c4+c5)/5;
    cout << mat << " el promedio de tus calificaciones es: " << prom;
}