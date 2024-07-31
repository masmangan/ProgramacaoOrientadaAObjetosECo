#include <iostream>

using namespace std;

class Teste {
private:
  int valor;
public:
  Teste(int v = 0) { valor = v; }
  void defineValor(int v) { valor = v; }
  int obtemValor() { return valor; }
  Teste operator+(Teste &v) {
    Teste res ( valor + v.obtemValor() );
    return res;
  }
};

/*
Teste operator+(Teste &v1, Teste &v2) {
  Teste res( v1.obtemValor() + v2.obtemValor() );
  return res;
}
*/

int main() {
  Teste a(10), b(20), c;

  c = a + b;

  cout << c.obtemValor() << endl;

  return 0;
}

