// ListaLRU.cpp (Roland Teodorowitsch; 20 maio 2020)

#include <sstream>
#include "ListaLRU.hpp"

ListaLRU::Nodo::Nodo (int e) {
    elemento = e;
    prox = nullptr;
}

ListaLRU::ListaLRU() {
    inicio = nullptr;
    fim = nullptr;
}

ListaLRU::~ListaLRU() {
    Nodo *aux;
    aux = inicio;
    while (aux != nullptr) {
        Nodo *n = aux;
        aux = aux->prox;
        delete n;
    }
}

bool ListaLRU::insere(int valor) {
    Nodo *novo = new Nodo(valor);
    if (novo == nullptr)
        return false;
    if (inicio == nullptr)
        inicio = fim = novo;
    else {
        inicio->ant = novo;
        novo->prox = inicio;
        inicio = novo;
    }
    return true;
}

bool ListaLRU::remove(int *valor) {
    if  (inicio==nullptr)
        return false;
    *valor = fim->elemento;
    Nodo *a = fim->ant;
    delete fim;
    if  (a==nullptr) {
        inicio = fim = nullptr;
    }
    else {
        a->prox = nullptr;
        fim = a;
    }
    return true;
}

bool ListaLRU::acessa(int valor) {
    Nodo *aux;
    aux = inicio;
    while (aux != nullptr) {
        if  (valor == aux->elemento) {
            // Coloca aux no inicio
            if  (aux == inicio) // Ja está no início
                return true;
            Nodo *a = aux->ant;
            Nodo *p = aux->prox;
            a->prox = p;
            if  (p == nullptr)
                fim = a;
            else
                p->ant = a;
            // Insere aux no início
            inicio->ant = aux;
            aux->ant = nullptr;
            aux->prox = inicio;
            inicio = aux;
            return true;
        }
        aux = aux->prox;
    }
    return false;
}

bool ListaLRU::possui(int valor) {
    Nodo *aux;
    aux = inicio;
    while (aux != nullptr) {
        if  (valor == aux->elemento)
            return true;
        aux = aux->prox;
    }
    return false;
}

string ListaLRU::toString() {
    stringstream ss;
    Nodo *aux;
    aux = inicio;
    ss << "";
    while (aux != nullptr) {
        if  (aux != inicio)
            ss << " ";
        ss << aux->elemento;
        aux = aux->prox;
    }
    return ss.str();
}

