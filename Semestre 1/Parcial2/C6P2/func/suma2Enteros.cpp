#include <iostream>

using namespace std;

//Globales*

//Índice
void suma1(); //Procedimiento
int suma2(); //CR/SP
void suma3(int n1, int n2); //SR/CP
int suma4(int n1, int n2); //CR/CP

int main() {
    suma1();
    cout << "La suma 2 es " << suma2() << endl;
    suma3(5,6);
    cout << "La suma 4 es " << suma4(7,8) << endl;
}

//Definiciones
void suma1(){
    int n1 = 1, n2 = 2; //Locales
    cout << "La suma 1 es " << n1+n2 << endl;
}
int suma2(){
    int n1 = 3, n2 = 4;
    return n1+n2;
}
void suma3(int n1, int n2){
    cout << "La suma 3 es " << n1+n2 << endl;
}
int suma4(int n1, int n2){
    return n1+n2;
}