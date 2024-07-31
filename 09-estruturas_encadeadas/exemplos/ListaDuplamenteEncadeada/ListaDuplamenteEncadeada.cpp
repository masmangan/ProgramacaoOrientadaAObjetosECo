// ListaDuplamenteEncadeada.cpp

#include <iostream>
#include "ListaDuplamenteEncadeada.hpp"

using namespace std;

ListaDuplamenteEncadeada::ListaDuplamenteEncadeada() {
	primeiro = ultimo = nullptr;
}

ListaDuplamenteEncadeada::~ListaDuplamenteEncadeada() {
	cout << "Destrutor de ListaDuplamenteEncadeada chamado..." << endl;
	Nodo *aux;
	while	(primeiro != nullptr) {
		aux = primeiro;
		primeiro = primeiro->prox;
		delete aux;
	}
}

void ListaDuplamenteEncadeada::adicionaNoInicio(int e) {
	Nodo *n = new Nodo(e);
	n->prox = primeiro;
	primeiro = n;
}

void ListaDuplamenteEncadeada::adicionaNoFinal(int e) {
	Nodo *n = new Nodo(e);
	if	(primeiro == nullptr)
		primeiro = ultimo = n;
	else {
		ultimo->prox = n;
		ultimo = n;
	}
}

void ListaDuplamenteEncadeada::mostra() {
	Nodo *aux;
	aux = primeiro;
	while	(aux != nullptr) {
		cout << aux->elemento << endl;
		aux = aux->prox;
	}
	cout << endl;
}

