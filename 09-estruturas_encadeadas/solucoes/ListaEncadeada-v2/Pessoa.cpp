#include "Pessoa.h"

Pessoa::Pessoa(string n, string e){
  nome = n;
  endereco = e;
}

void Pessoa::setProx(Pessoa *p){
  prox = p;
}

Pessoa *Pessoa::getProx(){
  return prox;
}

void Pessoa::imprime(){
  cout << "Pessoa: " << nome;
  cout << "  -  " << endereco << endl;
}

string Pessoa::getNome(){
  return nome;
}

string Pessoa::getEnd(){
  return endereco;
}