#include"Funcionario.h"

Funcionario::Funcionario(string nome, float salario, string dataAdmissao){
  this->nome = nome;
  this->salario = salario;
	this->dataAdmissao = dataAdmissao;
}

Funcionario::~Funcionario(){}

void Funcionario::setNome(string nome){
	this->nome = nome;
}

void Funcionario::setSalario(float salario){
	this->salario = salario;
}

void Funcionario::setDataAdmissao(string dataAdmissao){
	this->dataAdmissao = dataAdmissao;
}

string Funcionario::getNome(){
	return this->nome;
}

float Funcionario::getSalario(){
	return this->salario;
}

string Funcionario::getDataAdmissao(){
	return this->dataAdmissao;
}