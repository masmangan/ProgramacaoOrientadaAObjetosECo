#ifndef _ALUNOFINANCIADO_HPP
#define _ALUNOFINANCIADO_HPP
#include "Aluno.hpp"

class AlunoFinanciado : public Aluno {
private:
  int anoIngresso;
public:
  AlunoFinanciado(int m, string n, string c, int s, int ai);
  int obtemAnoIngresso() const;
  string str() const;
  double saldoDevedor(int ano) const;
};
#endif
