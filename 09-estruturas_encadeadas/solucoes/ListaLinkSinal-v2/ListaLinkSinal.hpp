// ListaLinkSinal.hpp (Roland Teodorowitsch; 21 out. 2019)
#ifndef _LISTALINKSINAL_HPP
#define _LISTALINKSINAL_HPP

#include <string>

using namespace std;

class ListaLinkSinal {

  private:
    // Classe interna
    class Nodo {
      public:
        int dado;
        Nodo *proxPos;
        Nodo *proxNeg;
        Nodo *prox;
        Nodo(int d);
      };
      // Atributos
      Nodo *primeiro;
      Nodo *ultimo;

  public:
    ListaLinkSinal();
    ~ListaLinkSinal();
    void add(int d);
    string soPositivos();
    string soNegativos();
};

#endif
