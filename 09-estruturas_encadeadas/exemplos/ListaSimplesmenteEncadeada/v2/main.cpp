// main.cpp (Roland Teodorowitsch; 21 out. 2019)

#include <iostream>
#include "ListaSimplesmenteEncadeada.hpp"

using namespace std;

int main() {
  int res;

  cout << "--- FIFO ---" << endl;
  ListaSimplesmenteEncadeada *lseFIFO = new ListaSimplesmenteEncadeada(FIFO);
  lseFIFO->add(1);
  lseFIFO->add(3);
  lseFIFO->add(5);
  lseFIFO->add(4);
  lseFIFO->add(2);
  cout << "Lista: " << lseFIFO->toString() << endl;

  if ( lseFIFO->del(&res) == 1 )
     return 1;
  cout << "Retirou " << res << endl;
  cout << "Lista: " << lseFIFO->toString() << endl;

  if ( lseFIFO->del(&res) == 1 )
     return 1;
  cout << "Retirou " << res << endl;
  cout << "Lista: " << lseFIFO->toString() << endl;

  delete lseFIFO;

  cout << "--- LIFO ---" << endl;
  ListaSimplesmenteEncadeada *lseLIFO = new ListaSimplesmenteEncadeada(LIFO);
  lseLIFO->add(1);
  lseLIFO->add(3);
  lseLIFO->add(5);
  lseLIFO->add(4);
  lseLIFO->add(2);
  cout << "Lista: " << lseLIFO->toString() << endl;

  if ( lseLIFO->del(&res) == 1 )
     return 1;
  cout << "Retirou " << res << endl;
  cout << "Lista: " << lseLIFO->toString() << endl;

  if ( lseLIFO->del(&res) == 1 )
     return 1;
  cout << "Retirou " << res << endl;
  cout << "Lista: " << lseLIFO->toString() << endl;

  delete lseLIFO;

  return 0;
}
