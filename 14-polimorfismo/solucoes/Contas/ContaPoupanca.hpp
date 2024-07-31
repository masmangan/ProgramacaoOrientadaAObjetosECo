// ContaPoupanca.hpp (Roland Teodorowitsch; 6 nov. 2019)

#ifndef _CONTAPOUPANCA_HPP
#define _CONTAPOUPANCA_HPP

#include "Conta.hpp"

using namespace std;

class ContaPoupanca : public Conta {
  private:
    int dia;
  public:
    ContaPoupanca(int n, string c, double s,int d);
    ~ContaPoupanca();
    int obtemDia();
    bool deposito(double valor);
    bool saque(double valor);
    void extrato();
};

#endif
