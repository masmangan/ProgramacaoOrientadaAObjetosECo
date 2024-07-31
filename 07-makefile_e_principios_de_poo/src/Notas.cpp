class Notas {
  private:
    double notas[3];
  public:
    Notas() {
      for (int i=0; i<3; ++i)
          notas[i] = 0.0;
    }

    Notas(double notas[3]) {
      defineNotas(notas);
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
