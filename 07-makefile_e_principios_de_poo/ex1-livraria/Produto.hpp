// Produto.hpp (Roland Teodorowitsch; 16 set. 2020)

#ifndef _PRODUTO_HPP_
#define _PRODUTO_HPP_

#include <string>
#include "Promocao.hpp"

using namespace std;

class Produto {
    private:
        string nome;
        double precoBase;
        Promocao *promocao;
  public:
        Produto();
        Produto(string n, double p, Promocao *promo);
        ~Produto();
        string obtemNome();
        double obtemPrecoBase();
        double obtemPrecoFinal();
        Promocao *obtemPromocao();
        void defineNome(string n);
        void definePrecoBase(double p);
        void definePromocao(Promocao *promo);
        string str();
};

#endif
