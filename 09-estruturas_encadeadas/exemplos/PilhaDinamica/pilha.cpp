// pilha.cpp (Roland Teodorowitsch; 28 out. 2020)

#include <iostream>
#include <sstream>

using namespace std;

class Item {
private:
    string id;
    int valor;
public:
    Item(string i, int v) {
        id = i;
        valor = v;
        cout << "+ Item '" << str() << "' criado..." << endl;
    }
    ~Item() {
        cout << "- Item '" << str() << "' destruído..." << endl;
    }
    string obtemId() { return id; }
    int obtemValor() { return valor; }
    void defineId(string i) { id = i; }
    void defineValor(int v) { valor = v; }
    string str() {
        stringstream ss;
        ss << id << " (" << valor << ")";
        return ss.str();
    }
};

class PilhaDinamica {
private:
    class Nodo {
    public:
        Item *item;
        Nodo *pont;
        Nodo(Item *i) {
            item = i;
            pont = nullptr;
        }
    };
    Nodo *inicio;           
public:
    PilhaDinamica() {
        inicio = nullptr;
    }
    ~PilhaDinamica() {
        while (inicio != nullptr) {
            Nodo *aux = inicio;
            inicio = inicio->pont;
            delete aux->item;
            delete aux;
        }
    }
    void empilha(Item *p) {
        Nodo *novo = new Nodo(p);
        novo->pont = inicio;
        inicio = novo;
    }
    Item *desempilha() {
        if (inicio == nullptr)
            return nullptr;
        Item *i = inicio->item;
        Nodo *aux = inicio;
        inicio = inicio->pont;
        delete aux;
        return i;
    }
};

int main() {
    Item *i;
    PilhaDinamica itens;
    itens.empilha(new Item("A",1));
    itens.empilha(new Item("B",2));
    itens.empilha(new Item("C",3));
    itens.empilha(new Item("D",4));
    i = itens.desempilha();
    cout << "Item desempilhado: " << i->str() << endl;
    delete i;
    i = itens.desempilha();
    cout << "Item desempilhado: " << i->str() << endl;
    delete i;
    i = itens.desempilha();
    cout << "Item desempilhado: " << i->str() << endl;
    delete i;
    itens.empilha(new Item("E",5));
    return 0;
}
