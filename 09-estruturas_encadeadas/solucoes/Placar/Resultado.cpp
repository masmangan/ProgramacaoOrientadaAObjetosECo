// Resultado.cpp (Roland Teodorowitsch; 23 out. 2019)

#include <sstream>
#include "Resultado.hpp"

Resultado::Resultado(string n, int p) {
  nome = n;
  pontos = p;
}

string Resultado::obtemNome() {
  return nome;
}

void Resultado::defineNome(string n) {
  nome = n;
}

int Resultado::obtemPontos() {
  return pontos;
}

void Resultado::definePontos(int p) {
  pontos = p;
}

string Resultado::toString() {
  stringstream ss;
  ss << "Nome: " << nome << " (" << pontos << " pontos)";
  return ss.str();
}

string Resultado::toCSV() {
  stringstream ss;
  ss << nome << ";" << pontos;
  return ss.str();
}

