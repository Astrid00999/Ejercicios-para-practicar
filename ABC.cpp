
#include <iostream>

using namespace std;

int main() {
  // Elaborar un programa que lea la tecla que pulse el usuario y luego indique
  // si es letra mayúsucula, minuscula.

  unsigned char tecla;

int may,min,num,otr;

may = min = num = otr = 0;

do {
  cout << "Digite cualquier caracter" << endl;
  cin >> tecla;

  if (tecla >= 65 && tecla <= 90) {
    may = may +1;
    cout << " Se digito una letra mayuscula" << endl;
    cout << "" << endl;

  } else if (tecla >= 97 && tecla <= 122) {
    cout << " Se digito una letra minuscula" << endl;
    cout << "" << endl;
    min = min + 1;
  }

  else if (tecla >= 48 && tecla <= 59) {
    cout << "Se digito una tecla numerica" << endl;
    cout << "" << endl;
    num = num + 1;

  }

  else {
    cout << "Se digito otro tipo de tecla" << endl;
    cout << "" << endl;
    otr = otr + 1;
  }



}

while(tecla != 00); 

cout << " Numero de mayusculas: " << may << endl;
cout << " Numero de minusculas: " << min << endl;
cout << " Numero de teclas numericas: " << num << endl;
cout << " Numero de otros caracteres: " << otr << endl;


}