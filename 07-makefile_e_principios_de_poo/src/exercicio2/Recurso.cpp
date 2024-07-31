#ifdef DEBUG
#include <iostream>
#endif
#include <sstream>
#include"Recurso.hpp"

Recurso::Recurso(string n,int q) {
  nome = n;
  quantidade = q;
  #ifdef DEBUG
  cout << "+ Recurso(" << nome << "," << quantidade << ") criado..." << endl;
  #endif
}

Recurso::~Recurso() {
  #ifdef DEBUG
  cout << "- Recurso(" << nome << "," << quantidade << ") destruido..." << endl;
  #endif
}

string Recurso::obtemNome() const {  return nome;  }
int Recurso::obtemQuantidade() const {  return quantidade;  }
void Recurso::defineNome(string n) {  nome = n;  }
void Recurso::defineQuantidade(int q) {  quantidade = q;  }

string Recurso::str() const {
  stringstream ss;
  ss << nome << " (" << quantidade << ")";
  return ss.str();
}
