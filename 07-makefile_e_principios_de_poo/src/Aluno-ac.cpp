#include <string>

using namespace std;

class Aluno {
  private:
    string nome;
    Notas notas;
  public:
    Aluno(string nome, double notas[3]) {
      this->nome = nome;
      this->notas.defineNotas(notas);
    }

    string obtemNome() {
      return nome;
    }

    void defineNotas(double notas[3]) {
      this->notas.defineNotas(notas);
    }

    double calculaMedia() {
      return notas.calculaMedia();
    }
};
