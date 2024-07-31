// main.cpp (Roland Teodorowitsch; 6 nov. 2019)

#include <iostream>
#include "Conta.hpp"
#include "ContaComum.hpp"
#include "ContaPoupanca.hpp"
#include "ContaLimite.hpp"

using namespace std;

#define MAX_CONTAS 10

int main() {
  ContaComum *cc = new ContaComum(1,"Fulano",0.00);
  cc->deposito(1);
  cc->saque(2);     // SALDO NEGATIVO NEGADO
  cc->deposito(2);
  cc->deposito(3);
  cc->deposito(4);
  cc->deposito(5);
  cc->deposito(6);
  cc->saque(7);
  cc->deposito(8);
  cc->saque(9);
  cc->deposito(10); // COMPACTA TRANSACOES
  cc->saque(11);    // COMPACTA TRANSACOES
  cc->deposito(12); // COMPACTA TRANSACOES

  ContaPoupanca *cp = new ContaPoupanca(2,"Beltrano",0.00,10);
  cp->deposito(1);
  cp->deposito(2);
  cp->deposito(3);
  cp->deposito(4);
  cp->deposito(5);
  cp->extrato();

  ContaLimite *cl = new ContaLimite(3,"Sicrano",0.00,10.00);
  cl->saque(1);
  cl->saque(2);
  cl->saque(3);
  cl->saque(4);
  cl->saque(5);     // SALDO NEGATIVO ABAIXO DO LIMITE NEGADO
  cl->deposito(5);
  cl->deposito(6);
  cl->saque(7);
  cl->deposito(8);
  cl->saque(9);
  cl->deposito(10); // COMPACTA TRANSACOES
  cl->saque(11);    // COMPACTA TRANSACOES
  cl->deposito(12); // COMPACTA TRANSACOES

  Conta *contas[MAX_CONTAS];
  contas[0] = cc;
  contas[1] = cp;
  contas[2] = cl;
  int numContas = 3;

  

  for (int i=0; i<numContas; ++i)
      delete contas[i];

  return 0;
}



