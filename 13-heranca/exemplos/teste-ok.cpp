// teste.cpp (Roland Teodorowitsch; 28 out. 2020)

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

class AlunoRegular : public Aluno {
public:
	AlunoRegular(int m,string n) : Aluno(m,n) {
		cout << "+ AlunoRegular " << obtemNome() << " (" << obtemMatricula() << ") criado..." << endl;
	}
	~AlunoRegular() {
		cout << "- AlunoRegular " << obtemNome() << " (" << obtemMatricula() << ") destruido..." << endl;
	}
	string obtemNomeComPrefixo() {
		return "Aluno: " + obtemNome();
	}
};

int main() {
	Aluno a(1,"a");
	cout << a.obtemNome() << " - " << a.obtemMatricula() << endl;

	AlunoRegular ar(2,"ar");
	cout << ar.obtemNome() << " - " << ar.obtemMatricula() << endl;
	cout << ar.obtemNomeComPrefixo() << endl;

	return 0;
}


