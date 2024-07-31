// contador.cpp (Roland Teodorowitsch; 20 mar. 2019)

#include <iostream>

using namespace std;

class Contador {
private:
  int valor;
public:
  Contador(int v = 0) {
    valor = v;
    #ifdef DEBUG
    cout << "+ Contador(" << valor << ") criado..." << endl;
    #endif
  }

  ~Contador() {
    #ifdef DEBUG
      cout << "- Contador(" << valor << ") destruído..." << endl;
    #endif
  }

  int obtemValor() {
    return valor;
  }

  void incrementa() {
    valor = valor + 1;
  }

  void defineValor(int v) {
    valor = v;
  }

  void zera() {
    valor = 0;
  }

};

int main() {
  int i;

  Contador c1; // Novo contador com valor inicial 0
  for (i=0;i<3;++i)
      c1.incrementa();
  cout << "Contador1 = " << c1.obtemValor() << endl;

  cout << "Antes do if..." << endl;
  if ( true ) {
     Contador c3;
     c3.incrementa();
     cout << "Contador3 = " << c3.obtemValor() << endl;
  }
  cout << "Depois do if..." << endl;

  Contador *c2;
  c2 = new Contador(5); // Contador com valor 5
  for (i=0;i<4;++i)
      c2->incrementa();
  cout << "Contador2 = " << c2->obtemValor() << endl;
  delete c2;

  return 0;
}


