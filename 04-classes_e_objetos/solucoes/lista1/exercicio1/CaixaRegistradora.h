// CaixaRegistradora.h (Roland Teodorowitsch; 26 ago. 2019)

#ifndef _CAIXAREGISTRADORA_H
#define _CAIXAREGISTRADORA_H

class CaixaRegistradora {
  private:
    double precoTotal;
    int    numItens;
  public:
    CaixaRegistradora();
    ~CaixaRegistradora();
    void adicionaItem(double preco);
    double obtemTotal();
    int obtemNumItens();
    void limpa();
};

#endif
