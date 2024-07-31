// Contador.cpp (Roland Teodorowitsch; 21 ago.2023)
#include <iostream>
#include "Contador.hpp"

Contador::Contador(int v) {
	valor = v;
	#ifdef DEBUG
	cerr << "+ Contador(" << valor << ") criado..." << endl;
	#endif
}

Contador::~Contador() {
	#ifdef DEBUG
	cerr << "- Contador(" << valor << ") destruído..." << endl;
	#endif
}

int Contador::obtemValor() { // Getter
	return valor;
}

void Contador::incrementa() { // Mutator
	++valor;
}

void Contador::defineValor(int v) { // Mutator (Setter)
	valor = v;
}

void Contador::zera() { // Mutator
	valor = DEFAULT;
}


