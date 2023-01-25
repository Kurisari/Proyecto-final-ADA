#include <iostream>

using namespace std;

int main() {
    char ltr;
    cout << "Escribe una letra: ";
    cin >> ltr;
    while (ltr == 's' or ltr == 'S'){
        cout << "Escribe otra letra: ";
        cin >> ltr;
    }
}