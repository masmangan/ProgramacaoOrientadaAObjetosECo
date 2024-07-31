#include <iostream>

using namespace std;

class Base {
  protected:
    int i;
  public:
    Base(int p) {
      i = p;
      cout << "> Construtor de Base(" << i << ") chamado..." << endl;
    }
    ~Base() {
      cout << "> Destrutor de Base(" << i << ") chamado..." << endl;
    }
    int getI() {
      return i;
    }
};

class Derivada : public Base {
  public:
    Derivada(int p) : Base(p) {
      cout << "> Construtor de Derivada(" << i << ") chamado..." << endl;
    }
    ~Derivada() {
      cout << "> Destrutor de Derivada(" << i << ") chamado..." << endl;
    }
};

int main() {
  Derivada *derivada = new Derivada(123);
  delete derivada;
  return 0;
}

