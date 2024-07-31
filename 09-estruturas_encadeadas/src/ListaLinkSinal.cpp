// ListaLinkSinal.*

#include <iostream>
#include <sstream>

using namespace std;

class ListaLinkSinal {
private:
  class Nodo {
  public:
    int dado;
    Nodo *proxPos, *proxNeg, *prox;
    Nodo(int d) {
      dado = d; proxPos = proxNeg = prox = nullptr;
      cout << "+ Nodo(" << dado << ") criado..." << endl;
    }
    ~Nodo() {
      cout << "- Nodo(" << dado << ") destruído..." << endl;
    }
  };
  Nodo *head, *headPos, *headNeg, *tail, *tailPos, *tailNeg;
public:
  ListaLinkSinal() {
    head = headPos = headNeg = tail = tailPos = tailNeg = nullptr;
    cout << "+ ListaLinkSinal() criado..." << endl;
  }
  ~ListaLinkSinal() {
    while ( head != nullptr ) {
      Nodo *aux = head;
      head = head->prox;
      delete aux;
    }
    cout << "- ListaLinkSinal() destruído..." << endl;
  }
  void add(int d) {
    Nodo *novo = new Nodo(d);
    if ( head == nullptr ) {
       head = tail = novo;
       if ( d >= 0 )
          headPos = tailPos = novo;
       else
          headNeg = tailNeg = novo;
    }
    else {
       tail->prox = novo;
       tail = novo;
       if ( d >= 0 ) { // Positivos
          if ( headPos == nullptr )
             headPos = tailPos = novo;
          else {
             tailPos->proxPos = novo;
             tailPos = novo;
          }
       }
       else {  // Negativos
          if ( headNeg == nullptr )
             headNeg = tailNeg = novo;
          else {
             tailNeg->proxNeg = novo;
             tailNeg = novo;
          }
       }
    }
  }
  string str() {
    stringstream ss;
    Nodo *aux = head;
    bool prim = true;
    while (aux != nullptr) {
      if (!prim) ss << " ";
      else prim = false;
      ss << aux->dado;
      aux = aux->prox;
    }
    return ss.str();
  }
  string soPositivos() {
    stringstream ss;
    Nodo *aux = headPos;
    bool prim = true;
    while (aux != nullptr) {
      if (!prim) ss << " ";
      else prim = false;
      ss << aux->dado;
      aux = aux->proxPos;
    }
    return ss.str();
  }
  string soNegativos() {
    stringstream ss;
    Nodo *aux = headNeg;
    bool prim = true;
    while (aux != nullptr) {
      if (!prim) ss << " ";
      else prim = false;
      ss << aux->dado;
      aux = aux->proxNeg;
    }
    return ss.str();
  }
};

int main() {
  ListaLinkSinal lista;
  lista.add(10);
  lista.add(9);
  lista.add(2);
  lista.add(-15);
  lista.add(22);
  lista.add(-122);
  cout << "Lista:     " << lista.str() << (lista.str() == "10 9 2 -15 22 -122"?" [OK]":" [ERRO]") << endl;
  cout << "Positivos: " << lista.soPositivos() << (lista.soPositivos() == "10 9 2 22"?" [OK]":" [ERRO]") << endl;
  cout << "Negativos: " << lista.soNegativos() << (lista.soNegativos() == "-15 -122"?" [OK]":" [ERRO]") << endl;
  return 0;
}