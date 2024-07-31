#include <iostream>

using namespace std;

class Elevador {
private:
  int andarAtual, totalAndares, capacidade, numPessoas;
public:
  Elevador(int cap, int numA) {
    inicializa(cap,numA);
  }
  void inicializa(int cap, int numA) {
    capacidade = cap;  totalAndares = numA;  andarAtual = 0;  numPessoas = 0;
  }
  bool entra() {
    if (numPessoas >= capacidade) return false;
    ++numPessoas;
    return true;
  }
  bool sai() {
    if (numPessoas <= 0) return false;
    --numPessoas;
    return true;
  }
  bool desce() {
    if (andarAtual <= 0) return false;
    --andarAtual;
    return true;
  }
  bool sobe() {
    if (andarAtual >= totalAndares) return false;
    ++andarAtual;
    return true;
  }
  int obtemCapacidade() { return capacidade; }
  int obtemTotalAndares() { return totalAndares; }
  int obtemAndarAtual() { return andarAtual; }
  int obtemNumPessoas() { return numPessoas; }
};

int main() {
  Elevador e(8,10);
  e.entra();
  e.sobe();
  e.entra();
  e.sobe();
  e.entra();
  e.entra();
  e.sobe();
  e.entra();
  e.sai();
  cout << e.obtemAndarAtual() << endl; // 3
  cout << e.obtemNumPessoas() << endl; // 4
  return 0;
}
