// Arquivo: ArCondicionado.cpp (Roland Teodorowitsch; 25 mar. 2019)

#include <iostream>
#include <iomanip>
#include "ArCondicionado.h"


ArCondicionado::ArCondicionado(double temp) {
  defineTempExt(temp);
}

ArCondicionado::~ArCondicionado() {
}

void ArCondicionado::defineTempExt(double t) {
  temp = t;
}

double ArCondicionado::obtemTemperatura() {
  return temp;
}

void ArCondicionado::aumentaPotencia() {
  temp -= 1.8;
}

