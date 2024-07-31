// Pessoa.hpp (Roland Teodorowitsch; 18 maio 2020)

#ifndef _PESSOA_HPP
#define _PESSOA_HPP

using namespace std;

class Pessoa{
  private:
    string nome, endereco;
  public: 
    Pessoa(string n="", string e="");
    void defineNome(string n);
    void defineEndereco(string e);
    string obtemNome();
    string obtemEndereco();
    string toString();
};

#endif
