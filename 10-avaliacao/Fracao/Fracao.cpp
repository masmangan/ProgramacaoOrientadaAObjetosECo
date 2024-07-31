// Fracao.cpp (Roland Teodorowitsch; 18 set. 2019)

#include <sstream>
#include "Fracao.hpp"

Fracao::Fracao(int n, int d) {
  numerador = n;
  denominador = d;
}

Fracao::~Fracao() {}

void Fracao::simplifica() {
  if ( numerador == denominador ) {
     numerador = 1;
     denominador = 1;
  }
}

void Fracao::defineNumerador(int n) {
  numerador = n;
}

void Fracao::defineDenominador(int d) {
  denominador = d;
}

int Fracao::obtemNumerador() {
  return numerador;
}

int Fracao::obtemDenominador() {
  return denominador;
}

string Fracao::toString() {
  stringstream ss;
  ss << "(" << numerador << "/" << denominador << ")";
  return ss.str();
}

int mdc(int a, int b) {
  int r;
  while (b != 0) {
        r = a % b;
        a = b;
        b = r;
  }
  return a;
}

int mmc(int a, int b) {
  return a * b / mdc(a, b);
}

Fracao soma(Fracao& f1, Fracao& f2) {
  Fracao res;
  int valMMC = mmc(f1.obtemDenominador(), f2.obtemDenominador());
  res.defineDenominador( valMMC );
  res.defineNumerador( ( valMMC / f1.obtemDenominador() ) * f1.obtemNumerador() + ( valMMC / f2.obtemDenominador() ) * f2.obtemNumerador() );
  return res;
}

Fracao subtracao(Fracao& f1, Fracao& f2) {
  Fracao res;
  int valMMC = mmc(f1.obtemDenominador(), f2.obtemDenominador());
  res.defineDenominador( valMMC );
  res.defineNumerador( ( valMMC / f1.obtemDenominador() ) * f1.obtemNumerador() - ( valMMC / f2.obtemDenominador() ) * f2.obtemNumerador() );
  return res;
}

Fracao multiplicacao(Fracao& f1, Fracao& f2) {
  Fracao res;
  res.defineNumerador(f1.obtemNumerador()*f2.obtemNumerador());
  res.defineDenominador(f1.obtemDenominador()*f2.obtemDenominador());
  return res;
}

Fracao divisao(Fracao& f1, Fracao& f2) {
  Fracao res;
  res.defineNumerador(f1.obtemNumerador()*f2.obtemDenominador());
  res.defineDenominador(f1.obtemDenominador()*f2.obtemNumerador());
  return res;
}

