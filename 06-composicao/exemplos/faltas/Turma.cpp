// Turma.cpp

#include <iostream>
#include <fstream>
#include <sstream>
#include "Turma.hpp"

Turma::Turma() {
	numAlunos = 0;
	numPresencas = 0;
}

int Turma::obtemNumAlunos() {
	return numAlunos;
}

int Turma::obtemNumPresencas() {
	return numPresencas;
}

bool Turma::le(string nomeArq) {
	ifstream fin;
	fin.open(nomeArq,ios::in);
	if (!fin.is_open())
		return false;
	fin >> numAlunos >> numPresencas;
	for (int a=0; a<numAlunos; ++a) {
		string n;
		fin >> n;
		alunos[a].defineNome(n);
		for (int p=0; p<numPresencas; ++p) {
			char pres;
			fin >> pres;
			alunos[a].registraPresenca(pres);
		}
	}
	fin.close();
	return true;
}

bool Turma::escreve(string nomeArq) {
	ofstream fout;
	fout.open(nomeArq,ios::out);
	if (!fout.is_open())
		return false;
	fout << str();
	fout.close();
	return true;
}

bool Turma::realizaChamada() {
	if (numPresencas >= MAX_PRESENCAS)
		return false;
	for (int a=0; a<numAlunos; ++a) {
		cout << alunos[a].obtemNome() << " (P/F)? ";
		char pres;
		cin >> pres;
		alunos[a].registraPresenca(pres);
	}
	++numPresencas;
	return true;
}

string Turma::str() {
	stringstream ss;
	ss << numAlunos << " " << numPresencas << endl;
	for (int a=0; a<numAlunos; ++a)
		ss << alunos[a].str() << endl;
	return ss.str();
}


