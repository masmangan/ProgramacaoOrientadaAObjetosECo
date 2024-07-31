#include <iostream>

using namespace std;

class Base {
  public:
    void funcao() {
      cout << "Base::funcao()" << endl;
    }
};

class Derivada : public Base {
  public:
    void funcao() {
      cout << "Derivada::funcao()" << endl;
    }
    void funcao(int v) {
      cout << "Derivada::funcao(" << v << ")" << endl;
    }
};

int main() {
  Base b;
  b.funcao();
  Derivada d;
  d.funcao();
  d.funcao(10);
  return 0;
}
