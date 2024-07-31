#include "AlunoRegular.hpp"

AlunoRegular::AlunoRegular(int m, string n, string c, int s) : Aluno(m,n,c,s) {}

double AlunoRegular::mensalidade(int parcela) const {
  if (parcela>=1 && parcela<=3)
     return valorMensal * 1.2;
  return valorMensal;
}

