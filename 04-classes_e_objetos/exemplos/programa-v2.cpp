// programa-v2.cpp (Roland Teodorowitsch; 31 ago. 2020)

#include <iostream&gt;

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

Contador::Contador(int v = 0) {
	valor = v;
	cout << "Contador criado com valor=" << valor << "..." << endl; 
}

Contador::~Contador() {
	cout << "Contador com valor=" << valor << " destruido..." << endl; 
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
	// Contador c0(); // NAO eh um objeto, mas um prototipo
	Contador c1;
	Contador *c2 = new Contador(10);
	Contador c3(10);
	Contador *c4 = new Contador();
	Contador *c5;
	c1.incrementa();
	c1.incrementa();
	cout << "c1.obtemValor()=" << c1.obtemValor() << endl; // 2
	c2-&gt;incrementa();
	cout << "c2-&gt;obtemValor()=" << c2-&gt;obtemValor() << endl; // 11
	c3.incrementa();
	c3.incrementa();
	c3.incrementa();
	cout << "c3.obtemValor()=" << c3.obtemValor() << endl; // 13
	c4-&gt;incrementa();
	c4-&gt;incrementa();
	c5 = c4;
	c5-&gt;incrementa();
	cout << "c4-&gt;obtemValor()=" << c4-&gt;obtemValor() << endl; // 3
	cout << "c5-&gt;obtemValor()=" << c5-&gt;obtemValor() << endl; // 3
	delete c2;
	delete c4;
	c5 = &amp;c1;
	c5-&gt;incrementa();
	c5-&gt;incrementa();
	cout << "c1.obtemValor()=" << c1.obtemValor() << endl; // 4
	cout << "c5-&gt;obtemValor()=" << c5-&gt;obtemValor() << endl; // 4
	return 0;
}
