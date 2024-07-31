// Fracao.hpp (Roland Teodorowitsch; 18 set. 2019)
#ifndef _FRACAO_HPP
#define _FRACAO_HPP

#include <string>

using namespace std;

class Fracao {
  private:
    int numerador;
    int denominador;
    void simplifica();
  public:
    Fracao(int n=0, int d=1);
    ~Fracao();
    void defineNumerador(int n);
    void defineDenominador(int d);
    int obtemNumerador();
    int obtemDenominador();
    string toString();
};

int mdc(int a, int b);
int mmc(int a, int b);
Fracao soma(Fracao& f1, Fracao& f2);
Fracao subtracao(Fracao& f1, Fracao& f2);
Fracao multiplicacao(Fracao& f1, Fracao& f2);
Fracao divisao(Fracao& f1, Fracao& f2);

#endif
