#include"Relogio.h"

int main () {
	Relogio *r1 = new Relogio();
	int h, m, s;

	// set horario
  r1->setHora(5, 59, 58);
	
	// get horario
	r1->getHora(&h, &m, &s);
	cout << h << ":" << m << ":" << s << endl;
	
	// testar outro horario
	r1->avancar();
	r1->avancar();
	r1->avancar();
	r1->getHora(&h, &m, &s);
	cout << h << ":" << m << ":" << s << endl;

	return 0;
}