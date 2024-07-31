// Aluno.cpp (Roland Teodorowitsch; 21 mar. 2023)

#include <iostream>
#include "Aluno.hpp"
	
Aluno::Aluno(string n, string m) {
	nome = n;
	matricula = m;
	numNotas = 0;
	#ifdef DEBUG
	cout << "+ Aluno(" << nome << "," << matricula << ") criado..." << endl;
	#endif
}

Aluno::~Aluno() {
	#ifdef DEBUG
	cout << "- Aluno(" << nome << "," << matricula << ") destruído..." << endl;
	#endif
}

void Aluno::defineNome(string n) {
	nome = n;
}

void Aluno::defineMatricula(string m) {
	matricula = m;
}

string Aluno::obtemNome() {
	return nome;
}

string Aluno::obtemMatricula() {
	return matricula;
}

int Aluno::obtemNumNotas() {
	return numNotas;
}

bool Aluno::adicionaNota(double n) {
	if (numNotas >= MAX_NOTAS)
		return false;
	notas[numNotas++] = n;
	return true;
}

double Aluno::obtemNota(int i) {
	if (i < 0 || i>=numNotas)
		return -1.0;
	return notas[i];
}

