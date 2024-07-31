// ProdutoComPaginas.cpp (Roland Teodorowitsch; 16 set. 2020)

#include <iostream>
#include <sstream>
#include "ProdutoComPaginas.hpp"

ProdutoComPaginas::ProdutoComPaginas() {
    paginas = 0;
    cout << "+ ProdutoComPaginas [] criado..." << endl;
}

ProdutoComPaginas::ProdutoComPaginas(string n, double p, int pg, Promocao *promo) {
    produto.defineNome(n);
    produto.definePrecoBase(p);
    paginas = pg;
    produto.definePromocao(promo);
    cout << "+ ProdutoComPaginas [" << produto.obtemNome() << "] criado..." << endl;
}

ProdutoComPaginas::~ProdutoComPaginas() {
    cout << "- ProdutoComPaginas [" << produto.obtemNome() << "] destruido..." << endl;
}

string ProdutoComPaginas::obtemNome() {
    return produto.obtemNome();
}

double ProdutoComPaginas::obtemPrecoBase() {
    return produto.obtemPrecoBase();
}

double ProdutoComPaginas::obtemPrecoFinal() {
    double desc;
    Promocao *promocao = produto.obtemPromocao();
    if (promocao == nullptr)
        desc = 0.0;
    else
        desc = promocao->obtemPercDesconto();
    return produto.obtemPrecoBase()*(1.0 - desc);
}

int ProdutoComPaginas::obtemPaginas() {
    return paginas;
}

Promocao *ProdutoComPaginas::obtemPromocao() {
    return produto.obtemPromocao();
}

void ProdutoComPaginas::defineNome(string n) {
    produto.defineNome(n);
}

void ProdutoComPaginas::definePrecoBase(double p) {
    produto.definePrecoBase(p);
}

void ProdutoComPaginas::definePaginas(int pg) {
    paginas = pg;
}

void ProdutoComPaginas::definePromocao(Promocao *promo) {
    produto.definePromocao(promo);
}

string ProdutoComPaginas::str() {
    stringstream ss;
    ss << produto.str() << "; ";
    ss << paginas << " p.";
    return ss.str();
}
