// ListaLinkSinal.cpp (Roland Teodorowitsch; 21 out. 2019)

#include <sstream>
#include "ListaLinkSinal.hpp"

using namespace std;

ListaLinkSinal::Nodo::Nodo(int d) {
  dado = d;
  prox = nullptr;
  proxPos = nullptr;
  proxNeg = nullptr;
}

ListaLinkSinal::ListaLinkSinal() {
  primeiro = nullptr;
  ultimo = nullptr;
}

ListaLinkSinal::~ListaLinkSinal() {
  Nodo *aux;
  while (primeiro != nullptr) {
        aux = primeiro;
        primeiro = primeiro->prox;
        delete aux;
  }
}

void ListaLinkSinal::add(int d) {
  // Cria o novo nodo
  Nodo* novo = new Nodo(d);
  // Se a lista esta vazia, novo sera o primeiro
  if (primeiro == nullptr)
    primeiro = novo;
  else // Senao insere no final
    ultimo->prox = novo;
  ultimo = novo; // atualiza ultimo

  //Atualiza pos & neg
  Nodo *aux = primeiro;
  while (aux->prox != nullptr) {
        if (d<0) {
           if (aux->proxNeg == nullptr)
              aux->proxNeg = novo;
        }
        else {
           if (aux->proxPos == nullptr)
              aux->proxPos = novo;
        }
        aux = aux->prox;
  }   
}

string ListaLinkSinal::soPositivos() {
  stringstream ssRes;
  Nodo *aux = this->primeiro;
  bool primeiro = true;
  while (aux != nullptr) {
        if (aux->dado > 0) {
           if (primeiro)
              primeiro = false;
           else
              ssRes << " ";
           ssRes << aux->dado;
        }
        aux = aux->proxPos;
  }
  return ssRes.str();
}	

string ListaLinkSinal::soNegativos() {
  stringstream ssRes;
  Nodo *aux = this->primeiro;
  bool primeiro = true;
  while (aux != nullptr) {
        if (aux->dado < 0) {
           if (primeiro)
              primeiro = false;
           else
              ssRes << " ";
           ssRes << aux->dado;
        }
        aux = aux->proxNeg;
  }
  return ssRes.str();
}	

