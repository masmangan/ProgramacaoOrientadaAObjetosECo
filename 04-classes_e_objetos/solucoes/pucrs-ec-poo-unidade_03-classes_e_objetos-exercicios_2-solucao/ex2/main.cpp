#include"Carro.h"

int main () {
	int i;
	Carro *c1 = new Carro();
	Carro *c2 = new Carro();

  c1->abastecer(20);
	c2->abastecer(30);
	
	if (!c1->moverCarro(200))
		cout << "Nao moveu carro 1" << endl;

	if (!c2->moverCarro(400))
		cout << "Nao moveu carro 2" << endl;

	cout << c1->toString() << endl;
	cout << c2->toString() << endl;

	return 0;
}