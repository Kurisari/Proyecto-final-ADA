#include <iostream>
#include <cstdlib>
#include <windows.h>

using namespace std;

int main() {
    int segundos=5;
    for (int i=0; i <=21; i++)
        cout << "\n";
    cout << "\t\t\t\t   CARGANDO...\n";
    for (int i=0; i <= 79; i++)
        cout << "_";
    cout << endl;
    for (int i = 0; i <= 79; i++){
        cout << char(219);
        Sleep(segundos*1000/80);
    }
    cout << "\nCompletado!";
}