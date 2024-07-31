// Automovel.cpp (Roland Teodorowitsch; 5 abr. 2022)

#include <sstream>
#include "Automovel.hpp"

Automovel::Automovel(string mar,unsigned km,Motor *mot,
              Pneu *p1,Pneu *p2,Pneu *p3,Pneu *p4) {
  marca = mar;
  quilometragem = km;
  motor = mot;
  pneus[0] = p1;
  pneus[1] = p2;
  pneus[2] = p3;
  pneus[3] = p4;
  cout << "+ Automovel " << str() << " criado..." << endl;
}

Automovel::~Automovel() {
  cout << "- Automovel " << str() << " destruido..." << endl;
}

void Automovel::defineMarca(string mar) {
  marca = mar;
}

void Automovel::defineKm(unsigned km) {
  quilometragem = km;
}

void Automovel::defineMotor(Motor *mot) {
  motor = mot;
}

void Automovel::definePneu(int num,Pneu *pneu) {
  if (num>=0 && num<NUM_PNEUS)
     this->pneus[num] = pneu;
}

string Automovel::obtemMarca() {
  return marca;
}

unsigned Automovel::obtemQuilometragem() {
  return quilometragem;
}

Motor *Automovel::obtemMotor() {
  return motor;
}

Pneu *Automovel::obtemPneu(int num) {
  if (num>=0 && num<NUM_PNEUS)
     return pneus[num];
  return nullptr;
}

void Automovel::desloca(unsigned km) {
    quilometragem += km;
    if (motor != nullptr)
        motor->desloca(km);
}

void Automovel::abastece(double litros) {
    if (motor != nullptr)
        motor->abastece(litros);
}

void Automovel::calibra(double pressao) {
    for (int i=0; i<NUM_PNEUS; ++i)
        if (pneus[i] != nullptr) {
            pneus[i]->definePressao(pressao);
        }
}

string Automovel::str() {
  stringstream ss;
  ss << "marca=" << marca;
  ss << "; quilometragem=" << quilometragem;
  if (motor != nullptr)
    ss << "; " << motor->str();
  for (int i=0;i<NUM_PNEUS;++i)
      if (pneus[i] != nullptr)
        ss << "; " << pneus[i]->str();
  return ss.str();
}
