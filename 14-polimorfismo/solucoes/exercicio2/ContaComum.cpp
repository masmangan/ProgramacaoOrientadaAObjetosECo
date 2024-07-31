#include "ContaComum.h"

ContaComum::ContaComum() {}

ContaComum::ContaComum(int num, string n, float s) : Conta() {
	inicializa(num, n, s);
}

ContaComum::~ContaComum() {}

void ContaComum::deposito(float valor){
  Conta::deposito(valor);
}

void ContaComum::consulta(){
	Conta::consulta();
	Conta::consultaTrans();
}

int ContaComum::saque(float valor){
  return Conta::saque(valor);
}