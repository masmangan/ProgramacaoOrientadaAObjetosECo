// Transacao.hpp (Roland Teodorowitsch; 6 nov. 2019)

#ifndef _TRANSACAO_HPP
#define _TRANSACAO_HPP

#include <string>

using namespace std;

class Transacao {
  private:
    string data;
    string descricao;
    double valor;
  public:
    Transacao(string dt, string ds, double v);
    string obtemData();
    string obtemDescricao();
    double obtemValor();
    string toString();
    string toString(double saldo);
};

#endif
