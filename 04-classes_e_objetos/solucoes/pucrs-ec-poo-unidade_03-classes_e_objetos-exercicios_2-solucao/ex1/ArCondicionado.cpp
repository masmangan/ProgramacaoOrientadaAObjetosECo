#include"ArCondicionado.h"

ArCondicionado::ArCondicionado(){
  this->potencia = 0;
  this->tempExt = 0;
}

ArCondicionado::~ArCondicionado(){}

void ArCondicionado::setTempExt(float sensor){
	this->tempExt = sensor;
}

void ArCondicionado::aumentaPotencia(){
	if(this->potencia < 10)
		this->potencia++;
}

void ArCondicionado::diminuiPotencia(){
	if(this->potencia > 0)
		this->potencia--;
}

float ArCondicionado::getTempAmbiente(){
	return this->tempExt - this->potencia*1.8;
}