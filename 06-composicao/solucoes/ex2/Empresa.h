#ifndef _EMPRESA_H
#define _EMPRESA_H

#include"Funcionario.h"

#include<iostream>
#include<string>
#include<sstream>
#define MAX_FUNC 50

using namespace std;

class Empresa{
    private:
      string nome;
			string CNPJ;
			int qntFunc;
			Funcionario *f[MAX_FUNC];

    public:
      Empresa(string nome = "Nao informado", string CNPJ = "Nao informado", int qntFunc = 10);
			~Empresa();
			void setNome(string nome);
			void setCNPJ(string CNPJ);
			string getNome();
			string getCNPJ();
			int getQntFuncionarios();
			string toString();
};

#endif