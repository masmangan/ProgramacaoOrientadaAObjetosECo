#ifndef _CIRCULO_HPP
#define _CIRCULO_HPP
#include <string>
using namespace std;

class Circulo {
private:
  double x, y, raio;
  double calculaArea() const;
  double calculaCircunferencia() const;
public:
  Circulo();
  Circulo(double r);
  Circulo(double px, double py);
  Circulo(double px, double py, double r);
  void     defineX(double px);
  void     defineY(double py);
  void     defineRaio(double raio);
  void     escala(double fator);
  double   obtemX() const;
  double   obtemY() const;
  double   obtemRaio() const;
  double   obtemArea() const;
  double   obtemCircunferencia() const;
  bool     operator< (const Circulo &c) const;
  bool     operator> (const Circulo &c) const;
  string   str() const;
  friend ostream &operator<< (ostream &out,const Circulo &c);
  friend istream &operator>> (istream &in,Circulo &c);
};
#endif
