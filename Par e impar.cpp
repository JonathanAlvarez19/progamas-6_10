#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Ingresa un Numero: ";
    cin >> num;

    if (num % 2 == 0) {
        cout << "\nEl Numero es par" << endl;
    } else {
        cout << "\nEl Numero es impar" << endl;
    }

    return 0;
}

