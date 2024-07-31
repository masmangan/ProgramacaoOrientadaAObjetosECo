// Aluno.cpp

#include <sstream>
#include "Aluno.hpp"

Aluno::Aluno(string n) {
	nome = n;
	numPresencas = 0;
}

string Aluno::obtemNome() {
	return nome;
}

void Aluno::defineNome(string n) {
	nome = n;
}

bool Aluno::registraPresenca(char p) {
	if (numPresencas >= MAX_PRESENCAS) return false;
	presencas[numPresencas++] = p;
	return true;
}

int Aluno::obtemNumPresencas() {
	return numPresencas;
}

char Aluno::obtemPresenca(int indice) {
	if (indice<0 || indice>=numPresencas) return '\0';
	return presencas[indice];
}

string Aluno::str() {
	stringstream ss;
	ss << nome;
	for (int i=0; i<numPresencas; ++i)
		ss << " " << presencas[i];
	return ss.str();
}

