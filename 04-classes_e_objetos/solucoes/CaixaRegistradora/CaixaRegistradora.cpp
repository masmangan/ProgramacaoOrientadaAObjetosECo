// CaixaRegistradora.cpp

#include <iostream>
#include "CaixaRegistradora.hpp"

using namespace std;

CaixaRegistradora::CaixaRegistradora() {
  limpa();
  cout << "CaixaRegistradora construida..." << endl;
}

CaixaRegistradora::~CaixaRegistradora() {
  cout << "CaixaRegistradora destruida..." << endl;
}

void CaixaRegistradora::adicionaItem(double preco) {
  ++numItens;
  precoTotal = precoTotal + preco;
}

double CaixaRegistradora::obtemTotal() {
  return precoTotal;
}

int CaixaRegistradora::obtemNumItens() {
  return numItens;
}

void CaixaRegistradora::limpa() {
  precoTotal = 0.0;
  numItens = 0;
}
