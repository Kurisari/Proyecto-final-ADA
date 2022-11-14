/*
Este proyecto está hecho para que se ingresen datos de productos de un abarrotes.
Integrantes:
Ángel Bolaños
Gerardo Macías
Cristian Aragón Salazar
*/

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <windows.h>

#define F 5
#define C 4

using namespace std;

int tabla[F][C], resultados[F];
bool llenada = false;

// Índice
void llenado();           // Completado
void llenadoAutomatico(); // Completado
void mostrar();           // Completado
int sumaUtilidades();     // Completado
int productoMasVendido(); //Completado
int productoMenosVentas(); //Completado
int productoMasCaro(); //Completado
int totalStock(); //Completado
int productoMasUtilidad(); //Completado
float promedioDeVentas(); // Completado
void buscar(int dato); // Completado
void barraProgreso();  // Extra

int main() {
    int aux;
    float aux2;
    bool continuar = true;
    char opc;
    while (continuar) {
    otro:
        cout << endl
            << "Selecciona una opcion a ejecutar: " << endl;
        cout << "1	Llenado\n2	Llenado Automatico\n3	Mostrar\n4	Suma de las Utilidades\n5	producto que mas se vende\n6	Producto mas caro\n7	Total de stock\n8	Producto con mas utilidad\n9	Promedio de ventas\n-.	Producto que menos se vende\nb.	Buscar un dato\ns.      salir" << endl;
        cin >> opc;
        switch (opc) { // Menu de opciones
        case '1':
            llenado();
            break;
        case '2':
            llenadoAutomatico();
            break;
        case '3':
            mostrar();
            break;
        case '4':
            aux = sumaUtilidades();
            cout << "La suma de las utilidades es " << aux << endl;
            break;
        case '5':
            aux = productoMasVendido();
            cout << "El producto mas vendido es " << aux << endl;
            break;
        case '6':
            aux = productoMasCaro();
            cout << "El producto mas caro es " << aux << endl;
            break;
        case '7':
            aux = totalStock();
            cout << "La suma total de stock es " << aux << endl;
            break;
        case '8':
            aux = productoMasUtilidad();
            cout << "El producto con mas utilidad es " << aux << endl;
            break;
        case '9':
            aux2 = promedioDeVentas();
            cout << "El promedio de ventas es " << aux2 << endl;
            break;
        case '-':
            aux = productoMenosVentas();
            cout << "El producto menos vendido es " << aux << endl;
            break;
        case 'b':
            cout << "Ingresa el dato a buscar: " << endl;
            cin >> aux;
            buscar(aux);
            break;
        case 's':
            continuar = false;
            break;
        default:
            cout << "Esa opcion no exite, intentalo de nuevo: " << endl;
            goto otro;
        }
    }
}

void llenado() { // llenado con datos ingresados por el usuario
    for (int i = 0; i < F; i++)
        for (int j = 0; j < C; j++) {
            cout << "Producto: " << i << ", " << j << ": ";
            switch (j) {
            case 0:
                cout << "Stock" << endl;
                break;
            case 1:
                cout << "Costo a la abarrotes" << endl;
                break;
            case 2:
                cout << "Costo al cliente" << endl;
                break;
            case 3:
                cout << "Ventas" << endl;
                break;
            }
            cin >> tabla[i][j];
        }
    llenada = true;
}

void llenadoAutomatico() { // Lenado automático con números aleatorios
    barraProgreso();
    srand(time(NULL));
    for (int i = 0; i < F; i++)
        for (int j = 0; j < C; j++) {
            tabla[i][j] = 10 + rand() % 20;
        }
    llenada = true;
}

void mostrar() { // Muestra la matriz
    char eleccion;
    if (llenada) {
        for (int i = 0; i < F; i++) {
            cout << endl;
            for (int j = 0; j < C; j++) {
                cout << tabla[i][j] << "\t";
            }
        }
    }
    else {
        cout << "La tabla aun no ha sido llenada" << endl;
    }
    cout << endl;
}

int sumaUtilidades() {
    int aux = 0;
    int utilidades[F], suma = 0;
    int ventas[F][3] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    for (int i = 0; i < F; i++)
        for (int j = 1; j < 3; j++) {
            ventas[i][j] = tabla[i][j];
        }
    for (int i = 0; i < F; i++) {
        utilidades[i] = ventas[i][2] - ventas[i][1];
    }
    for (int i = 0; i < F; i++)
        suma += utilidades[i];
    return suma;
}

int productoMasVendido() { // Gera
    int mv = INT_MIN, ventas[F], posicion;
    for (int i = 0; i < F; i++){
        ventas[i] = tabla[i][3];
    }
    for (int i = 0; i < F; i++) {
        if (ventas[i] > mv) {
            mv = ventas[i];
            posicion = i+1;
        }
    }
    return posicion;
}

int productoMenosVentas() { // Pendiente
    int mv = INT_MAX, ventas[F], posicion;
    for (int i = 0; i < F; i++){
        ventas[i] = tabla[i][3];
    }
    for (int i = 0; i < F; i++) {
        if (ventas[i] < mv) {
            mv = ventas[i];
            posicion = i+1;
        }
    }
    return posicion;
}

int productoMasCaro() { // Pendiente
    int mc = INT_MIN, costo[F], posicion;
    for (int i = 0; i < F; i++){
        costo[i] = tabla[i][2];
    }
    for (int i = 0; i < F; i++) {
        if (costo[i] > mc) {
            mc = costo[i];
            posicion = i+1;
        }
    }
    return posicion;
}

int totalStock(){ //Ángel
    int stock[F], suma;
    suma=0;
    for(int i=0; i<F; i++)
        stock[i] = tabla[i][0];
    for (int i = 0; i<F; i++)
        suma += stock[i];
    return suma;
}

int productoMasUtilidad(){ //Ángel
    int utilidades[F] = {0, 0, 0, 0, 0}, mayor = INT_MIN, posicion;
    int ventas[F][3] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    for (int i = 0; i < F; i++)
        for (int j = 1; j < 3; j++){
            ventas[i][j] = tabla[i][j];
        }
    for (int i = 0; i < F; i++){
        utilidades[i] = ventas[i][2] - ventas[i][1];
        cout << utilidades[i] << endl;
    }
    for (int i = 0; i < F; i++){
        if (utilidades[i] > mayor){
            mayor = utilidades[i];
            posicion = i+1;
        }
    }
    return posicion;
}

float promedioDeVentas(){ //Ángel
    float promedio = 0, suma = 0;
    int ventas[F];
    for (int i = 0; i < F; i++){
        ventas[i] = tabla[i][3];
    }
    for (int i=0; i<F; i++){
        suma += ventas[i];
    }
    promedio = float(suma)/float(F);
    return promedio; 
}

void buscar(int dato) { // Cristian
    bool bandera = false;
    int posicionX, posicionY;
    for (int i = 0; i < F; i++)
        for (int j = 0; j < C; j++)
            if (tabla[i][j] == dato) {
                bandera = true;
                posicionX = i;
                posicionY = j;
            }
    if (bandera) {
        cout << "Si se encontro el dato en la posicion " << posicionX << ", " << posicionY << endl;
    }
    else {
        cout << "No se encontro el dato" << endl;
    }
}

void barraProgreso() { // Extra, contiene una función para generar una barra de progreso
    int segundos = 1;
    cout << "\t\t    Comenzando llenado automatico...\n";
    for (int i = 0; i <= 79; i++)
        cout << "_";
    cout << endl;
    for (int i = 0; i <= 79; i++) {
        cout << char(219);
        Sleep(segundos * 1000 / 80);
    }
    cout << "\nCompletado!" << endl;
}