// main.cpp

#include "ListaDuplamenteEncadeada.hpp"

int main() {
	ListaDuplamenteEncadeada lde;
	lde.adicionaNoFinal(1);
	lde.adicionaNoFinal(2);
	lde.adicionaNoFinal(3);
	lde.adicionaNoFinal(4);
	lde.mostra(); // 1 2 3 4
	lde.adicionaNoInicio(2);
	lde.adicionaNoInicio(3);
	lde.adicionaNoInicio(4);
	lde.mostra(); // 4 3 2 1 2 3 4
	return 0;
}

