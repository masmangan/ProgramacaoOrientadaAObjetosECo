#ifndef _RECURSO_HPP
#define _RECURSO_HPP

#include<string>

using namespace std;

class Recurso{
private:
  string nome;
  int quantidade;
public:
  Recurso(string n="",int q=0);
  ~Recurso();
  string obtemNome() const;
  int obtemQuantidade() const;
  void defineNome(string n);
  void defineQuantidade(int q);
  string str() const;
};
#endif
