#include <iostream>
#include "Circulo.hpp"

int main() {
  Circulo c1, c2(2.0), c3(3.0,3.0), c4(4.0,4.0,2.0), c5;
  cout << "c1 = { " << c1 << " }" << endl;
  cout << "c2 = { " << c2 << " }" << endl;
  cout << "c3 = { " << c3 << " }" << endl;
  cout << "c4 = { " << c4 << " }" << endl;
  cout << "c5 = { " << c5 << " }" << endl;
  c1.defineX(1.0);
  c1.defineY(1.0);
  c2.defineX(2.0);
  c2.defineY(2.0);
  c3.defineRaio(3.0);
  c4.escala(2.0);
  cout << "Circulo(x,y,raio)? "; cin >> c5;
  cout << "c1 = { " << c1 << " }" << endl;
  cout << "c2 = { " << c2 << " }" << endl;
  cout << "c3 = { " << c3 << " }" << endl;
  cout << "c4 = { " << c4 << " }" << endl;
  cout << "c5 = { " << c5 << " }" << endl;
  cout << c1.obtemX() << endl;
  cout << c2.obtemY() << endl;
  cout << c3.obtemRaio() << endl;
  cout << c4.obtemArea() << endl;
  cout << c3.obtemCircunferencia() << endl;
  if (c5 > c2) cout << "OK" << endl;
  if (c3 < c4) cout << "OK" << endl;
  return 0;
}
