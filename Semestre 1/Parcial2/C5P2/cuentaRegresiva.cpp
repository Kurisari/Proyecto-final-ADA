#include <iostream>

using namespace std;

int main() {
    for (int i = 1; i <= 5; i++){
        for(int j = 10; j >= 0; j--){
            cout << j << endl;
        }
        cout << "--------------------------------" << endl;
    }
}