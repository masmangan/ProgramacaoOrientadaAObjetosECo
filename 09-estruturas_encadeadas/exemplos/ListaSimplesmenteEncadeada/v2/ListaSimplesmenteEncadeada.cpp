// ListaSimplesmenteEncadeada.cpp (Roland Teodorowitsch; 21 out. 2019)

#include <sstream>
#include "ListaSimplesmenteEncadeada.hpp"

using namespace std;

ListaSimplesmenteEncadeada::Nodo::Nodo(int e){
  elemento = e;
  prox = nullptr;
}

ListaSimplesmenteEncadeada::ListaSimplesmenteEncadeada(int p){
  if (p!=FIFO && p!=LIFO)
     p = FIFO;
  politica = p;
  primeiro = ultimo = nullptr;
}
	
ListaSimplesmenteEncadeada::~ListaSimplesmenteEncadeada(){
  Nodo *aux;
  while (primeiro != nullptr) {
        aux = primeiro;
        primeiro = primeiro->prox;
        delete aux;
  }
}
	
void ListaSimplesmenteEncadeada::add(int e) {
  // Cria o novo nodo
  Nodo *novo = new Nodo(e);
  if (politica == FIFO) {
     // Insere no final
     // Se a lista esta vazia, este eh o primeiro nodo
     if (primeiro == nullptr)
        primeiro = novo;
     else // se a lista nao esta vazia, encadeia no final
        ultimo->prox = novo;
     ultimo = novo; // atualiza referencia para o ultimo
  }
  else {
     // Insere no inicio
     // Se a lista esta vazia, este eh o primeiro nodo
     if (primeiro == nullptr)
        primeiro = ultimo = novo;
     else {// se a lista nao esta vazia, encadeia no inicio
        novo->prox = primeiro;
        primeiro = novo;
     }
  }
}

int ListaSimplesmenteEncadeada::del(int *res) {
  if (primeiro == nullptr)
     return 1;
  Nodo *novo = primeiro;
  *res = primeiro->elemento;
  primeiro = primeiro->prox;
  if (primeiro == nullptr)
     ultimo = nullptr;
  delete novo;
  return 0;
}

string ListaSimplesmenteEncadeada::toString() {
  stringstream ssRes;
  Nodo *a = this->primeiro;
  bool primeiro = true;
  while (a != nullptr) {
        if (primeiro)
           primeiro = false;
        else
           ssRes << " ";
        ssRes << a->elemento;
        a = a->prox;
  }
  return ssRes.str();
}	

