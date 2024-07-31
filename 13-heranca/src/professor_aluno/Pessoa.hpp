#ifndef _PESSOA_HPP
#define _PESSOA_HPP

#include <string>

using namespace std;

class Pessoa {
protected:
  string nome;
  int rg;
public:
  Pessoa(string nome="", int rg=0);
  ~Pessoa();
  void defineNome(string nome);
  void defineRG(int rg);
  string obtemNome() const;
  int obtemRG() const;
  string str() const;
};

#endif
