#ifdef DEBUG
#include <iostream>
#endif
#include <sstream>
#include <iomanip>
#include"Professor.hpp"

Professor::Professor(string n, int m, double s) {
  pessoa = new Pessoa(n);
  matricula = m;
  salario = s;
  #ifdef DEBUG
  cout << "+ Professor(" << pessoa->obtemNome() << "," << matricula << "," << salario << ") criado..." << endl;
  #endif
}

Professor::~Professor() {
  #ifdef DEBUG
  cout << "- Professor(" << pessoa->obtemNome() << "," << matricula << "," << salario << ") destruido..." << endl;
  #endif
  delete pessoa;
}

string Professor::obtemNome() const {  return pessoa->obtemNome();  }
int Professor::obtemMatricula() const {  return matricula;  }
double Professor::obtemSalario() const {  return salario;  }
void Professor::defineNome(string n) {  pessoa->defineNome(n);  }
void Professor::defineMatricula(int m) {  matricula = m;  }
void Professor::defineSalario(double s) {  salario = s;  }

string Professor::str() const {
  stringstream ss;
  ss << pessoa->obtemNome() << " (" << matricula << "; R$";
  ss << fixed << setprecision(2) << salario << ")";
  return ss.str();
}
