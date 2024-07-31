#include <iostream>
#include <sstream>

using namespace std;

class ListaOrdenada {
private:
  class Nodo {
  public:
    string nome;
    Nodo *prev, *next;
    Nodo(string n) {
      nome = n;
      prev = next = nullptr;
      cout << "+ Nodo(" << nome << ") criado..." << endl;
    }
    ~Nodo() {
      cout << "- Nodo(" << nome << ") destruído..." << endl;
    }
  };
  Nodo *head;
public:
  ListaOrdenada() {
    head = nullptr;
    cout << "+ ListaOrdenada() criada..." << endl;
  }
  ~ListaOrdenada() {
    while (head != nullptr) {
      Nodo *aux = head;
      head = head->next;
      delete aux;
    }
    cout << "- ListaOrdenada() destruída..." << endl;
  }
  void add(string n) {
    Nodo *novo = new Nodo(n);
    if ( head == nullptr )
       head = novo;
    else {
       Nodo *aux = head, *ant = nullptr;
       while ( aux != nullptr && n > aux->nome ) {
         ant = aux;
         aux = aux->next;
       }
       if ( ant == nullptr ) { // INICIO
          novo->next = head;
          head->prev = novo;
          head = novo;
       }
       else if ( aux == nullptr ) { // FIM
          ant->next = novo;
          novo->prev = ant;
       }
       else { // MEIO
          ant->next = novo;
          novo->prev = ant;
          aux->prev = novo;
          novo->next = aux;
       }
    }
  }
  string str() {
    stringstream ss;
    ss << "|";
    Nodo *aux = head;
    while (aux != nullptr) {
      ss << aux->nome << "|";
      aux = aux->next;
    }
    return ss.str();
  }
};

int main() {
  ListaOrdenada lista;
  lista.add("CAJU");
  cout << lista.str() << endl;
  lista.add("BANANA");
  cout << lista.str() << endl;
  lista.add("LARANJA");
  cout << lista.str() << endl;
  lista.add("ABACAXI");
  cout << lista.str() << endl;
  lista.add("KIWI");
  cout << lista.str() << endl;
  lista.add("UVA");
  cout << lista.str() << endl;
  return 0;
}