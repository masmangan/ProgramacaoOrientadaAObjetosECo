#include <iostream>
#include <sstream>
#include <cmath>
#include "Circulo.hpp"

double Circulo::calculaArea() const {  return M_PI * raio * raio;  }
double Circulo::calculaCircunferencia() const {  return 2.0 * M_PI * raio;  }
Circulo::Circulo() {  x = y = 0.0;  raio = 1.0;  }
Circulo::Circulo(double r) {  x = y = 0.0;  raio = r;  }
Circulo::Circulo(double px, double py) {  x = px;  y = py;  raio = 1.0;  }
Circulo::Circulo(double px, double py, double r) {  x = px;  y = py;  raio = r;  }
void Circulo::defineX(double px) {  x = px;  }
void Circulo::defineY(double py) {  y = py;  }
void Circulo::defineRaio(double r) {  raio = r;  }
void Circulo::escala(double fator) {  raio *= fator;  }
double Circulo::obtemX() const {  return x;  }
double Circulo::obtemY() const {  return y;  }
double Circulo::obtemRaio() const {  return raio;  }
double Circulo::obtemArea() const {  return calculaArea();  }
double Circulo::obtemCircunferencia() const {  return calculaCircunferencia();  }
bool Circulo::operator< (const Circulo &c) const {  return raio < c.obtemRaio();  }
bool Circulo::operator> (const Circulo &c) const {  return raio > c.obtemRaio();  }
ostream &operator<<(ostream &out,const Circulo &c) {  out << c.str();  return out;  }
istream &operator>>(istream &in,Circulo &c) {  in >> c.x >> c.y >> c.raio;  return in;  }

string Circulo::str() const {
  stringstream ss_point;
  ss_point << "x=" << x << "; y=" << y << "; raio=" << raio;
  return ss_point.str();
}
