#ifndef _ALUNO_HPP
#define _ALUNO_HPP

#include "Pessoa.hpp"

class Aluno {
private:
  int matricula;
  Pessoa *pessoa;
public:
  Aluno(string n = "", int m = 0);
  ~Aluno();
  string obtemNome() const;
  int obtemMatricula() const;
  void defineNome(string n);
  void defineMatricula(int m);
  string str() const;
};
#endif
