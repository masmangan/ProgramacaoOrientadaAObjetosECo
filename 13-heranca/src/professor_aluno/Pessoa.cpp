#ifdef DEBUG
#include <iostream>
#endif
#include <sstream>
#include "Pessoa.hpp"

Pessoa::Pessoa(string n, int r) {
  nome = n;
  rg = r;
  #ifdef DEBUG
  cerr << "+ Pessoa(" << nome << "," << rg << ") criado..." << endl;
  #endif
}

Pessoa::~Pessoa() {
  #ifdef DEBUG
  cerr << "- Pessoa(" << nome << "," << rg << ") destruído..." << endl;
  #endif
}

void Pessoa::defineNome(string n) {  nome = n;  }
void Pessoa::defineRG(int r) {  rg = r;  }
string Pessoa::obtemNome() const {  return nome;  }
int Pessoa::obtemRG() const {  return rg;  }

string Pessoa::str() const {
  stringstream ss;
  ss << "Nome: " << nome << endl;
  ss << "RG: " << rg << endl;
  return ss.str();
}
