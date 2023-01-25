#include <iostream>

using namespace std;

int main() {
    int e, my;
    float p, s;
    s=0;
    for (int i = 0; i < 5; i++){
        cout << "Ingresa la edad: ";
        cin >> e;
        s += e;
        if(e > my){
            my = e;
        }
    }
    p = s/5.0;
    cout << "El promedio de las edades es: " << p << " y la edad mayor es: " << my;

}