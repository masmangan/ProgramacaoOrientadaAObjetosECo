// app.cpp (Roland Teodorowitsch; 23 mar. 2021)

#include <iostream>
#include "Contador.hpp"

using namespace std;

int main() {
	Contador c1;
	Contador *c2 = new Contador(10);
	c2->incrementa();
	c2->incrementa();
	cout << c2->obtemValor() << endl;
	delete c2;
	c1.incrementa();
	c1.incrementa();
	c1.incrementa();
	cout << c1.obtemValor() << endl;
	return 0;
}

