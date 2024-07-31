// Placar.cpp (Roland Teodorowitsch; 23 out. 2019)

#include <fstream>
#include <sstream>
#include "Placar.hpp"

Placar::Nodo::Nodo(Resultado r) {
  resultado = r;
  prox = nullptr;
  ant = nullptr;
}

Placar::Placar(string arquivo) {
  nomeArquivo = arquivo;
  primeiro = nullptr;
  numResultados = 0;
  ifstream arq;
  arq.open(arquivo,ios::in);
  if (!arq.is_open())
     return;
  string linha="";
  while (getline(arq,linha)) {
        string campo;
        stringstream sslinha(linha);
        getline(sslinha,campo,';');
        string nome = campo;
        getline(sslinha,campo);
        int pontos = stoi(campo);
        insere(nome,pontos);
  }
  arq.close();
}

Placar::~Placar() {
  limpa();
}

void Placar::limpa() {
  while (primeiro != nullptr) {
        Nodo *aux = primeiro;
        primeiro = primeiro->prox;
        delete aux;
  }
  numResultados = 0;
}

int Placar::obtemNumResultados() {
  return numResultados;
}

Resultado *Placar::obtemResultado(int indice) {
  if (indice < 0 || indice >= numResultados)
     return nullptr;
  int i = 0;
  Nodo *aux = primeiro;
  while (aux != nullptr && i<=indice) {
        if (i == indice)
           return &(aux->resultado);
        ++i;
        aux = aux->prox;
  }
  return nullptr;
}

void Placar::insere(string n, int p) {
  insere(Resultado(n,p));
}

void Placar::insere(Resultado r) {
  Nodo *novo = new Nodo(r);
  if (primeiro == nullptr) {
     novo->prox = nullptr;
     novo->ant = nullptr;
     primeiro = novo;
  }
  else {
     Nodo *aux = primeiro, *anterior = nullptr;
     while (aux != nullptr && r.obtemPontos() >= aux->resultado.obtemPontos()) {
           anterior = aux;
           aux = aux->prox;
     }
     if (aux == nullptr) {
        anterior->prox = novo;
        novo->prox = nullptr;
        novo->ant = anterior;
     }
     else {
        novo->prox = aux;
        novo->ant = anterior;
        aux->ant = novo;
        if (anterior == nullptr)
           primeiro = novo;
        else
           anterior->prox = novo;
     }
  }
  ++numResultados;
}

void Placar::salva(int n) {
  ofstream arq;
  arq.open (nomeArquivo, ios::out);
  if (!arq.is_open())
     return;
  Nodo *aux = primeiro;
  int i = 0;
  while (i<n && aux != nullptr) {
        arq << aux->resultado.toCSV() << endl;
        aux = aux->prox;
        ++i;
  }
  arq.close();
}



