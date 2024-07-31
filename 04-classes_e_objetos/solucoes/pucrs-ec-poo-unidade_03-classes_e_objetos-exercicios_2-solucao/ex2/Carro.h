#ifndef _CARRO_H
#define _CARRO_H

#include<iostream>
#include<string>
#include<sstream>

using namespace std;

class Carro{
    private:
      int distPerc;
      float combustivel;

    public:
      Carro();
			~Carro();
			void abastecer(float qntGasolina);
			int moverCarro(int distancia);
			float getQntCombustivel();
			int getDistanciaPercorrida();
			string toString();
};

#endif