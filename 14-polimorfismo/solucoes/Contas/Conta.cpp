// Conta.cpp (Roland Teodorowitsch; 6 nov. 2019)

#include <ctime>
#include <iostream>
#include <iomanip>
#include "Conta.hpp"

Conta::Conta(int n, string c, double s) {
  struct tm tstruct;
  time_t now = time(0);
  char buf[80];
  tstruct = *localtime(&now);
  strftime(buf, sizeof(buf), "%d/%m/%Y %X", &tstruct);
  transacao[0] = new Transacao(buf, "SALDO ANTERIOR", s);
  numTransacoes = 1;
  numero = n;
  correntista = c;
  saldo = s;
}

Conta::~Conta() {
  for (int i=0; i<numTransacoes; ++i)
      delete transacao[i];
}

int Conta::obtemNumero() {
  return numero;
}

string Conta::obtemCorrentista() {
  return correntista;
}

void Conta::defineCorrentista(string c) {
  correntista = c;
}

double Conta::obtemSaldo() {
  return saldo;
}

void Conta::insereTransacao(string descricao,double valor) {
  struct tm tstruct;
  time_t now = time(0);
  char buf[80];
  tstruct = *localtime(&now);
  strftime(buf, sizeof(buf), "%d/%m/%Y %X", &tstruct);
  if (numTransacoes >= MAX_TRANSACOES) {
     string data = transacao[0]->obtemData();
     double v = transacao[0]->obtemValor() + transacao[1]->obtemValor();
     delete transacao[0];
     delete transacao[1];
     transacao[0] = new Transacao(data, "SALDO ANTERIOR", v);
     for (int i=1; i<numTransacoes-1; ++i)
         transacao[i] = transacao[i+1];
     transacao[numTransacoes-1] = new Transacao(buf, descricao, valor);
  }
  else
     transacao[numTransacoes++] = new Transacao(buf, descricao, valor);
}

bool Conta::deposito(double valor) {
  saldo += valor;
  insereTransacao("DEPOSITO",valor);
  return true;
}

bool Conta::saque(double valor) {
  saldo -= valor;
  insereTransacao("SAQUE",-valor);
  return true;
}

void Conta::linha() {
  for (int i=0; i<60; ++i)
      cout << "-";
  cout << endl;
}

void Conta::extrato() {
  cout << "NUMERO:      " << numero << endl;
  cout << "CORRENTISTA: " << correntista << endl;
  linha();
  double s = transacao[0]->obtemValor();
  cout << transacao[0]->toString() << endl;
  for (int i=1; i<numTransacoes; ++i) {
      s += transacao[i]->obtemValor();
      cout << transacao[i]->toString(s) << endl;
  }
  linha();
  cout << "SALDO:  " << fixed << setprecision (2) << saldo << endl;
  linha();
}

