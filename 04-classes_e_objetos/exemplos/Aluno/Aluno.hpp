// Aluno.hpp (Roland Teodorowitsch; 21 mar. 2023)
#ifndef _ALUNO_HPP
#define _ALUNO_HPP

#include <string>

using namespace std;

#define MAX_NOTAS 10

class Aluno {
private:
	string nome;
	string matricula;
	double notas[MAX_NOTAS];
	int numNotas;
public:
	Aluno(string n="", string m="");
	~Aluno();
	void defineNome(string n);
	void defineMatricula(string m);
	string obtemNome();
	string obtemMatricula();
	int obtemNumNotas();
	bool adicionaNota(double n);
	double obtemNota(int i);
};

#endif
