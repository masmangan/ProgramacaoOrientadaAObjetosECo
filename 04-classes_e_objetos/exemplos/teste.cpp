#include <iostream>

using namespace std;

class Teste {
private:
	int valor;
public:
	Teste(int v=0) {
		valor = v;
		cout << "+ Teste " << valor << " criado..." << endl;
	}
	~Teste() {
		cout << "- Teste " << valor << " destruído..." << endl;
	}
	int obtemValor() { return valor; }
	void defineValor(int v) { valor = v; }
};

void print(Teste &n) {
	cout << n.obtemValor() << endl;
	n.defineValor(10);
	cout << n.obtemValor() << endl;
}

int main() {
	Teste t(30);
	print(t);
	cout << t.obtemValor() << endl;
	return 0;
}
