// Promocao.hpp (Roland Teodorowitsch; 16 set. 2020)

#ifndef _PROMOCAO_HPP_
#define _PROMOCAO_HPP_

#include <string>

using namespace std;

class Promocao {
  private:
    double percDesconto;
  public:
    Promocao(double pD = 0.0);
    Promocao(string nomePromocao);
    ~Promocao();
    void definePromocao(string nomePromocao);
    void definePercDesconto(double pD);
    double obtemPercDesconto();
};

#endif
