#include <iostream>

using namespace std;

int main() {
    int n1, n2, n3, n4, n5;
    cout << "Ingresa 5 numeros enteros: " << endl;
    cin >> n1 >> n2 >> n3 >> n4 >> n5;
    if(n1 < n2 && n1 < n3 && n1 < n4 && n1 < n5) cout << "El menor es " << n1;
    else if(n2 < n1 && n2 < n3 && n2 < n4 && n2 < n5) cout << "El menor es " << n2;
    else if(n3 < n1 && n3 < n2 && n3 < n4 && n3 < n5) cout << "El menor es " << n3;
    else if(n4 < n1 && n4 < n2 && n4 < n3 && n4 < n5) cout << "El menor es " << n4;
    else if(n5 < n1 && n5 < n2 && n5 < n3 && n5 < n4) cout << "El menor es " << n5;
}