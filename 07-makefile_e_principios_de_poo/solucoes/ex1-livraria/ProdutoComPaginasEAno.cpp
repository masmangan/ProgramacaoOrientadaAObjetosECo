// ProdutoComPaginasEAno.cpp (Roland Teodorowitsch; 16 set. 2020)

#include <iostream>
#include <sstream>
#include "ProdutoComPaginasEAno.hpp"

ProdutoComPaginasEAno::ProdutoComPaginasEAno() {
    ano = 0;
    cout << "+ ProdutoComPaginasEAno [] criado..." << endl;
}

ProdutoComPaginasEAno::ProdutoComPaginasEAno(string n, double p, int pg, int a, Promocao *promo) {
    produto.defineNome(n);
    produto.definePrecoBase(p);
    produto.definePaginas(pg);
    ano = a;
    produto.definePromocao(promo);
    cout << "+ ProdutoComPaginasEAno [" << produto.obtemNome() << "] criado..." << endl;
}

ProdutoComPaginasEAno::~ProdutoComPaginasEAno() {
    cout << "- ProdutoComPaginasEAno [" << produto.obtemNome() << "] destruido..." << endl;
}

string ProdutoComPaginasEAno::obtemNome() {
    return produto.obtemNome();
}

double ProdutoComPaginasEAno::obtemPrecoBase() {
    return produto.obtemPrecoBase();
}

double ProdutoComPaginasEAno::obtemPrecoFinal() {
    double desc;
    Promocao *promocao = produto.obtemPromocao();
    if (promocao == nullptr)
        desc = 0.0;
    else
        desc = promocao->obtemPercDesconto();
    return produto.obtemPrecoBase()*(1.0 - desc);
}

int ProdutoComPaginasEAno::obtemPaginas() {
    return produto.obtemPaginas();
}

int ProdutoComPaginasEAno::obtemAno() {
    return ano;
}

Promocao *ProdutoComPaginasEAno::obtemPromocao() {
    return produto.obtemPromocao();
}

void ProdutoComPaginasEAno::defineNome(string n) {
    produto.defineNome(n);
}

void ProdutoComPaginasEAno::definePrecoBase(double p) {
    produto.definePrecoBase(p);
}

void ProdutoComPaginasEAno::definePaginas(int pg) {
    produto.definePaginas(pg);
}

void ProdutoComPaginasEAno::defineAno(int a) {
    ano = a;
}

void ProdutoComPaginasEAno::definePromocao(Promocao *promo) {
    produto.definePromocao(promo);
}

string ProdutoComPaginasEAno::str() {
    stringstream ss;
    ss << produto.str() << "; ";
    ss << ano;
    return ss.str();
}
