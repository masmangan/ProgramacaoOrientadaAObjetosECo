// Automovel.hpp (Roland Teodorowitsch; 5 abr. 2022)

#ifndef _AUTOMOVEL_HPP
#define _AUTOMOVEL_HPP

#include <iostream>
#include <string>
#include "Motor.hpp"
#include "Pneu.hpp"

#define NUM_PNEUS 4

using namespace std;

class Automovel {
  private:
    string   marca;
    unsigned quilometragem;
    Motor    *motor;
    Pneu     *pneus[NUM_PNEUS];

  public:
    Automovel(string mar="indefinida",unsigned km=0,Motor *mot=nullptr,
              Pneu *p1=nullptr,Pneu *p2=nullptr,Pneu *p3=nullptr,Pneu *p4=nullptr);
    ~Automovel();
    void defineMarca(string mar);
    void defineKm(unsigned km);
    void defineMotor(Motor *mot);
    void definePneu(int num,Pneu *pneu);
    string obtemMarca();
    unsigned obtemQuilometragem();
    Motor *obtemMotor();
    Pneu *obtemPneu(int n);
    void desloca(unsigned km);
    void abastece(double litros);
    void calibra(double pressao);
    string str();
};

#endif
