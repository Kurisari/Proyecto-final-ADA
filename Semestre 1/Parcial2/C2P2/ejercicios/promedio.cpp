#include <iostream>

using namespace std;

int main() {
    int mat;
    float prom, c1, c2, c3;
    string p;
    cout << "Ingresa tu matricula: ";
    cin >> mat;
    cout << mat << " ingresa tus tres calificaciones: ";
    cin >> c1 >> c2 >> c3;
    prom = (c1+c2+c3)/3.0;
    if(prom >= 6) p = "aprobatorio";
    else p = "no aprobatorio";
    cout << mat << " tu promedio es " << p << " siendo este " << prom;
}