#include <iostream>
using namespace std;

class VetorDinamico {
private:
  // Declarar variáveis de instância necessárias
public :                             // Metodos a serem criados:
  VetorDinamico(int t = 10) {}       // Aloca o vetor com um tamanho recebido como parametro
  ~VetorDinamico() {}                // Desaloca o vetor
  void adiciona(int v) {}            // Coloca um dado no vetor, realocando o vetor se necessário
  int obtemTamanho() { return -1; }  // Retorna o tamanho atual do vetor
  int obtem(int i) { return -1; }    // Retorna a informação da posição i do vetor, ou -1 se i for inválido
};

int main () {
  VetorDinamico vetor(5);  int dado;
  do {
    cin >> dado;  if ( dado > 0 ) vetor.adiciona(dado);
  } while (dado > 0);
  for (int i =0; i < vetor.obtemTamanho(); ++i)  cout << vetor.obtem(i) << endl;
  return 0;
}
