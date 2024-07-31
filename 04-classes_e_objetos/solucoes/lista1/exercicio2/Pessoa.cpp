// Pessoa.cpp (Roland Teodorowitsch; 26 ago. 2019)

#include <iostream>
#include "Pessoa.h"

Pessoa::Pessoa() {
  nome = "";
  idade = 0;
  altura = 0.0;
}

Pessoa::Pessoa(string nome,int idade, double altura) {
  this->nome = nome;
  this->idade = idade;
  this->altura = altura;
}

Pessoa::~Pessoa(){}

void Pessoa::defineNome(string nome) {
  this->nome = nome;
}

void Pessoa::defineIdade(int idade) {
  this->idade = idade;
}

void Pessoa::defineAltura(double altura) {
  this->altura = altura;
}

string Pessoa::obtemNome() {
  return nome;
}

int Pessoa::obtemIdade() {
  return idade;
}

double Pessoa::obtemAltura() {
  return altura;
}

void Pessoa::print() {
  cout << nome << " (" << idade << " anos; " << altura << " cm)" << endl;
}

