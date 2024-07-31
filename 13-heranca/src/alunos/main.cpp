#include <iostream>
#include "AlunoRegular.hpp"
#include "AlunoFinanciado.hpp"

int main() {
  AlunoRegular    ar(100001,"Beatriz Silva","4/600",8);
  AlunoFinanciado af(100002,"Augusto Alcantara","4/450",6,2018);
  cout << ar.str() << endl;
  cout << "- mensalidades:";
  for (int i=1; i<=6; ++i)
      cout << " " << ar.mensalidade(i);
  cout << endl;
  cout << af.str() << endl;
  cout << "- saldo devedor: " << af.saldoDevedor(2023) << endl;
  return 0;
}
