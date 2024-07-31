#include"Empresa.h"

Empresa::Empresa(string nome, string CNPJ, int qntFunc){
	stringstream temp;
  this->nome = nome;
	this->CNPJ = CNPJ;
	if(qntFunc <= MAX_FUNC){
	  this->qntFunc = qntFunc;
    for(int i=0; i<qntFunc; i++){
		  temp.str("");
		  temp << "Funcionario " << i;
      f[i] = new Funcionario(temp.str(), 0, "Nao informada!");
	  }
  }
}

Empresa::~Empresa(){}

void Empresa::setNome(string nome){
	this->nome = nome;
}

void Empresa::setCNPJ(string CNPJ){
	this->CNPJ = CNPJ;
}

string Empresa::getNome(){
	return this->nome;
}

string Empresa::getCNPJ(){
	return this->CNPJ;
}

int Empresa::getQntFuncionarios(){
	return this->qntFunc;
}

string Empresa::toString(){
  stringstream tmpss;
  tmpss << "Empresa" << endl;
  tmpss << "  Nome: " << this->nome << endl;
  tmpss << "  CNPJ: " << this->CNPJ << endl;
  tmpss << "  Qnt de Funcionarios: " << this->qntFunc << endl;
  for(int i=0; i<qntFunc; i++){
    tmpss << "    - " << f[i]->getNome() << endl;
  }
	return tmpss.str();
}