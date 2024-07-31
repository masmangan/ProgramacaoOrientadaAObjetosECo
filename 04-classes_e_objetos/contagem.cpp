// contagem.cpp (Roland Teodorowitsch; 23 mar. 2021)

#include <iostream>

using namespace std;

class Contador {
	private:
		int valor;
	public:
		Contador(int v = 0);
		~Contador();
		int obtemValor();
		void incrementa();
		void defineValor(int v);
};

Contador::Contador(int v) {
	valor = v;
	cout << ">> Construtor chamado (valor=" << valor << ")" << endl;
}

Contador::~Contador() {
	cout << ">> Destrutor chamado (valor=" << valor << ")" << endl;
}

int Contador::obtemValor() {
	return valor;
}

void Contador::incrementa() {
	valor = valor + 1;
}

void Contador::defineValor(int v) {
	valor = v;
}

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

