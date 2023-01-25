/*Las matrices son arreglos de dos dimensiones, contiene filas y columnas. 
Para recorrer vectores se necesita utilizar 1 ciclo, para hacer el recorrido
de matrices se requiere de 2 ciclos anidados, no olvides que para los
programadores la primera posición de un arreglo es 0*/
#include <iostream>
//Constante que determina el tamaño del vector
#define F 3
#define C 2
using namespace std;
// variables globales - se pueden usar en todo el programa
int matriz[F][C], vectorF[F] = {0, 0, 0}, vectorC[C] = {0, 0}; // la matriz tiene F filas y C columnas
void llenado();// Captura las edades
int acumulado();// Regresa la suma de las edades
float promedio(); //Regresa el promedio de las edades
int mayor(); // Regresa la edad mayor
int menor(); //Regresa la edad menor 
void buscar(int edad);
void acumulaF();// Acumula por filas y muestra los resultados
void acumulaC();//Acumula por columnas y muestra los resultados
void mostrar(); //Función EXTRA para mostrar los datos
int main() {
    cout << "Captura las 6 edades" << endl;
    llenado();
    cout << "El acumulado de edades es: " << acumulado() << endl;
    cout << "El promedio de la edades es: " << promedio() << endl;
    cout << "La mayor de las edades es: " << mayor() << endl;
    cout << "La menor de las edades es: " << menor() << endl;
    int aux;
    cout << "Edad a ser buscada es: ";
    cin >> aux;
    buscar(aux);
    cout << endl << "La suma de las edades por fila " << endl;
    acumulaF();
    cout << endl << "La suma de las edades por columna " << endl;
    acumulaC();
    cout << endl << "Todos los datos son ";
    mostrar();
}
void llenado() {
    for (int i = 0; i < F; i++) // i es la variable de recorrido por Filas
        for (int j = 0; j < C; j++) { // j es la variable de recorrido por Columnas
            cout << "Edad " << i + 1 << ", " << j + 1 << ": ";
            cin >> matriz[i][j];
        }
}

int acumulado() {
    int suma = 0;
    for (int i = 0; i < F; i++)
        for (int j = 0; j < C; j++)
            suma += matriz[i][j];
    return suma;
}
float promedio() {
    int suma = 0;
    float promedio;
    for (int i = 0; i < F; i++)
        for (int j = 0; j < C; j++)
            suma += matriz[i][j];
    promedio = float(suma)/float(F*C);
    return promedio;
}
int mayor() {
    int may = 0;
    for (int i = 0; i < F; i++)
        for (int j = 0; j < C; j++)
            if (matriz[i][j] > may)
                may = matriz[i][j];
    return may;
}
int menor() {
    int men = INT_MAX;
    for (int i = 0; i < F; i++)
        for (int j = 0 ; j < C; j++)
            if (matriz[i][j] < men)
                men = matriz[i][j];
    return men;
}
void buscar(int edad) {
    bool bandera = false;
    for (int i = 0; i < F; i++)
        for (int j = 0; j < C; j++)
            if (matriz[i][j] == edad)
                bandera = true;
    if (bandera)
        cout << "Se encontro la edad " << edad << endl;
    else
        cout << "NO se encontro la edad " << edad << endl;
}
void acumulaF() {
    for (int i = 0; i < F; i++)
        for (int j = 0; j < C; j++)
            vectorF[i] += matriz[i][j];
    for (int i = 0; i < F; i++) // se usan saltos de línea porque es por fila
        cout << endl << vectorF[i];
}
void acumulaC() { // favor de usar tabuladores porque es por columna
    for (int i = 0; i < F; i++)
        for (int j = 0; j < C; j++)
            vectorC[i] += matriz[j][i];
    for (int i = 0; i < C; i++)
        cout << "\t" << vectorC[i];
}

void mostrar() { //EXTRA
    for (int i = 0; i < F; i++){
        cout << endl;
        for (int j = 0; j < C; j++)
            cout << matriz[i][j] << "\t";
    }
}
