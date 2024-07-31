// Pessoa.h (Roland Teodorowitsch; 26 ago. 2019)

#ifndef _PESSOA_H
#define _PESSOA_H
#include <string>

using namespace std;

class Pessoa {
  private:
    string nome;
    int idade;     // anos
    double altura; // m
  public:
    Pessoa();
    Pessoa(string nome,int idade, double altura);
    ~Pessoa();
    void defineNome(string nome);
    void defineIdade(int idade);
    void defineAltura(double altura);
    string obtemNome();
    int obtemIdade();
    double obtemAltura();
    void print();
};

#endif
