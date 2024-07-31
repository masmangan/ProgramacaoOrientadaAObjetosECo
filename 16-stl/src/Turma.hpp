#ifndef _TURMA_HPP
#define _TURMA_HPP
#include <string>
#include <vector>

using namespace std;

class Turma {
private:
  string codigo;
  int creditos;
  string nome, turma;
  vector <int> diaSemana;
  vector <string> horario;
public:
  Turma(string c="", int cr=0, string n="", string t="");
  void adicionaEncontro(int ds, string h);
  string obtemCodigo() const;
  string obtemNome() const;
  string obtemTurma() const;
  string str() const;
  bool operator==(Turma &t) const;
  bool operator<(Turma &t) const;
};
#endif
