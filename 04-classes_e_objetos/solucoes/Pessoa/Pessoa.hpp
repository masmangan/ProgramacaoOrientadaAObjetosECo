// Pessoa.hpp

#ifndef _PESSOA_HPP
#define _PESSOA_HPP

class Pessoa {
  private:
    string nome;
    int idade;
    double altura;
  public:
    Pessoa();
    Pessoa(string n, int i, double a);
    ~Pessoa();
    string obtemNome();
    int obtemIdade();
    double obtemAltura();
    void defineNome(string n);
    void defineIdade(int i);
    void defineAltura(double a);
};

#endif
