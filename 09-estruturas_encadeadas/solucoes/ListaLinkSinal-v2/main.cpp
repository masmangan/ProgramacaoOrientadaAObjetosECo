// main.cpp (Roland Teodorowitsch; 21 out. 2019)

#include <iostream>
#include "ListaLinkSinal.hpp"

using namespace std;

int main() {
  ListaLinkSinal *lls = new ListaLinkSinal();
  lls->add(10);
  lls->add(9);
  lls->add(2);
  lls->add(-15);
  lls->add(22);
  lls->add(-122);
  cout << "Positivos: " << lls->soPositivos() << endl;
  cout << "Negativos: " << lls->soNegativos() << endl;
  delete lls;
  return 0;
}
