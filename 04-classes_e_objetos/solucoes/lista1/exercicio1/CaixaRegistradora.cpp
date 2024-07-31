// CaixaRegistradora.cpp (Roland Teodorowitsch; 26 ago. 2019)

#include "CaixaRegistradora.h"

CaixaRegistradora::CaixaRegistradora() {
  precoTotal = 0.0;
  numItens = 0;
}

CaixaRegistradora::~CaixaRegistradora(){}

void CaixaRegistradora::adicionaItem(double preco) {
  precoTotal += preco;
  ++numItens;
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

