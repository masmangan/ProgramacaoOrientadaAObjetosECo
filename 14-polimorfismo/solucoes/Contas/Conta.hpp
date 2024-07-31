// Conta.hpp (Roland Teodorowitsch; 6 nov. 2019)

#ifndef _CONTA_HPP
#define _CONTA_HPP

#include <string>
#include "Transacao.hpp"

using namespace std;

class Conta {
  protected:
    void linha();
  private:
    static const int MAX_TRANSACOES = 10;
    int numero;
    string correntista;
    double saldo;
    Transacao *transacao[MAX_TRANSACOES];
    int numTransacoes;
    void insereTransacao(string descricao,double valor);
  public:
    Conta(int n, string c, double s);
    ~Conta();
    int obtemNumero();
    string obtemCorrentista();
    void defineCorrentista(string c);
    double obtemSaldo();
    virtual bool deposito(double valor) = 0;
    virtual bool saque(double valor) = 0;
    virtual void extrato() = 0;
};

#endif
