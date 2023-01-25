/*Un array es una estructura de datos que nos permite almacenar y gestionar
de forma conjunta multiples valores del mismo tipo, utilizando la posicion en
donde se almacenan. Los arrays pueden ser de una dimension (vectores), de dos
dimensiones (matrices) o de multiples dimensiones.*/
#include <iostream>
#include <locale.h>
// Constante que determina el tamaño del vector
#define TAM 5
using namespace std;
// variables globales - se pueden usar en todo el programa
int vector1[TAM], vector2[TAM]; // los índices del vector serán del 0 a TAM-1
void llenado1();// Captura las edades del salon 1
void llenado2(); //Captura las edades del salon 2
int acumulado1();// Regresa a suma de las edades del salon 1
float promedio2(); //Retorna el promedio de las edades del salon 2
int mayor1();// Regresa la edad mayor del salon 1
int menor2(); //Retorna la edad menor del salon 2
void buscar1(int edad);// Busca una edad en el salon 1
void buscar2(int edad); //Busca una edad en el salon 2
void sumaVecs(); // Muestra la suma elemento a elemento de los 2 salones
void restaVecs(); //Muestra la resta elemento a elemento de los 2 salones

int main() {
    setlocale(LC_ALL, "spanish");
    cout << "Captura las 5 edades del salón 1" << endl;
    llenado1();
    cout << "Captura las 5 edades del salon 2" << endl;
    llenado2();
    cout << "El acumulado de edades del salon 1 es: " << acumulado1() << endl;
    cout << "El promedio de edades del salon 2 es: " << promedio2() << endl;
    cout << "La mayor de las edades del salon 1 es: " << mayor1() << endl;
    cout << "El menor de las edades del salon 2 es: " << menor2() << endl;
    int aux;
    cout << "Edad a ser buscada en el salon 1: ";
    cin >> aux;
    buscar1(aux);
    int aux2;
    cout << "Edad a ser buscada en el salon 2: ";
    cin >> aux2;
    buscar2(aux2);
    cout << "La suma de las edades de los dos salones son:" << endl;
    sumaVecs();
    cout << endl << "La resta de las edades de los dos salones son: " << endl;
    restaVecs();
}
void llenado1() {
    for (int i = 0; i < TAM; i++) { // i es la variable de recorrido
        cout << "Salon 1, edad " << i + 1 << ": ";
        cin >> vector1[i];
    }
}
void llenado2() {
    for (int i = 0; i < TAM; i++) {
        cout << "Salon 2, edad " << i + 1 << ": ";
        cin >> vector2[i];
    }
}
int acumulado1() {
    int suma = 0;
    for (int i = 0; i < TAM; i++)
        suma += vector1[i];
    return suma;
}
float promedio2() {
    float suma = 0, promedio = 0;
    for (int i = 0; i < TAM; i++){
        suma += vector2[i];
    }
    promedio = suma/TAM;
    return promedio;
}
int mayor1() {
    int mayor = 0;
    for (int i = 0; i < TAM; i++)
        if (vector1[i] > mayor)
            mayor = vector1[i];
    return mayor;
}
int menor2() {
    int menor = INT_MAX;
    for (int i = 0; i < TAM; i++)
        if (vector2[i] < menor)
            menor = vector2[i];
    return menor;
}
void buscar1(int edad) {
    bool bandera = false;
    for (int i = 0; i < TAM; i++)
        if (vector1[i] == edad)
            bandera = true;
    if (bandera)
        cout << "En el salon 1 se encontro la edad " << edad << endl;
    else
        cout << "En el salon 1 NO se encontro la edad " << edad << endl;
}
void buscar2(int edad) {
    bool bandera = false;
    for (int i = 0; i < TAM; i++)
        if (vector2[i] == edad)
            bandera = true;
    if (bandera)
        cout << "En el salon 2 se encontro la edad " << edad << endl;
    else 
        cout << "En el salon 2 NO se encontro la edad " << edad << endl;
}
void sumaVecs() {
    int r[TAM];
    for (int i = 0; i < TAM; i++) {
        r[i] = vector1[i] + vector2[i];
        cout << "\t" << r[i];
    }
}
void restaVecs() {
    int r[TAM];
    for (int i = 0; i < TAM; i++){
        r[i] = vector1[i] - vector2[i];
        cout << "\t" << r[i];
    }
}
