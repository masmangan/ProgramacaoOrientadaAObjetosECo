#include <iostream>
#include "Turma.hpp"

using namespace std;

int main () {
  Aluno *alunos[] = {
    new Aluno("Aluno 1", 1), new Aluno("Aluno 2", 2), new Aluno("Aluno 3", 3), new Aluno("Aluno 4", 4)
  };
  int numAlunos = sizeof(alunos) / sizeof(Aluno *);
  Recurso *recursos[] = {
    new Recurso("Computador", 4), new Recurso("Projetor",1)
  };
  int numRecursos = sizeof(recursos) / sizeof(Recurso *);
  Professor *professor = new Professor("Professor 1", 234, 567.89);
  Turma *turma = new Turma(30,"Programacao Orientada a Objetos (ECo)");
  turma->defineProfessor(professor);
  for (int i=0; i<numAlunos; ++i)
      turma->incluiAluno(alunos	[i]);
  for (int i=0; i<numRecursos; ++i)
      turma->incluiRecurso(recursos[i]);

  cout << turma->str();

  delete turma;
  delete professor;
  for (int i=0; i<numRecursos; ++i)
      delete recursos[i];
  for (int i=0; i<numAlunos; ++i)
      delete alunos[i];
  return 0;
}
