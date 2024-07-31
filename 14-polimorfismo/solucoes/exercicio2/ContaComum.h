#ifndef CONTA_COMUM_H
#define CONTA_COMUM_H

#include "Conta.h"
#include "Transacao.h"

class ContaComum : public Conta {
  public:
		ContaComum();
		ContaComum(int num, string n, float s);
		~ContaComum();
    void deposito(float valor);
    int saque(float valor);
		void consulta();
};

#endif