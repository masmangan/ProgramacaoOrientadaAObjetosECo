// main.cpp (Roland Teodorowitsch; 18 set. 2019)

#include <iostream>
#include "Fracao.hpp"

using namespace std;

int main() {
  Fracao f1(1,3);
  Fracao f2(1,2);
  Fracao f3;
  f3 = soma(f1,f2);
  cout << f1.toString() << "+" << f2.toString() << "=" << f3.toString() << endl;
  f3 = subtracao(f1,f2);
  cout << f1.toString() << "-" << f2.toString() << "=" << f3.toString() << endl;
  f3 = multiplicacao(f1,f2);
  cout << f1.toString() << "*" << f2.toString() << "=" << f3.toString() << endl;
  f3 = divisao(f1,f2);
  cout << f1.toString() << "/" << f2.toString() << "=" << f3.toString() << endl;
  return 0;
}
