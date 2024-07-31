// Pneu.cpp (Roland Teodorowitsch; 5 abr. 2022)

#include <sstream>
#include "Pneu.hpp"

Pneu::Pneu(string mar,double pre) {
  marca = mar;
  pressao = pre;
  cout << "+ Pneu " << str() << " criado..." << endl;
}

Pneu::~Pneu() {
  cout << "- Pneu " << str() << " destruido..." << endl;
}

void Pneu::defineMarca(string mar) {
  marca = mar;
}

void Pneu::definePressao(double pre) {
  pressao = pre;
}

string Pneu::obtemMarca() {
  return marca;
}

double Pneu::obtemPressao() {
  return pressao;
}

string Pneu::str() {
  stringstream ss_pneu;
  ss_pneu << "marca=" << marca;
  ss_pneu << "; pressao=" << pressao;
  return ss_pneu.str();
}

