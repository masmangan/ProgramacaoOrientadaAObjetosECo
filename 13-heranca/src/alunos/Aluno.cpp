#include <sstream>
#include "Aluno.hpp"

Aluno::Aluno(int m, string n, string c, int s) {
  matricula = m;
  nome = n;
  curso = c;
  semestre = s;
}

int Aluno::obtemMatricula() const { return matricula; }

string Aluno::obtemNome() const { return nome; }

string Aluno::obtemCurso() const { return curso; }

int Aluno::obtemSemestre() const { return semestre; }

string Aluno::str() const {
  stringstream ss;
  ss << "Aluno: " << nome << endl;
  ss << "- matricula: " << matricula << endl;
  ss << "- curso: " << curso << endl;
  ss << "- semestre: " << semestre;
  return ss.str();
}
