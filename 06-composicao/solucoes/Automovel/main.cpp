// main.cpp (Roland Teodorowitsch; 5 abr. 2022)

#include <iostream>
#include "Automovel.hpp"
#include "Motor.hpp"
#include "Pneu.hpp"

using namespace std;

int main() {
  Automovel vazio;
  cout << "Automovel vazio: " << vazio.str() << endl;

  Motor *motor = new Motor(134.0, 50.0, 10.0, 17.0);
  Pneu *p1 = new Pneu("Pirelli", 26.5);
  Pneu *p2 = new Pneu("Pirelli", 26.0);
  Pneu *p3 = new Pneu("Pirelli", 27.0);
  Pneu *p4 = new Pneu("Pirelli", 27.5);
  Automovel *up = new Automovel("VW Up! TSI",12345,motor,p1,p2,p3,p4);
  cout << "Automovel: " << up->str() << endl;
  
  up->desloca(85);
  up->abastece(10.0);
  up->calibra(28.0);
  cout << "Automovel: " << up->str() << endl;
  
  delete up;
  delete p4;
  delete p3;
  delete p2;
  delete p1;
  delete motor;
  
  return 0;
}
