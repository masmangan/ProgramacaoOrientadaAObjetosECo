// ProdutoComPaginas.hpp (Roland Teodorowitsch; 16 set. 2020)

#ifndef _PRODUTOCOMPAGINAS_HPP_
#define _PRODUTOCOMPAGINAS_HPP_

#include <string>
#include "Promocao.hpp"
#include "Produto.hpp"

using namespace std;

class ProdutoComPaginas {
    private:
        Produto produto;
        int paginas;
  public:
        ProdutoComPaginas();
        ProdutoComPaginas(string n, double p, int pg, Promocao *promo);
        ~ProdutoComPaginas();
        string obtemNome();
        double obtemPrecoBase();
        double obtemPrecoFinal();
        int obtemPaginas();
        Promocao *obtemPromocao();
        void defineNome(string n);
        void definePrecoBase(double p);
        void definePaginas(int pg);
        void definePromocao(Promocao *promo);
        string str();
};

#endif
