//CR/SP

#include <iostream>

using namespace std;

void validacion();
int main() {
    validacion();
}

void validacion(){
    int num;
    cout << "Ingresa un numero para validar: ";
    cin >> num;
    if(num < 1 or num > 5){
        cout << "Numero no valido";
    } else{
        cout << "Numero valido";
    }
}