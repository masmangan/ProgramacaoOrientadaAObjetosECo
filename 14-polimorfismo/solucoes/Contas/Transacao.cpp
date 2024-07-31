// Transacao.cpp (Roland Teodorowitsch; 6 nov. 2019)

#include <sstream>
#include <iomanip>
#include "Transacao.hpp"

Transacao::Transacao(string dt, string ds, double v) {
  data = dt;
  descricao = ds;
  valor = v;
}

string Transacao::obtemData() {
  return data;
}

string Transacao::obtemDescricao() {
  return descricao;
}

double Transacao::obtemValor() {
  return valor;
}

string Transacao::toString() {
  stringstream ss;
  ss << data << "  ";
  ss << left << setw(15) << descricao << "  ";
  ss << setw(10) << " " << "  ";
  ss << right << fixed << setprecision(2) << setw(10) << valor;
  return ss.str();
}

string Transacao::toString(double saldo) {
  stringstream ss;
  ss << data << "  ";
  ss << left << setw(15) << descricao << "  ";
  ss << right << fixed << setprecision(2) << setw(10) << valor << "  ";
  ss << right << fixed << setprecision(2) << setw(10) << saldo;
  return ss.str();
}
