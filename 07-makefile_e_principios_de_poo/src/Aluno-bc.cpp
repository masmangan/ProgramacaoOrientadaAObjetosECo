#include <string>
using namespace std;
class Aluno {
  private:
    string nome;
    double notas[3];
  public:
    Aluno(string nome, double notas[3]) {
      this->nome = nome;
      defineNotas(notas);
    }
    string obtemNome() {
      return nome;
    }
    void defineNotas(double notas[3]) {
      for (int i=0; i<3; ++i)
          this->notas[i] = notas[i];
    }
    double calculaMedia() {
      double soma = 0.0;
      for (int i=0; i<3; ++i)
          soma += notas[i];
      return soma / 3.0;
    }
};
