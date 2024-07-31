// CaixaRegistradora.cpp

#include <iostream>
#include "CaixaRegistradora.hpp"

CaixaRegistradora::CaixaRegistradora() {
	limpa();
	cout << "+ CaixaRegistradora criada..." << endl;
}

CaixaRegistradora::~CaixaRegistradora() {
	cout << "- CaixaRegistradora destruida..." << endl;
}

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

