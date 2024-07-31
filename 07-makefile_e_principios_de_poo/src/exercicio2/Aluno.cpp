#ifdef DEBUG
#include <iostream>
#endif
#include <sstream>
#include "Aluno.hpp"

Aluno::Aluno(string n, int m) {
  pessoa = new Pessoa(n);
  matricula = m;
  #ifdef DEBUG
  cout << "+ Aluno(" << pessoa->obtemNome() << "," << matricula << ") criado..." << endl;
  #endif
}

Aluno::~Aluno(){
  #ifdef DEBUG
  cout << "- Aluno(" << pessoa->obtemNome() << "," << matricula << ") destruido..." << endl;
  #endif
  delete pessoa;
}

string Aluno::obtemNome() const {  return pessoa->obtemNome();  }
int Aluno::obtemMatricula() const {  return matricula;  }
void Aluno::defineNome(string n) {  pessoa->defineNome(n);  }
void Aluno::defineMatricula(int m){  matricula = m;  }

string Aluno::str() const {
  stringstream ss;
  ss << pessoa->obtemNome() << " (" << matricula << ")";
  return ss.str();
}
