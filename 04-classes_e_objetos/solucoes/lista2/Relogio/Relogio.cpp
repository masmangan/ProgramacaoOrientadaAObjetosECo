// Arquivo: Relogio.cpp (Roland Teodorowitsch; 25 mar. 2019)

#include <iostream>
#include <iomanip>
#include "Relogio.h"

Relogio::Relogio(int h,int m,int s) {
  defineHora(h,m,s);
}

Relogio::~Relogio() {
}

void Relogio::defineHora(int hor,int min,int seg) {
  this->hor = hor;
  this->min = min;
  this->seg = seg;
}

void Relogio::obtemHora(int *h,int *m,int *s) {
  *h = hor;
  *m = min;
  *s = seg;
}

void Relogio::avancaUmSeg() {
  ++seg;
  if (seg >= 60) {
     seg = 0;
     ++min;
     if (min >= 60) {
        min = 0;
        ++hor;
     }
  }
}

void Relogio::mostra() {
  cout << setfill('0') << setw(2) << hor << ':' ;
  cout << setfill('0') << setw(2) << min << ':' ;
  cout << setfill('0') << setw(2) << seg << endl ;
}



