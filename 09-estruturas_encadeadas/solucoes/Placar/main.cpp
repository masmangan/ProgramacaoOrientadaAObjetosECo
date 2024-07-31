// main.cpp (Roland Teodorowitsch; 23 out. 2019)

#include <iostream>
#include "Resultado.hpp"
#include "Placar.hpp"

using namespace std;

int main() {
  Placar placar("escores.csv");
  int tam = placar.obtemNumResultados();
  for (int i=0; i<tam; ++i) {
      Resultado *r = placar.obtemResultado(i);
      cout << r->toString() << endl;
  }
  cout << "------------------" << endl;
  placar.insere("Jogador10", 10);
  Resultado result("Jogador20",20);
  placar.insere(result);
  placar.insere("Jogador1", 1);
  placar.insere("Jogador10a", 10);
  placar.insere("Jogador7", 7);
  placar.insere("Jogador20", 20);
  placar.insere("Jogador15", 15);
  placar.insere("Jogador10b", 10);

  placar.salva(10);

  tam = placar.obtemNumResultados();
  for (int i=0; i<tam; ++i) {
      Resultado *r = placar.obtemResultado(i);
      cout << r->toString() << endl;
  }
  cout << "------------------" << endl;

  return 0;
}
