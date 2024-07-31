/*
 * Arquivo: contador.cpp
 * Autor: Roland Teodorowitsch
 * Data: 18 mar. 2019
 *
 */

#include <iostream>
#include "Contador.h"

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

