// contagem.cpp (Roland Teodorowitsch; 23 mar. 2021)

#include <iostream>

using namespace std;

class Contador {
	private:
		int valor;
	public:
		Contador(int v = 0) {
			valor = v;
			cout << ">> Construtor chamado (valor=" << valor << ")" << endl;
		}

		~Contador() {
			cout << ">> Destrutor chamado (valor=" << valor << ")" << endl;
		}

		int obtemValor() {
			return valor;
		}

		void incrementa() {
			valor = valor + 1;
		}

		void defineValor(int v) {
			valor = v;
		}

};

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

