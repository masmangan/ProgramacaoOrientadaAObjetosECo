#ifndef CONTA_LIMITE_H
#define CONTA_LIMITE_H

#include "Conta.h"
#include "Transacao.h"

class ContaLimite : public Conta {
  private:
		float limite;
  public:
		ContaLimite();
		ContaLimite(int num, string n, float s, float l);
		~ContaLimite();
    void deposito(float valor);
    int saque(float valor);
		void consulta();
};

#endif