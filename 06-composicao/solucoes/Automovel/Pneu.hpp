// Pneu.hpp (Roland Teodorowitsch; 5 abr. 2022)

#ifndef _PNEU_HPP
#define _PNEU_HPP

#include <iostream>
#include <string>

using namespace std;

class Pneu {
  private:
    string marca;
    double pressao;

  public:
    Pneu(string marca="original",double pressao=28.0);
    ~Pneu();
    void defineMarca(string mar);
    void definePressao(double pres);
    string obtemMarca();
    double obtemPressao();
    string str();
};

#endif
