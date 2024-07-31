#ifndef _PRODUTOCOMPAGINAS_HPP
#define _PRODUTOCOMPAGINAS_HPP
#include "Produto.hpp"

class ProdutoComPaginas : public Produto {
protected:
  int paginas;
public:
  ProdutoComPaginas(string n="", double pB=0.0, Promocao *p=nullptr, int pg=0);
  ~ProdutoComPaginas();
  int obtemPaginas() const;
  void definePaginas(int pg);
  string str() const;
};
#endif
