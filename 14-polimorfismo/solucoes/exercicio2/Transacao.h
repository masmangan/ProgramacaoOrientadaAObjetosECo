#ifndef TRANSACAO_H
#define TRANSACAO_H

#include <iostream>
#include <sstream>
#include <string>
#include <ctime>

using namespace std;

class Transacao{
  private:
    string date;
    float valor;
		string descricao;
  public:
    Transacao(float v, string desc);
		string toString();
};

#endif