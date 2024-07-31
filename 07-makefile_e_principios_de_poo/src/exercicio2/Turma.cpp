#ifdef DEBUG
#include <iostream>
#endif
#include <sstream>
#include "Turma.hpp"

Turma::Turma(int c, string d) {
  codigo = c;
  disciplina = d;
  professor = nullptr;
  numAlunos = numRecursos = 0;
  #ifdef DEBUG
  cout << "+ Turma(" << codigo << "," << disciplina << ") criada..." << endl;
  #endif
}

Turma::~Turma() {
  #ifdef DEBUG
  cout << "- Turma(" << codigo << "," << disciplina << ") destruida..." << endl;
  #endif
}

int Turma::obtemCodigo() const {  return codigo;  }
string Turma::obtemDisciplina() const {  return disciplina;  }
Professor *Turma::obtemProfessor() const {  return professor;  }
int Turma::obtemNumAlunos() const {  return numAlunos;  }
Aluno *Turma::obtemAluno(int i) const {  return (i<0 || i>=numAlunos)?nullptr:alunos[i];  }
int Turma::obtemNumRecursos() const {  return numRecursos;  }
Recurso *Turma::obtemRecurso(int i) const {  return (i<0 || i>=numRecursos)?nullptr:recursos[i];  }
void Turma::defineCodigo(int c) {   codigo = c;  }
void Turma::defineDisciplina(string d) {  disciplina = d;  }
void Turma::defineProfessor(Professor *p) {  professor = p;  }

bool Turma::incluiAluno(Aluno *a) {
  if (numAlunos >= MAX_ALUNOS) return false;
  alunos[numAlunos++] = a;
  return true;
}

bool Turma::incluiRecurso(Recurso *r) {
  if (numRecursos >= MAX_RECURSOS) return false;
  recursos[numRecursos++] = r;
  return true;
}

string Turma::str() const {
  stringstream ss;
  ss << "Turma: " << codigo << " - " << disciplina << endl;
  if (professor != nullptr) ss << "Professor: " << professor->str() << endl;
  if (numAlunos > 0) {
     ss << "Alunos:" << endl;
     for (int i=0; i< numAlunos; ++i)
         ss << "- " << alunos[i]->str() << endl;
  }
  if (numRecursos > 0) {
     ss << "Recursos:" << endl;
     for (int i=0; i< numRecursos; ++i)
         ss << "- " << recursos[i]->str() << endl;
  }
  return ss.str();
}
