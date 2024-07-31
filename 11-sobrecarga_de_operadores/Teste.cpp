#include <iostream>

using namespace std;

class X {
private:
  int valor;
public:
  X(int v = 0) { valor = v; }
  int obtemValor() { return valor; }
  void defineValor(int v) { valor = v; }
};

class Y {
private:
  int *valor;
public:
  Y(int v = 0) { valor = new int; *valor = v; }
  ~Y() {  delete valor; }
  int obtemValor() { return *valor; }
  void defineValor(int v) { *valor = v; }
  void operator=(Y &o) { *valor = o.obtemValor(); } //return *this;	 }
};

int main() {
  X x1(10), x2;
  cout << "x1.obtemValor()= " << x1.obtemValor() << endl;
  cout << "x2.obtemValor()= " << x2.obtemValor() << endl;
  x2 = x1;
  cout << "x1.obtemValor()= " << x1.obtemValor() << endl;
  cout << "x2.obtemValor()= " << x2.obtemValor() << endl;
  x2.defineValor(30);
  cout << "x1.obtemValor()= " << x1.obtemValor() << endl;
  cout << "x2.obtemValor()= " << x2.obtemValor() << endl;
  cout << endl;

  Y y1(10), y2;
  cout << "y1.obtemValor()= " << y1.obtemValor() << endl;
  cout << "y2.obtemValor()= " << y2.obtemValor() << endl;
  y2 = y1;
  cout << "y1.obtemValor()= " << y1.obtemValor() << endl;
  cout << "y2.obtemValor()= " << y2.obtemValor() << endl;
  y2.defineValor(30);
  cout << "y1.obtemValor()= " << y1.obtemValor() << endl;
  cout << "y2.obtemValor()= " << y2.obtemValor() << endl;
  cout << endl;

  return 0;  
}
