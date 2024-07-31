#ifndef _PROFESSOR_HPP
#define _PROFESSOR_HPP

#include "Pessoa.hpp"

class Professor {
private:
  Pessoa *pessoa;
  int matricula;
  double salario;
public:
  Professor(string n = "", int m = 0, double s = 0.0);
  ~Professor();
  string obtemNome() const;
  int obtemMatricula() const;
  double obtemSalario() const;
  void defineNome(string n);
  void defineMatricula(int m);
  void defineSalario(double s);
  string str() const;
};
#endif
