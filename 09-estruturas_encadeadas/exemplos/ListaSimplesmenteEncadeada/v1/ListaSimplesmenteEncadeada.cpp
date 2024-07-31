// ListaSimplesmenteEncadeada.cpp (Roland Teodorowitsch; 12 maio 2019)

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

#define FIFO 0
#define LIFO 1

class ListaSimplesmenteEncadeada {  // Classe externa

  private:
    class Nodo {  // Classe interna
      public:
        int elemento;
	Nodo *prox;
	Nodo(int e){
           elemento = e;
           prox = nullptr;
        }
    };
    // Atributos
    int politica;
    Nodo* primeiro, *ultimo;

  public:
    ListaSimplesmenteEncadeada(int p){
      if (p!=FIFO && p!=LIFO)
         p = FIFO;
      politica = p;
      primeiro = ultimo = nullptr;
    }
	
    ~ListaSimplesmenteEncadeada(){
      Nodo *aux;
      while (primeiro != nullptr) {
         aux = primeiro;
         primeiro = primeiro->prox;
         delete aux;
      }
    }
	
    void add(int e) {
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

    int del(int *res) {
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

    string toString() {
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

};

int main() {
  int res;

  cout << "--- FIFO ---" << endl;
  ListaSimplesmenteEncadeada *lseFIFO = new ListaSimplesmenteEncadeada(FIFO);
  lseFIFO->add(1);
  lseFIFO->add(3);
  lseFIFO->add(5);
  lseFIFO->add(4);
  lseFIFO->add(2);
  cout << "Lista: " << lseFIFO->toString() << endl;

  if ( lseFIFO->del(&res) == 1 )
     return 1;
  cout << "Retirou " << res << endl;
  cout << "Lista: " << lseFIFO->toString() << endl;

  if ( lseFIFO->del(&res) == 1 )
     return 1;
  cout << "Retirou " << res << endl;
  cout << "Lista: " << lseFIFO->toString() << endl;

  delete lseFIFO;

  cout << "--- LIFO ---" << endl;
  ListaSimplesmenteEncadeada *lseLIFO = new ListaSimplesmenteEncadeada(LIFO);
  lseLIFO->add(1);
  lseLIFO->add(3);
  lseLIFO->add(5);
  lseLIFO->add(4);
  lseLIFO->add(2);
  cout << "Lista: " << lseLIFO->toString() << endl;

  if ( lseLIFO->del(&res) == 1 )
     return 1;
  cout << "Retirou " << res << endl;
  cout << "Lista: " << lseLIFO->toString() << endl;

  if ( lseLIFO->del(&res) == 1 )
     return 1;
  cout << "Retirou " << res << endl;
  cout << "Lista: " << lseLIFO->toString() << endl;

  delete lseLIFO;

  return 0;
}
