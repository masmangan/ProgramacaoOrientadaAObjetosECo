#ifndef CONTA_POUPANCA_H
#define CONTA_POUPANCA_H

#include "Conta.h"
#include "Transacao.h"

class ContaPoupanca : public Conta {
  private:
		int dia;
  public:
		ContaPoupanca();
		ContaPoupanca(int num, string n, float s, int d);
		~ContaPoupanca();
    void deposito(float valor);
    int saque(float valor);
		void consulta();
};

#endif