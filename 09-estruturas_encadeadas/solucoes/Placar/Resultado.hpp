// Resultado.hpp (Roland Teodorowitsch; 23 out. 2019)
#ifndef _RESULTADO_HPP
#define _RESULTADO_HPP

#include <string>

using namespace std;

class Resultado {
  private:
    string nome;
    int    pontos;
  public:
    Resultado(string n="", int p=0);
    string obtemNome();
    void defineNome(string n);
    int obtemPontos();
    void definePontos(int p);
    string toString();
    string toCSV();
};

#endif

