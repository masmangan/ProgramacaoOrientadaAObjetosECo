#ifdef DEBUG
#include <iostream>
#endif
#include "Conta.hpp"

Conta::Conta(int n, double s){
  numero = n;
  saldo = s;
#ifdef DEBUG
  cout << "+ Conta (" << numero << "," << saldo << ") criada..." << endl;
#endif
}

Conta::~Conta(){
#ifdef DEBUG
  cout << "- Conta " << numero << "," << saldo  << ") destruida..." << endl;
#endif
}

int Conta::obtemNumero() const { return numero; }
double Conta::obtemSaldo() const { return saldo; }
void Conta::depositar(double valor){ saldo += valor; }

double Conta::retirar(double valor){
  double res;
  if (valor > saldo) {  res = saldo;  saldo = 0.0;  }
  else               {  res = valor;  saldo -= valor;  }
  return res;
}

double Conta::retirar() {
  double res = saldo;
  saldo = 0.0;
  return res;
}
