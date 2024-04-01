#include <iostream>
using namespace std;

int main() {
    int opcion;
    double valor;

    cout << "Selecciona la conversion que deseas realizar:" << endl;
    cout << "1. Kilometros a Millas" << endl;
    cout << "2. Metros a Pulgadas" << endl;
    cout << "3. Libras a Kilogramos" << endl;
    cout << "4. Salir" << endl;
    cin >> opcion;

    switch (opcion) {
        case 1:
            cout << "Ingresa la cantidad en kilometros: ";
            cin >> valor;
            cout << valor << " kilometros son aproximadamente " << valor * 0.62137119 << " millas." << endl;
            break;
        case 2:
            cout << "Ingresa la cantidad en metros: ";
            cin >> valor;
            cout << valor << " metros son aproximadamente " << valor * 39.3700787 << " pulgadas." << endl;
            break;
        case 3:
            cout << "Ingresa la cantidad en libras: ";
            cin >> valor;
            cout << valor << " libras son aproximadamente " << valor * 0.45359237 << " kilogramos." << endl;
            break;
        case 4:
            cout << "¡Hasta luego!" << endl;
            break;
        default:
            cout << "Opción no válida. Por favor selecciona una opción válida." << endl;
    }

    return 0;
}

