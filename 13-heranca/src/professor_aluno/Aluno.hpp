#ifndef ALUNO_HPP
#define ALUNO_HPP

#include "Pessoa.hpp"

class Aluno : public Pessoa {
private:
  int matricula;
  int ano;
public:
  Aluno(string n="", int r=0, int m=0, int a=0);
  ~Aluno();
  void defineMatricula(int m);
  void defineAno(int a);
  int obtemMatricula() const;
  int obtemAno() const;
  string str() const;
};

#endif
