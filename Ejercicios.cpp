#include <math.h>

#include <iostream>

using namespace std;

int main(void) {
  int a, b, c;
  double subrad, x1, x2;

  cout << "Solucion de la ecuacion cuadratica" << endl;
  cout << "Digite los valores constantes" << endl;
  cout << "Digite a" << endl;
  cin >> a;

  cout << "Digite b" << endl;
  cin >> b;


  cout << "Digite c" << endl;
  cin >> c;

  subrad = pow(b, 2) - 4 * a * c;

  if (subrad < 0) {
    cout << "NO EXISTE SOLUCION EN LOS REALES" << endl;

  }

  else {
    if (subrad == 0) {
      cout << "Existe una sola raiz" << endl;
      x1 = -b / (2 * a);
      cout << "La raiz unica es " << x1 << endl;
    } else {
      x1 = (-b + sqrt(subrad)) / (2 * a);
      x2 = (-b - sqrt(subrad)) / (2 * a);

      cout << "La raices son x1:" << x1 << " y x2: " << x2 << endl; 
    }
  }

    return 0;
  }
