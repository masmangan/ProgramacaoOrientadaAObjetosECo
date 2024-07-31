#ifdef DEBUG
#include <iostream>
#endif
#include <sstream>
#include "Produto.hpp"

Produto::Produto(string n, double pB, Promocao *p) {
  nome = n;  precoBase = pB;  promocao = p;
  #ifdef DEBUG
  cerr << "+ Produto(" << str()	 << ") criado..." << endl;
  #endif
}

Produto::~Produto() {
  #ifdef DEBUG
  cerr << "- Produto(" << str() << ") destruído..." << endl;
  #endif
}

string Produto::obtemNome() const { return nome; }
double Produto::obtemPrecoBase() const { return precoBase; }
double Produto::obtemPrecoFinal() const { return (promocao==nullptr)? precoBase : precoBase-precoBase*promocao->obtemPercDesconto(); }
Promocao *Produto::obtemPromocao() const { return promocao; }
void Produto::defineNome(string n) { nome = n; }
void Produto::definePrecoBase(double pB) { precoBase = pB; }
void Produto::definePromocao(Promocao *p) { promocao = p; }

string Produto::str() const {
  stringstream ss;
  ss << nome << "," << precoBase << ",";
  if ( promocao == nullptr ) ss << "nullptr";
  else ss << promocao->obtemPercDesconto();
  return ss.str();
}
