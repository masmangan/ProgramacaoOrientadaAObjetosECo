#include <iostream>
using namespace std;

class VetorDinamico {
private:
  int tamanho, tamanhoMax, *vetor;
public :
  VetorDinamico(int t = 10) {
    tamanho = 0;  tamanhoMax = t;  vetor = new int[tamanhoMax];
    cout << "+ VetorDinamico(" << tamanhoMax << ") criado..." << endl;
  }
  ~VetorDinamico() {
    cout << "- VetorDinamico(" << tamanhoMax << ") destruído..." << endl;
    delete[] vetor;
  }
  void adiciona(int v) {
     if ( tamanho >= tamanhoMax ) {
        int *aux = new int[tamanhoMax + 10];
        for (int i=0; i<tamanho; ++i) aux[i] = vetor[i];
        delete[] vetor;
        vetor = aux;
        tamanhoMax += 10;
        cout << "! VetorDinamico(" << tamanhoMax << ") modificado..." << endl;
     }
     vetor[tamanho++] = v;
  }
  int obtemTamanho() { return tamanho; }
  int obtem(int i) { return (i<0 || i>=tamanho)?-1:vetor[i]; }
};

int main () {
  VetorDinamico vetor(5);  int dado;
  do {
    cin >> dado;  if ( dado > 0 ) vetor.adiciona(dado);
  } while (dado > 0);
  for (int i =0; i < vetor.obtemTamanho(); ++i)  cout << vetor.obtem(i) << endl;
  return 0;
}
