#include <iostream>
#include <fstream>
using namespace std;
int main()
{
string nombreEstudiante;
int edadEstudiante;
string cursos;
// Solicitar los datos al estudiante
cout << " Bienvenido al sistema!\n";
cout << "Por favor, ingrese su nombre: ";
getline(cin, nombreEstudiante);
cout << "Ingrese su edad: ";
cin >> edadEstudiante;
cin.ignore(); // Limpiar el b fer de entrada para getline?
cout << "Ingrese los cursos que est tomando (separados por comas): ";
getline(cin, cursos);
// Crear un archivo para almacenar los datos
ofstream archivoEstudiante("datos_estudiante.txt");
// Verificar si el archivo se abri correctamente?
if (archivoEstudiante.is_open()) {
// Escribir los datos en el archivo
archivoEstudiante << "Nombre: " << nombreEstudiante << endl;
archivoEstudiante << "Edad: " << edadEstudiante << endl;
archivoEstudiante << "Cursos: " << cursos << endl;
// Cerrar el archivo
archivoEstudiante.close();
cout << "Los datos se han guardado correctamente en datos_estudiante.txt'.\n";
} else {
cout << "No se pudo abrir el archivo para guardar los datos.\n";
}
return 0;
}

