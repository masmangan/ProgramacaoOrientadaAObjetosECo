#ifndef _FRACAO_H
#define _FRACAO_H

#include <iostream>
#include <sstream>
#include <string>
#include <cmath>

using namespace std;

class fracao{
  private:
    int numerador;
		int denominador;

  public:
    fracao();
		~fracao();

    void setN(int n);
		void setD(int d);
		int getN();
		int getD();
    string toString();
		
    fracao operator+(fracao &f);
		fracao operator-(fracao &f);
    fracao operator*(fracao &f);
		fracao operator/(fracao &f);
};

#endif