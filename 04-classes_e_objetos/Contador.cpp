// Contador.cpp (Roland Teodorowitsch; 23 mar. 2021)

#include <iostream>
#include "Contador.hpp"

using namespace std;

Contador::Contador(int v) {
	valor = v;
	cout << ">> Construtor chamado (valor=" << valor << ")" << endl;
}

Contador::~Contador() {
	cout << ">> Destrutor chamado (valor=" << valor << ")" << endl;
}

int Contador::obtemValor() {
	return valor;
}

void Contador::incrementa() {
	valor = valor + 1;
}

void Contador::defineValor(int v) {
	valor = v;
}

