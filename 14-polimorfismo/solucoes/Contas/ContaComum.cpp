// ContaComum.cpp (Roland Teodorowitsch; 6 nov. 2019)

#include <iostream>
#include "ContaComum.hpp"

ContaComum::ContaComum(int n, string c, double s) : Conta(n,c,s) {
}

ContaComum::~ContaComum() {}

bool ContaComum::deposito(double valor){
  return Conta::deposito(valor);
}

bool ContaComum::saque(double valor){
  if ( obtemSaldo() - valor < 0 )
     return false;
  return Conta::saque(valor);
}

void ContaComum::extrato(){
  Conta::linha();
  cout << "CONTA-CORRENTE" << endl;
  Conta::extrato();
}


