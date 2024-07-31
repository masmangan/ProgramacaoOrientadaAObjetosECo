/*
 * Arquivo: Contador.h
 * Autor: Roland Teodorowitsch
 * Data: 20 mar. 2019
 *
 */

#ifndef _CONTADOR_H
#define _CONTADOR_H

class Contador {
  private:
    int valor;
  public:
    Contador(int v = 0);
    ~Contador();
    int obtemValor();
    void incrementa();
    void defineValor(int v);
};

#endif
