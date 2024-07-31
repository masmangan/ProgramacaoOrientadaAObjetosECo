#include "fracao.h"

fracao::fracao(){
  this->numerador=0;
  this->denominador=0;
}

fracao::~fracao(){}

void fracao::setN(int n){
  this->numerador=n;
}

void fracao::setD(int d){
  this->denominador=d;
}

int fracao::getN(){
  return this->numerador;
}

int fracao::getD(){
  return this->denominador;
}

string fracao::toString(){
  stringstream tmp;
  tmp << this->numerador << "/" << this->denominador;
  return tmp.str();
}

fracao fracao::operator+(fracao &f){
	fracao tmp;
	if(this->denominador == f.getD()){
		tmp.setN(this->numerador + f.getN());
		tmp.setD(this->denominador);
	} else {
		tmp.setN(this->numerador*f.getD() + f.getN()*this->denominador);
		tmp.setD(this->denominador * f.getD());
	}
  return tmp;	
}

fracao fracao::operator-(fracao &f){
	fracao tmp;
	if(this->denominador == f.getD()){
		tmp.setN(this->numerador - f.getN());
		tmp.setD(this->denominador);
	} else {
		tmp.setN(this->numerador*f.getD() - f.getN()*this->denominador);
		tmp.setD(this->denominador * f.getD());
	}
  return tmp;	
}

fracao fracao::operator*(fracao &f){
	fracao tmp;
	tmp.setN(this->numerador   * f.getN());
	tmp.setD(this->denominador * f.getD());
  return tmp;	
}

fracao fracao::operator/(fracao &f){
	fracao tmp;
	tmp.setN(this->numerador   * f.getD());
	tmp.setD(this->denominador * f.getN());
  return tmp;	
}