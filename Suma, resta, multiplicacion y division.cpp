#include <iostream>
using namespace std;

int main() {
    float num1, num2;
    cout << "Ingresa el primer Numero: ";
    cin >> num1;

    cout << "Ingresa el segundo Numero: ";
    cin >> num2;

    // Suma
    float suma = num1 + num2;
    cout << "La suma de los dos Numeros es: " << suma << endl;

    // Resta
    float resta = num1 - num2;
    cout << "La resta de los dos Numeros es: " << resta << endl;

    // Multiplicación
    float multiplicacion = num1 * num2;
    cout << "La multiplicación de los dos Numeros es:  " << multiplicacion << endl;

    // División
    if (num2 != 0) {
        float division = num1 / num2;
        cout << "La division de los dos Numeros es: " << division << endl;
    } else {
        cout << "No se puede dividir entre cero." << endl;
    }

    return 0;
}
