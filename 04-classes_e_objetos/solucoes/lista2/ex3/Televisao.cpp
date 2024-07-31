#include"Televisao.h"

Televisao::Televisao(){
  this->potencia = 0;
  this->canal = 0;
}

Televisao::~Televisao(){}

void Televisao::aumentaVolume(){
	if(this->potencia < 100)
		this->potencia++;
}

void Televisao::diminuiVolume(){
	if(this->potencia > 0)
		this->potencia--;
}

void Televisao::aumentaCanal(){
	if(this->canal < 998)
		this->canal++;
}

void Televisao::diminuiCanal(){
	if(this->canal > 0)
		this->canal--;
}

void Televisao::setCanal(int canal){
	if(canal >= 0 && canal <= 999)
		this->canal = canal;
}

int Televisao::getVolume(){
	return this->potencia;
}

int Televisao::getCanal(){
	return this->canal;
}