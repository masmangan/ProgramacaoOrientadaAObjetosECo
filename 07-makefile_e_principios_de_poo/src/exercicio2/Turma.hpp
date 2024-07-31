#ifndef _TURMA_HPP
#define _TURMA_HPP

#include "Professor.hpp"
#include "Aluno.hpp"
#include "Recurso.hpp"

#define MAX_ALUNOS   30
#define MAX_RECURSOS 5

using namespace std;

class Turma {
private:
    int codigo;
    string disciplina;
    Professor *professor;
    int numAlunos;     Aluno *alunos[MAX_ALUNOS];
    int numRecursos;   Recurso *recursos[MAX_RECURSOS];
public:
    Turma(int c = 0, string d = "");
    ~Turma();
    int obtemCodigo() const;
    string obtemDisciplina() const;
    Professor *obtemProfessor() const;
    int obtemNumAlunos() const;
    Aluno *obtemAluno(int i) const;
    int obtemNumRecursos() const;
    Recurso *obtemRecurso(int i) const;
    void defineCodigo(int c);
    void defineDisciplina(string d);
    void defineProfessor(Professor *p);
    bool incluiAluno(Aluno *a);
    bool incluiRecurso(Recurso *r);
    string str() const;
};
#endif
