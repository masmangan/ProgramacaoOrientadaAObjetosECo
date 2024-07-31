#ifndef _PESSOA_H
#define _PESSOA_H

#include <iostream>
using namespace std;

class Pessoa{
  private:
    string nome, endereco;
    Pessoa *prox;

  public: 
    Pessoa(string n, string e);
    void setProx(Pessoa *p);
    Pessoa *getProx();
    void imprime();
    string getNome();
    string getEnd();
};

#endif