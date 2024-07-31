// ContaLimite.cpp (Roland Teodorowitsch; 7 nov. 2019)

#include <iostream>
#include <iomanip>
#include "ContaLimite.hpp"

ContaLimite::ContaLimite(int n, string c, double s, double l) : Conta(n,c,s) {
  limite = l;
}

ContaLimite::~ContaLimite() {}

double ContaLimite::obtemLimite() {
  return limite;
}

bool ContaLimite::deposito(double valor){
  return Conta::deposito(valor);
}

bool ContaLimite::saque(double valor){
  if ( obtemSaldo() - valor < -limite )
     return false;
  return Conta::saque(valor);
}

void ContaLimite::extrato(){
  Conta::linha();
  cout << "CONTA-CORRENTE ESPECIAL" << endl;
  cout << "LIMITE:      " << fixed << setprecision(2) << limite << endl;
  Conta::extrato();
}


