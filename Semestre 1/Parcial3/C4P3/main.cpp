#include <iostream>

using namespace std;

//Índice
void edades(int n); // Ingresa edades y muestra todas las edades menores a 18
void operacionesEnteros(int n); // Ingresas n numeros y calcula su suma, promedio y el mayor del conjunto
int menorDatos(); // Ingresa n numeros y retorna la posicion del menor del conjunto
float sumaMatriz(); // Rellenas una matriz y retorna la suma todos los datos
void sumaFilasColumnas(); // Rellenas una matriz y muestra la suma de filas y suma de columnas de la matriz
void transpuesta(); // Rellenas una matriz y muestra la matriz original y la transpuesta

int main() {
    int aux;
    cout << "Ingresa la cantidad de edades a llenar: " << endl;
    cin >> aux;
    edades(aux);
    cout << "Ingresa la cantidad de numeros: " << endl;
    cin >> aux;
    operacionesEnteros(aux);
    aux = menorDatos();
    cout << "La posicion del menor de los datos es " << aux << endl;
    aux = sumaMatriz();
    cout << "La suma final de todos los datos de la matriz es " << aux << endl;
    sumaFilasColumnas();
    cout << endl;
    transpuesta();
}

void edades(int n) {
    int vector[n];
    cout << "Ingresa las edades: " << endl;
    for (int i = 0; i < n; i++)
        cin >> vector[i];
    cout << "Edades menores a 18: " << endl;
    for (int i = 0; i < n; i++){
        if (vector[i] < 18)
        cout << vector[i] << endl;
    }
}

void operacionesEnteros(int n){
    int vector[n];
    int suma = 0, mayor = INT_MIN;
    float promedio;
    cout << "Ingresa los numeros: " << endl;
    for (int i = 0; i < n; i++)
        cin >> vector[i];
    for (int i = 0; i < n; i++)
        suma += vector[i];
    cout << "La suma total es " << suma << endl;
    promedio = float(suma)/float(n);
    cout << "El promedio es " << promedio << endl;
    for(int i = 0; i < n; i++)
        if (vector[i] > mayor)
            mayor = vector[i];
    cout << "El mayor del conjunto es " << mayor << endl;
}

int menorDatos(){
    int n, aux = INT_MAX, menor;
    int vector[n];
    cout << "Ingresa la cantidad de numeros: " << endl;
    cin >> n;
    cout << "Ingresa los numeros: " << endl;
    for (int i = 0; i < n; i++)
        cin >> vector[i];
    for (int i = 0; i < n; i++)
        if (vector[i] < aux){
            aux = vector[i];
            menor = i+1;
        }
    return menor;
}

float sumaMatriz(){
    float matriz[5][4];
    float suma = 0;
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 4; j++){
            cout << "Captura el dato " << i+1 << ", " << j+1 << endl;
            cin >> matriz[i][j];
        }
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 4; j++)
            suma += matriz[i][j];
    return suma;
}

void sumaFilasColumnas(){
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
    for (int i = 0; i < C; i++)
        for (int j = 0; j < F; j++)
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
}

void transpuesta(){
    int matriz[3][4], matrizTranspuesta[4][3];
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 4; j++){
            cout << "Dato " << i + 1 << ", " << j + 1 << endl;
            cin >> matriz[i][j];
        }
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 4; j++)
            matrizTranspuesta[j][i] = matriz[i][j];
    cout << "Matriz original" << endl;
    for (int i = 0; i < 3; i++){
        cout << endl;
        for (int j = 0; j < 4; j++)
            cout << matriz[i][j] << "\t";
    }
    cout << endl << "Matriz Transpuesta " << endl;
    for (int i = 0; i < 4; i++){
        cout << endl;
        for (int j = 0; j < 3; j++)
            cout << matrizTranspuesta[i][j] << "\t";
    }
}