#include "ContaPoupanca.h"

ContaPoupanca::ContaPoupanca() {}

ContaPoupanca::ContaPoupanca(int num, string n, float s, int d) : Conta() {
	inicializa(num, n, s);
	dia = d;
}

ContaPoupanca::~ContaPoupanca() {}

void ContaPoupanca::deposito(float valor){
  Conta::deposito(valor);
}

void ContaPoupanca::consulta(){
	Conta::consulta();
  cout << "Dia do aniversario: " << dia << endl;
}

int ContaPoupanca::saque(float valor){
  return Conta::saque(valor);
}