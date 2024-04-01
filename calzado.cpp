#include <iostream>
#include <stdlib.h>
#include "conio.h"

using namespace std;

int main () {

	int calzado, nace;
	
	cout<<"Favor ingresar talla de calzado: ";
	cin>> calzado;
	
	cout<<"Favor ingresar año de nacimiento: ";
	cin>> nace;
	
	cout<<"Los 2 primeros digitos son la talla y los 2 ultimos la edad; "<<
		   ((calzado*5+50)*20+1019-nace);
	
	_getch();
}
