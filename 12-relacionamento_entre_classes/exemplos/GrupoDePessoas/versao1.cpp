// versao1.cpp (Roland Teodorowitsch; 19 abr. 2022)

#include <iostream>

#define MAX_PESSOAS 10

using namespace std;

class Pessoa {
private:
	string nome;
public:
	Pessoa(string n="") {
		nome = n;
		#ifdef DEBUG
		cout << "+ Pessoa(" << nome << ") criada..." << endl;
		#endif
	}
	~Pessoa() {
		#ifdef DEBUG
		cout << "- Pessoa(" << nome << ") destruída..." << endl;
		#endif
	}
	string obtemNome() {
		return nome;
	}
	void defineNome(string n) {
		nome = n;
	}
};

class Grupo {
private:
	Pessoa grupo[MAX_PESSOAS];
	int numPessoas;
public:
	Grupo() {
		numPessoas = 0;
		#ifdef DEBUG
		cout << "+ Grupo(" << numPessoas << ") criado..." << endl;
		#endif
	}
	~Grupo() {
		#ifdef DEBUG
		cout << "- Grupo(" << numPessoas << ") destruído..." << endl;
		#endif
	}
	int obtemNumPessoas() {
		return numPessoas;
	}
	bool adiciona(Pessoa &p) {
		if (numPessoas >= MAX_PESSOAS) return false;
		grupo[numPessoas++] = p;
		return true;
	}
	Pessoa *obtemPessoa(int i) {
		if (i<0 || i>=numPessoas) return nullptr;
		return &(grupo[i]);
	}
};

int main() {
	Pessoa paulo("Paulo"), pedro("Pedro");
	Grupo amigos;
	amigos.adiciona(paulo);
	amigos.adiciona(pedro);
	for (int i=0; i<amigos.obtemNumPessoas(); ++i) {
		Pessoa *p = amigos.obtemPessoa(i);
		cout << p->obtemNome() << endl;
	}
	return 0;
}

