// ListaSimplesmenteEncadeada.hpp (Roland Teodorowitsch; 21 out. 2019)
#ifndef _LISTASIMPLESMENTEENCADEADA_HPP
#define _LISTASIMPLESMENTEENCADEADA_HPP

#include <string>

using namespace std;

#define FIFO 0
#define LIFO 1

class ListaSimplesmenteEncadeada {  // Classe externa

  private:
    class Nodo {  // Classe interna
      public:
        int elemento;
	Nodo *prox;
	Nodo(int e);
    };
    // Atributos
    int politica;
    Nodo* primeiro, *ultimo;

  public:
    ListaSimplesmenteEncadeada(int p);
    ~ListaSimplesmenteEncadeada();
    void add(int e);
    int del(int *res);
    string toString();
};
#endif
