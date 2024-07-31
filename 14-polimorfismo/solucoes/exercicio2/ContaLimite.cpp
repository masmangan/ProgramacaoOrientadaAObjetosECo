#include "ContaLimite.h"

ContaLimite::ContaLimite() {}

ContaLimite::ContaLimite(int num, string n, float s, float l) : Conta() {
	inicializa(num, n, s);
	limite = l;
}

ContaLimite::~ContaLimite() {}

void ContaLimite::deposito(float valor){
  Conta::deposito(valor);
}

void ContaLimite::consulta(){
	Conta::consulta();
	cout << "Limite: " << limite << endl;
}

int ContaLimite::saque(float valor){
	float s = Conta::getSaldo();
	if (s >= valor)
		return Conta::saque(valor);
	else if ((s+limite) >= valor){
		limite -= (valor-s);
		return Conta::saque(s);
	}
	else
		return 0;
}