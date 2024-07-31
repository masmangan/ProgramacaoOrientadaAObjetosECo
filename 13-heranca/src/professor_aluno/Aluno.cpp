#ifdef DEBUG
#include <iostream>
#endif
#include <sstream>
#include "Aluno.hpp"

Aluno::Aluno(string n, int r, int m, int a) : Pessoa(n, r) {
  matricula = m;
  ano = a;
  #ifdef DEBUG
  cerr << "+ Aluno(" << nome << "," << rg << "," << matricula << "," << ano << ") criado..." << endl;
  #endif
}

Aluno::~Aluno() {
  #ifdef DEBUG
  cerr << "- Aluno(" << nome << "," << rg << "," << matricula << "," << ano << ") destruído..." << endl;
  #endif
}

void Aluno::defineMatricula(int m) {  matricula = m;  }
void Aluno::defineAno(int a) {  ano = a;  }
int Aluno::obtemMatricula() const {  return matricula;  }
int Aluno::obtemAno() const {  return ano;  }

string Aluno::str() const {
  stringstream ss;
  ss << Pessoa::str();
  ss << "Matricula: " << matricula << endl;
  ss << "Ano: " << ano << endl;
  return ss.str();
}
