#ifndef _CONTA_HPP
#define _CONTA_HPP

using namespace std;

class Conta {
private:
  int numero;
  double saldo;
public:
  Conta(int n=0, double s=0.0);
  ~Conta();
  int obtemNumero() const;
  double obtemSaldo() const;
  void depositar(double valor);
  double retirar(double valor);
  double retirar();
};
#endif
