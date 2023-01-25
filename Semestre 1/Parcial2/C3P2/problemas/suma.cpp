#include <iostream>

using namespace std;

int main() {
    float s, n;
    n = 0;
    do{
        cout << "Ingresa un numero: ";
        cin >> n;
        s += n;
    } while (n != 9999);
    s = s - 9999;
    cout << "La suma total es " << s << endl;
    if (s > 0){
        cout << "La suma total es mayor a 0";
    } else if (s < 0){
        cout << "La suma es menor a 0";
    } else{
        cout << "La suma es 0";
    }
}