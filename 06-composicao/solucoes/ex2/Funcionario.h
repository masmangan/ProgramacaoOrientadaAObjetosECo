#ifndef _FUNCIONARIO_H
#define _FUNCIONARIO_H

#include<iostream>
#include<string>

using namespace std;

class Funcionario{
    private:
      string nome;
			float salario;
			string dataAdmissao;
			
    public:
      Funcionario(string nome = "Sem nome", float salario = 0.0, string dataAdmissao = "Nao informada!");
			~Funcionario();
			void setNome(string nome);
			void setSalario(float salario);
			void setDataAdmissao(string dataAdmissao);
			string getNome();
			float getSalario();
			string getDataAdmissao();
};

#endif