// ContaLimite.hpp (Roland Teodorowitsch; 7 nov. 2019)

#ifndef _CONTALIMITE_HPP
#define _CONTALIMITE_HPP

#include "Conta.hpp"

using namespace std;

class ContaLimite : public Conta {
  private:
    double limite;
  public:
    ContaLimite(int n, string c, double s,double l);
    ~ContaLimite();
    double obtemLimite();
    bool deposito(double valor);
    bool saque(double valor);
    void extrato();
};

#endif
