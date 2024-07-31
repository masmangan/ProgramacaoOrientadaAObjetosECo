// teste.cpp (Roland Teodorowitsch; 25 maio 2021)

#include <iostream>

using namespace std;

class Aluno {
private:
	int matricula;
	string nome;
public:
	Aluno(int m, string n) {
		matricula = m;
		nome = n;
		cout << "+ Aluno " << nome << " (" << matricula << ") criado..." << endl;
	}
	~Aluno() {
		cout << "- Aluno " << nome << " (" << matricula << ") destruido..." << endl;
	}
	int obtemMatricula() { return matricula; }
	string obtemNome() { return nome; }
};
