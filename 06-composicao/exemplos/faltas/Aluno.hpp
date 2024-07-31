// Aluno.hpp

#ifndef _ALUNO_HPP
#define _ALUNO_HPP

#include <string>

#define MAX_PRESENCAS 100

using namespace std;

class Aluno {
private:
	string nome;
	char presencas[MAX_PRESENCAS];
	int numPresencas;
public:
	Aluno(string n="");
	string obtemNome();
	void defineNome(string n);
	bool registraPresenca(char p);
	int obtemNumPresencas();
	char obtemPresenca(int indice);
	string str();
};

#endif
