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
void llenado(); // Completado
void llenadoAutomatico(); // Completado
void mostrar(); // Completado
int sumaUtilidades(); //Completado
int productoMasVendido();
int productoMenosVentas();
int productoMasCaro();
int totalStock();
int productoMasUtilidad();
float promedioDeVentas();
void buscar(int dato); //Completado
void barraProgreso(); // Extra

int main() {
    int aux;
    bool continuar = true;
    char opc;
    while (continuar){
    otro:
        cout << endl << "Selecciona una opcion a ejecutar: " << endl;
        cout << "1	Llenado\n2	Llenado Automatico\n3	Mostrar\n4	Suma de las Utilidades\n5	producto que mas se vende\n6	Producto mas caro\n7	Total de stock\n8	Producto con mas utilidad\n9	Promedio de ventas\n-.	Producto que menos se vende\nb.	Buscar un dato\ns.      salir" << endl;
        cin >> opc;
        switch (opc){ // Menu de opciones
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
            cout << "La suma de las utilidades es " << aux;
            break;
        case '5':
            break;
        case '6':
            break;
        case '7':
            break;
        case '8':
            break;
        case '9':
            break;
        case '-':
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
        for (int j = 0; j < C; j++){
            cout << "Producto: " << i << ", " << j << ": ";
            switch (j){
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
        for (int j = 0; j < C; j++){
            tabla[i][j] = 10 + rand()%20;
        }
    llenada = true;
}

void mostrar() { // Muestra la matriz
    char eleccion;
    if(llenada){
        for (int i = 0; i < F; i++) {
        cout << endl;
            for (int j = 0; j < C; j++){
                cout << tabla[i][j] << "\t";
            }
        }
    } else{
        cout << "La tabla aun no ha sido llenada" << endl;
    }
    cout << endl;
}

int sumaUtilidades(){
    int aux = 0;
    int utilidades[F], suma = 0;
    int ventas[F][3] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    for (int i = 0; i < F; i++)
        for (int j = 1; j < 3; j++){
            ventas[i][j] = tabla[i][j];
        }
    for (int i = 0; i < F; i++){
        utilidades[i] = ventas[i][1] - ventas[i][2];
    }
    for (int i = 0; i < F; i++)
        suma += utilidades[i];
    return suma;
}

int productoMasVendido(){ //Gera

}

int productoMenosVentas(){ //Gera

}

int productoMasCaro(){ //Gera

}

int totalStock(){ //Ángel

}

int productoMasUtilidad(){ //Ángel

}

float promedioDeVentas(){ //Ángel

}

void buscar(int dato){ //Cristian
    bool bandera = false;
    int posicionX, posicionY;
    for (int i = 0; i < F; i++)
        for (int j = 0; j < C; j++)
            if (tabla[i][j] == dato){
                bandera = true;
                posicionX = i;
                posicionY = j;
            }
    if (bandera){
        cout << "Si se encontro el dato en la posicion " << posicionX << ", " << posicionY << endl;
    } else {
        cout << "No se encontro el dato" << endl;
    }
}

void barraProgreso() { // Extra, contiene una función para generar una barra de progreso
    int segundos = 1;
    cout << "\t\t    Comenzando llenado automatico...\n";
    for (int i = 0; i <= 79; i++)
        cout << "_";
    cout << endl;
    for (int i = 0; i <= 79; i++){
        cout << char(219);
        Sleep(segundos * 1000 / 80);
    }
    cout << "\nCompletado!" << endl;
}