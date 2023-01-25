#include <iostream>

using namespace std;

int main() {
    int s;
    cout << "Ingresa el sueldo del empleado" << endl;
    cin >> s;
    if(s < 1000){
        s = s*1.15;
    }
    cout << "El sueldo final es " << s;
}