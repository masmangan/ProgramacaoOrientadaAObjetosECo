#ifndef CONTA_H
#define CONTA_H

#include <iostream>
#include "Transacao.h"
using namespace std;


class Conta{
  private:
    int numero;
    string nome;
    float saldo;
	  Transacao *t[10];
	  int qntTransacao;
  public:
    void inicializa(int num, string n, float s);
		float getSaldo();
    virtual void deposito(float valor);
    virtual int saque(float valor);
		virtual void consulta();
		void consultaTrans();
};

#endif