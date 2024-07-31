// heranca1.cpp (Roland Teodorowitsch; 18/05/2019)

#include <iostream>

using namespace std;

class Base {
  private:
    int valor;
  public:
    Base(int v = 0);
    ~Base();
    int obtemValor();
    void defineValor(int v);
};

Base::Base(int v) {
  cout << "Construtor para Base chamado (" << v << ")" << endl;
  valor = v;
}

Base::~Base() {
  cout << "Destrutor para Base chamado (" << valor << ")" << endl;
}

int Base::obtemValor() {
  return valor;
}

void Base::defineValor(int v) {
  valor = v;
}

class Derivada : public Base {
  private:
    bool eh_par;
  public:
    Derivada(int v = 0);
    ~Derivada();
    void defineValor(int v);
    bool ehPar();
};

Derivada::Derivada(int v) : Base(v) {
  cout << "Construtor para Derivada chamado (" << v << ")" << endl;
  if (v % 2 == 0)
     eh_par = true;
  else
     eh_par = false;
}

Derivada::~Derivada() {
  cout << "Destrutor para Derivada chamado (" << obtemValor() << ")" << endl;
}

void Derivada::defineValor(int v) {
  Base::defineValor(v);
  if (v % 2 == 0)
     eh_par = true;
  else
     eh_par = false;
}

bool Derivada::ehPar() {
  return eh_par;
}

int main() {
  //Base b(1);
  //b.defineValor(b.obtemValor()+1);
  //cout << b.obtemValor() << endl;

  Derivada d(3);
  cout << d.obtemValor() << " " << (d.ehPar()?"PAR":"IMPAR")	 << endl;
  d.defineValor(d.obtemValor()+1);
  cout << d.obtemValor() << " " << (d.ehPar()?"PAR":"IMPAR") << endl;
  return 0;
}

