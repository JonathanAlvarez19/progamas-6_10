#include <iostream>
#include <graphics.h>

using namespace std;

int main() {

  int num1, num2, producto, x, y;
  char respuesta;

 
  cout << "Ingrese el primer número: ";
  cin >> num1;
  cout << "Ingrese el segundo número: ";
  cin >> num2;

 
  initwindow(800, 600);

  
  setcolor(BLACK);
  rectangle(50, 50, 750, 550);

  
  for (int i = 100; i <= 500; i += 50) {
    line(50, i, 750, i);
  }


  for (int i = 100; i <= 700; i += 50) {
    line(i, 50, i, 550);
  }

  
  setcolor(RED);
  outtextxy(100, 75, to_string(num1).c_str());
  outtextxy(700, 75, to_string(num2).c_str());

  
  producto = num1 * num2;

  
  setcolor(GREEN);
  outtextxy(375, 525, to_string(producto).c_str());

  
  cout << "¿Desea realizar otra operación? (s/n): ";
  cin >> respuesta;

  
  if (respuesta == 'n') {
    closegraph();
    return 0;
  }

  
  main();

  return 0;
}
