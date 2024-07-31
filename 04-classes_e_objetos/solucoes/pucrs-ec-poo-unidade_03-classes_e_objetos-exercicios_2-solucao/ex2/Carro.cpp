#include"Carro.h"

Carro::Carro(){
  this->distPerc = 0;
  this->combustivel = 0;
}

Carro::~Carro(){}

void Carro::abastecer(float qntGasolina){
	this->combustivel += qntGasolina;
}

int Carro::moverCarro(int distancia){
	if(this->combustivel >= (float) distancia/15){
		this->distPerc += distancia;
		this->combustivel -= (float) distancia/15;
		return 1;
	}
	return 0;
}

float Carro::getQntCombustivel(){
	return this->combustivel;
}

int Carro::getDistanciaPercorrida(){
	return this->distPerc;
}

string Carro::toString(){
  stringstream tmpss;
  string tmpstr;

  tmpss << this->distPerc << " : " << this->combustivel;
  tmpss >> tmpstr;

  return tmpstr;

}