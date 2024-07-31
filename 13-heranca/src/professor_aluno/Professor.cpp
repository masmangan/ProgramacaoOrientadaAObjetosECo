#ifdef DEBUG
#include <iostream>
#endif
#include <sstream>	
#include "Professor.hpp"

Professor::Professor(string n, int r, string u, int a, double s) : Pessoa(n, r) {
  unidade = u;
  ano = a;
  salario = s;
  #ifdef DEBUG
  cerr << "+ Professor(" << nome << "," << rg << "," << unidade << "," << ano << "," << salario << ") criado..." << endl;
  #endif
}

Professor::~Professor() {
  #ifdef DEBUG
  cerr << "- Professor(" << nome << "," << rg << "," << unidade << "," << ano << "," << salario << ") destruído..." << endl;
  #endif
}

void Professor::defineUnidade(string u) {  unidade = u;  }
void Professor::defineAno(int a) {  ano = a;  }
void Professor::defineSalario(double s) {  salario = s;  }
string Professor::obtemUnidade() const {  return unidade;  }
int Professor::obtemAno() const {  return ano;  }
double Professor::obtemSalario() const {  return salario;  }

string Professor::str() const {
  stringstream ss;
  ss << Pessoa::str();
  ss << "Unidade: " << unidade << endl;
  ss << "Ano de ingresso: " << ano << endl;
  ss << "Salario: " << salario << endl;
  return ss.str();
}
