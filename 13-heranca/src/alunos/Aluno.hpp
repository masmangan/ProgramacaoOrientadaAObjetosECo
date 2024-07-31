#ifndef _ALUNO_HPP
#define _ALUNO_HPP
#include <string>

using namespace std;

class Aluno {
private:
  int matricula;
  string nome;
  string curso;
  int semestre;
public:
  const double valorMensal = 1000.0;
  Aluno(int m, string n, string c, int s);
  int obtemMatricula() const;
  string obtemNome() const;
  string obtemCurso() const;
  int obtemSemestre() const;
  string str() const;
};
#endif
