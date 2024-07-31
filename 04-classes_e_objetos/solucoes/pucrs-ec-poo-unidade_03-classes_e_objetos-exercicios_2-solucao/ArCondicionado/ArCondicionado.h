// Arquivo: ArCondicionado.h (Roland Teodorowitsch; 25 mar. 2019)

#ifndef _ARCONDICIONADO_H_
#define _ARCONDICIONADO_H_

using namespace std;

class ArCondicionado {

  private:
    double temp;

  public:
    ArCondicionado(double temp = 0.0);
    ~ArCondicionado();
    void defineTempExt(double);
    double obtemTemperatura();
    void aumentaPotencia();
};

#endif
