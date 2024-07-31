// Motor.hpp (Roland Teodorowitsch; 5 abr. 2022)

#ifndef _MOTOR_HPP
#define _MOTOR_HPP

#include <iostream>
#include <string>

using namespace std;

class Motor {
private:
    double potencia;
    double capacidadeTanque;
    double nivelTanque;
    double consumoMedio;
public:
    Motor(double pot=1.0,double capTanque=45.0, double nivTanque=0.0, double consMed=10.0);
    ~Motor();
    void definePotencia(double pot);
    void defineCapacidadeTanque(double litros);
    void defineNivelTanque(double litros);
    void defineConsumoMedio(double kml);
    double obtemPontencia();
    double obtemCapacidadeTanque();
    double obtemNivelTanque();
    double obtemConsumoMedio();
    void desloca(unsigned km);
    void abastece(double litros);
    string str();
};

#endif
