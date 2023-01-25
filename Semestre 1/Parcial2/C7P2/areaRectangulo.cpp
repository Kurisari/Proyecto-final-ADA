#include <iostream>

using namespace std;

void area1();
float area2();
void area3(float base, float altura);
float area4(float base, float altura);

int main() {
    area1();
    cout << "La area del rectangulo 2 es " << area2() << endl;
    area3(5.5,6.9);
    cout << "La area del rectangulo 4 es " << area4(7.2,8.4) << endl;
}

//Definiciones
void area1(){
    float base = 4.4, altura = 5.8; //Locales
    cout << "La area del rectangulo 1 es " << base*altura << endl;
}
float area2(){
    float base = 3.4, altura = 4.5;
    return base*altura;
}
void area3(float base, float altura){
    cout << "La area del rectangulo 3 es " << base*altura << endl;
}
float area4(float base, float altura){
    return base*altura;
}