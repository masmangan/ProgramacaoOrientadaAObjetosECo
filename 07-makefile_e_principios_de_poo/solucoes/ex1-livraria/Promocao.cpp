// Promocao.cpp (Roland Teodorowitsch; 16 set. 2020)

#include <iostream>
#include "Promocao.hpp"

Promocao::Promocao(double pD){
    percDesconto = pD;
    cout << "+ Promocao [" << percDesconto << "] criada..." << endl;
}
    
Promocao::Promocao(string nomePromocao){
    definePromocao(nomePromocao);
    cout << "+ Promocao [" << nomePromocao << " / " << percDesconto << "] criada ..." << endl;
}

Promocao::~Promocao(){
    cout << "- Promocao [" << percDesconto << "] destruida..." << endl;
}

void Promocao::definePromocao(string nomePromocao) {
    if (nomePromocao.compare("liquidacao") == 0)
        percDesconto = 0.3;
    else if (nomePromocao.compare("regular") == 0)
        percDesconto = 0.1;
    else
        percDesconto = 0.0;
}

void Promocao::definePercDesconto(double pD) {
    percDesconto = pD;
}

double Promocao::obtemPercDesconto(){
  return percDesconto;
}
