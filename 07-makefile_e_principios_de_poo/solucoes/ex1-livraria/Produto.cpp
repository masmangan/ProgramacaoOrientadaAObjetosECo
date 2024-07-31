// Produto.cpp (Roland Teodorowitsch; 16 set. 2020)

#include <iostream>
#include <iomanip>
#include <sstream>
#include "Produto.hpp"

Produto::Produto() {
    nome = "";
    precoBase = 0.0;
    promocao = nullptr;
    cout << "+ Produto [] criado..." << endl;
}

Produto::Produto(string n, double p, Promocao *promo) {
    nome = n;
    precoBase = p;
    promocao = promo;
    cout << "+ Produto [" << nome << "] criado..." << endl;
}

Produto::~Produto() {
    cout << "- Produto [" << nome << "] destruido..." << endl;
}

string Produto::obtemNome() {
    return nome;
}

double Produto::obtemPrecoBase() {
    return precoBase;
}

double Produto::obtemPrecoFinal() {
    double desc;
    if (promocao == nullptr)
        desc = 0.0;
    else
        desc = promocao->obtemPercDesconto();
    return precoBase*(1.0 - desc);
}

Promocao *Produto::obtemPromocao() {
    return promocao;
}

void Produto::defineNome(string n) {
    nome = n;
}

void Produto::definePrecoBase(double p) {
    precoBase = p;
}

void Produto::definePromocao(Promocao *promo) {
    promocao = promo;
}

string Produto::str() {
    stringstream ss;
    ss << nome << " (";
    ss << fixed << setprecision(4) << precoBase;
    if (promocao != nullptr)
        ss << " - " << 100.0 * promocao->obtemPercDesconto() << "%"; 
    ss << " = " << obtemPrecoFinal() << ")";
    return ss.str();
}
