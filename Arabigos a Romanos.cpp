#include <iostream>
using namespace std;

string convertirARomano(int numero) {
    const string unidades[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
    const string decenas[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
    const string centenas[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};

    string resultado = "";

    // Convertir miles
    while (numero >= 1000) {
        resultado += "M";
        numero -= 1000;
    }

    // Convertir centenas
    resultado += centenas[numero / 100];
    numero %= 100;

    // Convertir decenas
    resultado += decenas[numero / 10];
    numero %= 10;

    // Convertir unidades
    resultado += unidades[numero];

    return resultado;
}

int main() {
    int numero;
    cout << "Ingresa un numero arabigo (minimo 1,000): ";
    cin >> numero;

    if (numero >= 1000) {
        string romano = convertirARomano(numero);
        cout << "El numero " << numero << " en romano es: " << romano << endl;
    } else {
        cout << "El numero debe ser igual o mayor a 1,000." << endl;
    }

    return 0;
}

