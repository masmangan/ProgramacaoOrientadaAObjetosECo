#include"Televisao.h"

int main () {
	Televisao *t1 = new Televisao();

	// set canal
  t1->setCanal(10);
	cout << t1->getCanal() << endl;
	
	// testar outros canais
	t1->aumentaCanal();
	t1->aumentaCanal();
	cout << t1->getCanal() << endl;
	
	t1->diminuiCanal();
	t1->diminuiCanal();
	cout << t1->getCanal() << endl;

	return 0;
}