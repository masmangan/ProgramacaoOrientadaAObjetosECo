#ifndef PROFESSOR_HPP
#define PROFESSOR_HPP

#include "Pessoa.hpp"

class Professor : public Pessoa {
private:
  string unidade;
  int ano;
  double salario;
public:
  Professor(string n, int r, string u, int a, double s);
  ~Professor();
  void defineUnidade(string u);
  void defineAno(int a);
  void defineSalario(double s);
  string obtemUnidade() const;
  int obtemAno() const;
  double obtemSalario() const;
  string str() const;
};

#endif
