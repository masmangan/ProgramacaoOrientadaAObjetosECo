#include <sstream>
#include "AlunoFinanciado.hpp"

AlunoFinanciado::AlunoFinanciado(int m, string n, string c, int s, int ai) : Aluno(m,n,c,s) {
  anoIngresso = ai;
}

int AlunoFinanciado::obtemAnoIngresso() const {
  return anoIngresso;
}

string AlunoFinanciado::str() const {
  stringstream ss;
  ss << Aluno::str() << endl;
  ss << "- ingresso: " << anoIngresso;
  return ss.str();
}

double AlunoFinanciado::saldoDevedor(int ano) const {
  int dif = ano - anoIngresso;
  return dif * 12 * valorMensal;
}
