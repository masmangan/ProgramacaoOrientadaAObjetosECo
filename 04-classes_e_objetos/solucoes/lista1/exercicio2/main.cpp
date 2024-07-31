// main.cpp (Roland Teodorowitsch; 26 ago 2019)

#include <iostream>
#include "Pessoa.h"

using namespace std;

int main() {
  Pessoa paulo("Paulo",20,1.7);
  paulo.print();
  cout << "Nome:   " << paulo.obtemNome() << endl;
  cout << "Idade:  " << paulo.obtemIdade() << endl;
  cout << "Altura: " << paulo.obtemAltura() << endl;
  Pessoa *pedro = new Pessoa();
  pedro->defineNome("Pedro");
  pedro->defineIdade(30);
  pedro->defineAltura(1.82);
  pedro->print();
  delete pedro;  
  return 0;
}
