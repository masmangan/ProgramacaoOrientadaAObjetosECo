// ContaPoupanca.cpp (Roland Teodorowitsch; 6 nov. 2019)

#include <iostream>
#include "ContaPoupanca.hpp"

ContaPoupanca::ContaPoupanca(int n, string c, double s, int d) : Conta(n,c,s) {
  dia = d;
}

ContaPoupanca::~ContaPoupanca() {}

int ContaPoupanca::obtemDia() {
  return dia;
}

bool ContaPoupanca::deposito(double valor){
  return Conta::deposito(valor);
}

bool ContaPoupanca::saque(double valor){
  if ( obtemSaldo() - valor < 0 )
     return false;
  return Conta::saque(valor);
}

void ContaPoupanca::extrato(){
  Conta::linha();
  cout << "CONTA-POUPANCA" << endl;
  cout << "ANIVERSARIO: " << dia << endl;
  Conta::extrato();
}


