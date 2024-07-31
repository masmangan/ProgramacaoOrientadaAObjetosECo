#ifndef _PRODUTO_HPP
#define _PRODUTO_HPP
#include "Promocao.hpp"

class Produto {
protected:
  string nome;
  double precoBase;
  Promocao *promocao;
public:
  Produto(string n="", double pB=0.0, Promocao *p=nullptr);
  ~Produto();
  string obtemNome() const;
  double obtemPrecoBase() const;
  double obtemPrecoFinal() const;
  Promocao *obtemPromocao() const;
  void defineNome(string n);
  void definePrecoBase(double pB);
  void definePromocao(Promocao *p);
  string str() const;
};
#endif
