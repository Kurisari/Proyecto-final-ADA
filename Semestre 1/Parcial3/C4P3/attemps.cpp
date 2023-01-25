#include <iostream>

using namespace std;

void transpuesta();

int main() {
    transpuesta();
}

void transpuesta(){
    int F = 4, C = 3;
    int matriz[F][C];
    int sumaF[F] = {0, 0, 0, 0}, sumaC[C] = {0, 0, 0};
    for (int i = 0; i < F; i++)
        for (int j = 0; j < C; j++){
            cout << "Dato " << i+1 << ", " << j+1 << endl;
            cin >> matriz[i][j];
        }
    //Suma filas
    for (int i = 0; i < F; i++)
        for (int j = 0; j < C; j++)
            sumaF[i] += matriz[i][j];
    //Suma columnas
    for (int i = 0; i < F; i++)
        for (int j = 0; j < C; j++)
            sumaC[i] += matriz[j][i];
    //Mostrar
    for (int i = 0; i < F; i++){
        cout << endl;
        for (int j = 0; j < C; j++)
            cout << matriz[i][j] << "\t";
        cout << "\t" <<  sumaF[i];
    }
    cout << endl << endl;
    for (int i = 0; i < C; i++){
        cout << sumaC[i] << "\t";
    }
    /*cout << "La suma por filas es " << endl;
    for (int i = 0; i < 4; i++)
        cout << endl << sumaF[i];
    cout << endl << "La suma por columnas es " << endl;
    for (int i = 0; i < 3; i++)
        cout << "\t" << sumaC[i];*/
}