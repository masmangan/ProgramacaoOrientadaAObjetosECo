// Turma.hpp

#ifndef _TURMA_HPP
#define _TURMA_HPP

#include <string>
#include "Aluno.hpp"

#define MAX_ALUNOS 100

using namespace std;

class Turma {
private:
	Aluno alunos[MAX_ALUNOS];
	int numAlunos;
	int numPresencas;
public:
	Turma();
	int obtemNumAlunos();
	int obtemNumPresencas();
	bool le(string nomeArq);
	bool escreve(string nomeArq);
	bool realizaChamada();
	string str();
};

#endif
