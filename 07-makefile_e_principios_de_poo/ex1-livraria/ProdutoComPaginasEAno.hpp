// ProdutoComPaginasEAno.hpp (Roland Teodorowitsch; 16 set. 2020)

#ifndef _PRODUTOCOMPAGINASEANO_HPP_
#define _PRODUTOCOMPAGINASEANO_HPP_

#include <string>
#include "Promocao.hpp"
#include "ProdutoComPaginas.hpp"

using namespace std;

class ProdutoComPaginasEAno {
    private:
        ProdutoComPaginas produto;
        int ano;
  public:
        ProdutoComPaginasEAno();
        ProdutoComPaginasEAno(string n, double p, int pg, int ano, Promocao *promo);
        ~ProdutoComPaginasEAno();
        string obtemNome();
        double obtemPrecoBase();
        double obtemPrecoFinal();
        int obtemPaginas();
        int obtemAno();
        Promocao *obtemPromocao();
        void defineNome(string n);
        void definePrecoBase(double p);
        void definePaginas(int pg);
        void defineAno(int a);
        void definePromocao(Promocao *promo);
        string str();
};

#endif
