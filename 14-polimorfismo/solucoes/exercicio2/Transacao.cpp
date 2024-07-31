#include "Transacao.h"

Transacao::Transacao(float v, string desc){
	time_t now = time(0);
  date = ctime(&now);
	valor = v;
	descricao = desc;
}

string Transacao::toString() {
	ostringstream aux;
	aux << "Data: " << date;
	aux << "Valor: " << valor << endl;
	aux << "Descricao: " << descricao << endl;
	return aux.str();
}