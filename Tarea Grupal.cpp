#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int opcion;

    // Mostrar el men� de opciones al usuario
    cout << "Seleccione una opcion:" << endl;
    cout << "1. Ejecutar Programa Suma,resta,muliplicacion y division" << endl;
    cout << "2. Ejecutar Programa Par e impar" << endl;
    cout << "3. Ejecutar Programa Palindromo" << endl;
    cout << "4. Ejecutar Programa Conversion" << endl;
    cout << "5. Ejecutar Programa Arabigos a Romanos" << endl;
    cout << "6. Ejecutar Programa Numero a letra" << endl;
    cout << "7. Ejecutar Programa num_letra_decimal" << endl;
    cout << "8. Ejecutar Programa tabla multi" << endl;
    cout << "9. Ejecutar Programa tabla multi 1_10" << endl;
    cout << "10. Ejecutar Programa calculadora grafica" << endl;
    cout << "11. Ejecutar Programa Decimales a Binarios" << endl;
    cout << "12. Ejecutar Programa Decimales a Hexadecimales" << endl;
    cout << "13. Ejecutar Programa Crear Figuras Geometrias Basicas" << endl;
    cout << "14. Ejecutar Programa Mover un Punto en Pantalla" << endl;
    cout << "15. Ejecutar Programa Cajero Automatico" << endl;
    cout << "16. Ejecutar Programa hipotenusa" << endl;
    cout << "17. Ejecutar Programa calculadora" << endl;
    cout << "18. Ejecutar Programa calzado" << endl;
    cout << "19. Ejecutar Programa cursos" << endl;
    cout << "20. Ejecutar Programa usuario de consola" << endl;
    cout << "Ingrese el numero de la opcion: ";
    cin >> opcion;

    // Ejecutar el programa correspondiente seg�n la opci�n seleccionada
    switch (opcion) {
        case 1:
            if (system("C:\\Proyecto_Grupal\\Suma,resta,muliplicacion y division.exe") != 0) {
                cout << "Programa no encontrado." << endl;
            }
            break;
        case 2:
            if (system("C:\\Proyecto_Grupal\\Par e impar.exe") != 0) {
                cout << "Programa no encontrado." << endl;
            }
            break;
        case 3:
            if (system("C:\\Proyecto_Grupal\\Palindromo.exe") != 0) {
                cout << "Programa no encontrado." << endl;
            }
            break;
        case 4:
            if (system("C:\\Proyecto_Grupal\\Conversion.exe") != 0) {
                cout << "Programa no encontrado." << endl;
            }
            break;
        case 5:
            if (system("C:\\Proyecto_Grupal\\Arabigos a Romanos.exe") != 0) {
                cout << "Programa no encontrado." << endl;
            }
            break;
        case 6:
            if (system("C:\\Proyecto_Grupal\\Numero a letra.exe") != 0) {
                cout << "Programa no encontrado." << endl;
            }
            break;
        case 7:
            if (system("C:\\Proyecto_Grupal\\num_letra_decimal.exe") != 0) {
                cout << "Programa no encontrado." << endl;
            }
            break;
        case 8:
            if (system("C:\\Proyecto_Grupal\\tabla multi.exe") != 0) {
                cout << "Programa no encontrado." << endl;
            }
            break;
        case 9:
            if (system("C:\\Proyecto_Grupal\\tabla multi 1_10.exe") != 0) {
                cout << "Programa no encontrado." << endl;
            }
            break;
        case 10:
            if (system("C:\\Proyecto_Grupal\\calculadora grafica.exe") != 0) {
                cout << "Programa no encontrado." << endl;
            }
            break;
        case 11:
            if (system("C:\\Proyecto_Grupal\\decimales a binarios.exe") != 0) {
                cout << "Programa no encontrado." << endl;
            }
            break;
        case 12:
            if (system("C:\\Proyecto_Grupal\\Decimales a Hexadecimal.exe") != 0) {
                cout << "Programa no encontrado." << endl;
            }
            break;
        case 13:
            if (system("C:\\Proyecto_Grupal\\Figuras Geometricas.exe") != 0) {
                cout << "Programa no encontrado." << endl;
            }
            break;
        case 14:
            if (system("C:\\Proyecto_Grupal\\Mover Punto.exe") != 0) {
                cout << "Programa no encontrado." << endl;
            }
            break;
        case 15:
            if (system("C:\\Proyecto_Grupal\\Cajero Automatico.exe") != 0) {
                cout << "Programa no encontrado." << endl;
            }
            break;
        case 16:
            if (system("C:\\Proyecto_Grupal\\hipotenusa.exe") != 0) {
                cout << "Programa no encontrado." << endl;
            }
            break;
        case 17:
            if (system("C:\\Proyecto_Grupal\\calculadora.exe") != 0) {
                cout << "Programa no encontrado." << endl;
            }
            break;
        case 18:
            if (system("C:\\Proyecto_Grupal\\calzado.exe") != 0) {
                cout << "Programa no encontrado." << endl;
            }
            break;
        case 19:
            if (system("C:\\Proyecto_Grupal\\cursos.exe") != 0) {
                cout << "Programa no encontrado." << endl;
            }
            break;
        case 20:
            if (system("C:\\Proyecto_Grupal\\usuario de consola.exe") != 0) {
                cout << "Programa no encontrado." << endl;
            }
            break;
        default:
            cout << "Opcion no valida." << endl;
            break;
    }

    return 0;
}
