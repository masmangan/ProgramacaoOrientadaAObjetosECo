#include <iostream>

using namespace std;

class Contador {
private:
	int valor;
public:
	static const int DEFAULT = 0; // Constante de classe
	Contador(int v = DEFAULT) {
		valor = v;
		#ifdef DEBUG
		cerr << "+ Contador(" << valor << ") criado..." << endl;
		#endif
	}
	~Contador() {
		#ifdef DEBUG
		cerr << "- Contador(" << valor << ") destruído..." << endl;
		#endif
	}
	int obtemValor() { // Getter
		return valor;
	}
	void incrementa() { // Mutator
		++valor;
	}
	void defineValor(int v) { // Mutator (Setter)
		valor = v;
	}
	void zera() { // Mutator
		valor = DEFAULT;
	}
};

Contador c7(10000);

void funcao() {
  Contador c8(-10);
}

int main() {
	Contador c1, c2(10);
	Contador c3(); // Cuidado: isto é um protótipo (e não um objeto)
	Contador *c4;  // Cuidado: é só um ponteiro para um objeto
	Contador *c5 = new Contador(100);
	cout << "c1: " << c1.obtemValor() << endl;	
	cout << "c2: " << c2.obtemValor() << endl;	
	cout << "c5: " << c5->obtemValor() << endl;
	delete c5;
	if (true) {
		Contador c6(1000);
		c6.incrementa();
		funcao();
	}
	c1.incrementa();
	c2.incrementa();
	cout << "c1: " << c1.obtemValor() << endl;	
	cout << "c2: " << c2.obtemValor() << endl;	
	cout << "Contador::DEFAULT = " << Contador::DEFAULT << endl;
	return 0;
}
