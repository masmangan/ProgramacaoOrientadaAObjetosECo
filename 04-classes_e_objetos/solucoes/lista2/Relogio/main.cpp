// Arquivo: main.cpp (Roland Teodorowitsch; 25 mar. 2019)

#include "Relogio.h"

Relogio r4(1,2,3);

int main() {
  Relogio *r1 = new Relogio(8,30,0);
  int h,m,s;
  r1->obtemHora(&h,&m,&s);
  r1->mostra();
  r1->defineHora(9,59,59);
  r1->obtemHora(&h,&m,&s);
  r1->mostra();
  r1->avancaUmSeg();
  r1->obtemHora(&h,&m,&s);
  r1->mostra();
  delete r1;

  Relogio r2(8,46,51);
  r2.mostra();

  r4.mostra();

  Relogio r5;
  r5.mostra();

  return 0;
}
