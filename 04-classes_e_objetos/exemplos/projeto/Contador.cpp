// Contador.cpp

#include <iostream>
#include "Contador.hpp"

using namespace std;

Contador::Contador(int v) {
  cout << "Construtor de Contador chamado..." << endl;
  valor = v;
}

Contador::~Contador() {
  cout << "Destrutor de Contador chamado..." << endl;
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

