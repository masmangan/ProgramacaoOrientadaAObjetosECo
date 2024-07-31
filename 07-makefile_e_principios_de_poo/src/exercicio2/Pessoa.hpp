#ifndef _PESSOA_HPP
#define _PESSOA_HPP

#include<string>

using namespace std;

class Pessoa{
private:
  string nome;
public:
  Pessoa(string n = "");
  ~Pessoa();
  string obtemNome() const;
  void defineNome(string n);
};
#endif
