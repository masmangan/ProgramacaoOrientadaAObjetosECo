#include"Relogio.h"

Relogio::Relogio(){
  this->hora = 0;
  this->min = 0;
	this->seg = 0;
}

Relogio::~Relogio(){}

void Relogio::setHora(int hora, int min, int seg){
  this->hora = hora;
  this->min = min;
	this->seg = seg;
}

void Relogio::getHora(int *hora, int *min, int *seg){
  *hora = this->hora;
  *min = this->min;
	*seg = this->seg;
}

void Relogio::avancar(){
	if(this->seg < 59){
		this->seg++;
	} else {
		this->seg = 0;
		if(this->min < 59){
			this->min++;
		} else {
			this->min = 0;
			if(this->hora < 23){
				this->hora++;
			} else {
				this->hora = 0;
			}
		}
	}
}