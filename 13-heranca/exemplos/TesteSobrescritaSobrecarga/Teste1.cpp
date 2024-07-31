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
};

int main() {
  Base b;
  b.funcao();
  Derivada d;
  d.funcao();
  return 0;
}
