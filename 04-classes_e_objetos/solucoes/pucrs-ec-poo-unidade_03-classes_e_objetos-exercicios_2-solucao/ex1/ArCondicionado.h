#ifndef _ARCONDICIONADO_H
#define _ARCONDICIONADO_H

#include<iostream>
#include<string>

using namespace std;

class ArCondicionado{
    private:
      int potencia;
      float tempExt;

    public:
      ArCondicionado();
			~ArCondicionado();
			void setTempExt(float sensor);
			void aumentaPotencia();
			void diminuiPotencia();
			float getTempAmbiente();
};

#endif