#include "data.h"

data::data(){
  this->dia=1;
  this->mes=1;
}

data::~data(){}

void data::setD(int d){
  this->dia=d;
}

void data::setM(int m){
  this->mes=m;
}

void data::setData(string d){
  stringstream tmp;
	char c;
	int i;
	tmp << d;
	
	tmp >> c;
	i = ((int)c - 48)*10; 
	tmp >> c;
	i += (int)c - 48;
	this->dia=i;

  tmp >> c;
	tmp >> c;
	i = ((int)c - 48)*10; 
	tmp >> c;
	i += (int)c - 48;
	this->mes=i;
}

int data::getD(){
  return this->dia;
}

int data::getM(){
  return this->mes;
}

string data::toString(){
  stringstream tmp;
	if (this->dia < 10)
		tmp << 0 << this->dia << "/";
	else
		tmp << this->dia << "/";
	if (this->mes < 10)
		tmp << 0 << this->mes;
	else
		tmp << this->mes;
  return tmp.str();
}

data data::operator+(data &d){
	data tmp;
	int i, j;
	
	i = this->dia + d.getD();
	if (i > 31)
	  tmp.setD(i-31);
	else
	  tmp.setD(i);
	
	j = this->mes + d.getM() + (i>31);
	if (j > 12)
	  tmp.setM(j-12);
	else
	  tmp.setM(j);
	
  return tmp;	
}

data data::operator-(data &d){
	data tmp;
	int i, j;
	
	i = this->dia - d.getD();
	if (i < 1)
	  tmp.setD(31 + i);
	else
	  tmp.setD(i);
	
	j = this->mes - d.getM() - (i<1);
	if (j < 1)
	  tmp.setM(12 + j);
	else
	  tmp.setM(j);
	
  return tmp;	
}