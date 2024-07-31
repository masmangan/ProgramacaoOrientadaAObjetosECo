#include <iostream>
#include "Pessoa.hpp"
#include "Aluno.hpp"
#include "Professor.hpp"

int main () {
  Pessoa pessoa("Pessoa",1);
  Aluno aluno("Estudante", 1234, 1111, 2016);
  Professor professor("Professor", 2222, "EP", 2015, 10000.01);
  cout << pessoa.str() << endl;
  cout << aluno.str() << endl;
  cout << professor.str() << endl;
  return 0;
}
