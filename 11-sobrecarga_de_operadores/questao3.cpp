#include <iostream>

using namespace std;

class Fracao {
private:
  int numerador, denominador;
  int mdc(int a, int b) {
    int r = 0;
    while (b != 0) {
        r = a % b;  a = b;  b = r;
    }
    return a;
  }
  void simplifica() {
    int _mdc = mdc(numerador, denominador);
    numerador /= _mdc;
    denominador /= _mdc;
  }
public:
  Fracao(int n, int d) {
    numerador = n;
    denominador = d;
    simplifica();
  }
  Fracao(int n, const Fracao &f) {
    numerador = n * f.denominador;
    denominador = f.numerador;
    simplifica();
  }
  Fracao(const Fracao &f, int n) {
    numerador = f.numerador;
    denominador = f.denominador * n;
    simplifica();
  }
  Fracao(const Fracao &f1, const Fracao &f2) {
    numerador = f1.numerador * f2.denominador;
    denominador = f1.denominador * f2.numerador;
    simplifica();
  }
  int obtemNumerador() const { return numerador; }
  int obtemDenominador() const { return denominador; }
  void defineNumerador(int n) { numerador = n;  simplifica(); }
  void defineDenominador(int d) { denominador = d;  simplifica(); }
  Fracao operator+(const Fracao &f) const {
    int d, n;
    if ( denominador == f.denominador ) {
       n = numerador + f.numerador;
       d = denominador;
    }
    else {
       d = denominador * f.denominador;
       n = numerador * f.denominador + f.numerador * denominador;
    }
    return Fracao(n,d);
  }
  Fracao operator+(const int i) const {
    int d, n;
    if ( denominador == 1 ) {
       n = numerador + i;
       d = 1;
    }
    else {
       d = denominador;
       n = numerador + i * denominador;
    }
    return Fracao(n,d);
  }
  Fracao operator*(const Fracao &f) const {
    return Fracao( numerador * f.numerador, denominador * f.denominador );
  }
  Fracao operator/(const Fracao &f) const {
    return Fracao( numerador * f.denominador, denominador * f.numerador );
  }
  bool operator==(const Fracao &f) const {
    return numerador == f.numerador && denominador == f.denominador;
  }
  friend ostream &operator<<(ostream &out, const Fracao &f) {
    out << f.numerador;
    if ( f.denominador != 1 )
       out << "/" << f.denominador;
    return out;
  }
  friend Fracao operator+(const int i, const Fracao &f) {
    int d, n;
    if ( f.denominador == 1 ) {
       n = f.numerador + i;
       d = 1;
    }
    else {
       d = f.denominador;
       n = f.numerador + i * f.denominador;
    }
    return Fracao(n,d);
  }
};

int main() {
  Fracao vinte_e_tres_setimos(23,7);
/*
  for (int u=1; u<=8; u++) {
      for (int v=1; v<=8; v++) {
          for (int w=1; w<=8; w++) {
              Fracao d1(v,1), d2(1,w+1), d3 = d1+d2;
              Fracao n1(u,1), um(1,1), n2 = um / d3;
              Fracao res = n1 + n2;
              if ( res == vinte_e_tres_setimos )
                 cout << "u=" << u << " v=" << v << " w=" << w << endl;
          }
      }
  }
*/
  for (int u=1; u<=8; u++) {
      for (int v=1; v<=8; v++) {
          for (int w=1; w<=8; w++) {
              Fracao res = u + Fracao(1, v + Fracao(1,w+1) );
              if ( res == vinte_e_tres_setimos ) {
                 cout << "u = " << u << "  v = " << v << "  w = " << w << endl;
                 cout << "u + v + w = " << u+v+w << endl;
              }

          }
      }
  }
  return 0;
}

