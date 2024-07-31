// ListaLinkSinal.cpp (Roland Teodorowitsch; 13 maio 2019)

#include <iostream>
#include <string>
#include <sstream>

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
        Nodo(int d) {
          dado = d;
          prox = nullptr;
          proxPos = nullptr;
          proxNeg = nullptr;
        }
      };
      // Atributos
      Nodo *primeiro;
      Nodo *ultimo;

  public:
    ListaLinkSinal() {
      primeiro = nullptr;
      ultimo = nullptr;
    }

    ~ListaLinkSinal() {
      Nodo *aux;
      while (primeiro != nullptr) {
         aux = primeiro;
         primeiro = primeiro->prox;
         delete aux;
      }
    }

    void add(int d) {
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

    string soPositivos() {
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

    string soNegativos() {
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

};

int main() {
  ListaLinkSinal *lls = new ListaLinkSinal();
  lls->add(10);
  lls->add(9);
  lls->add(2);
  lls->add(-15);
  lls->add(22);
  lls->add(-122);
  cout << "Positivos: " << lls->soPositivos() << endl;
  cout << "Negativos: " << lls->soNegativos() << endl;
  delete lls;
  return 0;
}
