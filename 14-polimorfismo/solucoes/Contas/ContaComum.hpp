// ContaComum.hpp (Roland Teodorowitsch; 6 nov. 2019)

#ifndef _CONTACOMUM_HPP
#define _CONTACOMUM_HPP

#include "Conta.hpp"

using namespace std;

class ContaComum : public Conta {
  public:
    ContaComum(int n, string c, double s);
    ~ContaComum();
    bool deposito(double valor);
    bool saque(double valor);
    void extrato();
};

#endif
