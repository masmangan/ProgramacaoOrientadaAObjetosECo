#include "Conta.h"

void Conta::inicializa(int num, string n, float s){
  numero = num;
  nome = n;
  saldo = s;
  qntTransacao = 0;
  if (saldo < 0)
    cout << "Erro na Criação da Conta!!!" << endl;
}

void Conta::deposito(float valor){
  saldo = saldo + valor;
	t[qntTransacao++] = new Transacao(valor, "credito");	
}

void Conta::consulta(){
  cout << "Numero da Conta: " << numero << endl;
  cout << "Cliente: " << nome << endl;
  cout << "Saldo Atual: " << saldo << endl;
}

void Conta::consultaTrans(){
	int i;
	for(i=0;i<qntTransacao;i++)
    cout << "-- Transacao " << i+1 << "--" << endl << t[i]->toString();
}

int Conta::saque(float valor){
  if (saldo < valor)
    return 0;
  else{
    saldo = saldo - valor;
		t[qntTransacao++] = new Transacao(valor, "debito");
    return 1;
  }
}

float Conta::getSaldo(){
	return saldo;
}