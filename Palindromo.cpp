#include <iostream>
#include <string>
using namespace std;

bool esPalindromo(const string& palabra) {
    int inicio = 0;
    int fin = palabra.length() - 1;

    while (inicio < fin) {
        if (palabra[inicio] != palabra[fin]) {
            return false;
        }
        inicio++;
        fin--;
    }
    return true;
}

int main() {
    string entrada;
    cout << "Ingresa una palabra o numero: ";
    cin >> entrada;

    if (esPalindromo(entrada)) {
        cout << "¡Es un palindromo!" << endl;
    } else {
        cout << "No es un palindromo." << endl;
    }

    return 0;
}

