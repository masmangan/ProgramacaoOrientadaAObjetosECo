// Motor.cpp (Roland Teodorowitsch; 5 abr. 2022)

#include <sstream>
#include "Motor.hpp"

Motor::Motor(double pot,double capTanque, double nivTanque, double consMed) {
  potencia = pot;
  capacidadeTanque = capTanque;
  nivelTanque = nivTanque;
  consumoMedio = consMed;
  cout << "+ Motor " << str() << " criado..." << endl;
}

Motor::~Motor() {
  cout << "- Motor " << str() << " destruido..." << endl;
}

void Motor::definePotencia(double pot) {
  potencia = pot;
}

void Motor::defineCapacidadeTanque(double litros) {
  capacidadeTanque = litros;
}

void Motor::defineNivelTanque(double litros) {
  nivelTanque = litros;
}

void Motor::defineConsumoMedio(double kml) {
  consumoMedio = kml;
}

double Motor::obtemPontencia() {
  return potencia;
}

double Motor::obtemCapacidadeTanque() {
  return capacidadeTanque;
}

double Motor::obtemNivelTanque() {
  return nivelTanque;
}

double Motor::obtemConsumoMedio() {
  return consumoMedio;
}

void Motor::desloca(unsigned km) {
    double litros = km / consumoMedio;
    nivelTanque -= litros;
    if (nivelTanque < 0)
        nivelTanque = 0;
}

void Motor::abastece(double litros) {
    nivelTanque += litros;
    if (nivelTanque > capacidadeTanque)
        nivelTanque = capacidadeTanque;
}

string Motor::str() {
  stringstream ss_motor;
  ss_motor << "potencia=" << potencia;
  ss_motor << "; capacidadeTanque=" << capacidadeTanque;
  ss_motor << "; nivelTanque=" << nivelTanque;
  ss_motor << "; consumoMedio=" << consumoMedio;
  return ss_motor.str();
}

