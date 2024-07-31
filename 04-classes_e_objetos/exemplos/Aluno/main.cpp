// main.cpp (Roland Teodorowitsch; 21 mar. 2023)

#include <iostream>
#include "Aluno.hpp"

void imprime_aluno(Aluno &a);

void imprime_aluno(Aluno &a) {
	cout << "Nome: " << a.obtemNome() << " (" << a.obtemMatricula() << ")" << endl;
	cout << "- notas:";
	int numNotas = a.obtemNumNotas();
	for (int i=0; i<numNotas; ++i)
		cout << " " << a.obtemNota(i);
	cout << endl << endl;
}

int main() {
	Aluno a0(); // ATENÇÃO: isto NÃO é a declaração de um objeto (e sim um protótipo)
	Aluno a1; // O objeto a1 será criado usando o construtor sem parâmetros (com default)
	a1.defineNome("Cicrano 123");
	a1.defineMatricula("0000000002-2");
	a1.adicionaNota(8.0);
	a1.adicionaNota(9.0);
	a1.adicionaNota(10.0);
	imprime_aluno(a1);
	Aluno a2("Fulano de Tal", "0000000001-1"); // Objeto a2 é criado com o construtor com parâmetros
	imprime_aluno(a2);
	return 0;
}
