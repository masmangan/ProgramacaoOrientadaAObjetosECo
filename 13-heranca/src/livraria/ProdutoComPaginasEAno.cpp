#ifdef DEBUG
#include <iostream>
#endif
#include <sstream>
#include "ProdutoComPaginasEAno.hpp"

ProdutoComPaginasEAno::ProdutoComPaginasEAno(string n, double pB, Promocao *p, int pg, int a) : ProdutoComPaginas(n,pB,p,pg) {
  ano = a;
  #ifdef DEBUG
  cerr << "+ ProdutoComPaginasEAno(" << str() << ") criado..." << endl;
  #endif
}

ProdutoComPaginasEAno::~ProdutoComPaginasEAno() {
  #ifdef DEBUG
  cerr << "- ProdutoComPaginasEAno(" << str() << ") destruído..." << endl;
  #endif
}

int ProdutoComPaginasEAno::obtemAno() const { return ano; }
void ProdutoComPaginasEAno::defineAno(int a) { ano = a; }

string ProdutoComPaginasEAno::str() const {
  stringstream ss;
  ss << ProdutoComPaginas::str() << "," << ano;
  return ss.str();
}

