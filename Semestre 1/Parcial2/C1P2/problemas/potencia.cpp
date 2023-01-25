#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float a, b, r, s, p;
    cout << "Ingresa A" << endl;
    cin >> a;
    cout << "Ingresa B" << endl;
    cin >> b;
    s=a+b;
    p=2.0/3.0;
    r = pow(s,p);
    cout << "El resultado es " << r;
}