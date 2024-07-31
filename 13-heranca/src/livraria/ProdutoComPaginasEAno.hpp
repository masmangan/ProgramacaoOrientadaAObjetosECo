#ifndef _PRODUTOCOMPAGINASEANO_HPP
#define _PRODUTOCOMPAGINASEANO_HPP
#include "ProdutoComPaginas.hpp"

class ProdutoComPaginasEAno : public ProdutoComPaginas {
protected:
  int ano;
public:
  ProdutoComPaginasEAno(string n="", double pB=0.0, Promocao *p=nullptr, int pg=0, int a=0);
  ~ProdutoComPaginasEAno();
  int obtemAno() const;
  void defineAno(int pg);
  string str() const;
};
#endif
