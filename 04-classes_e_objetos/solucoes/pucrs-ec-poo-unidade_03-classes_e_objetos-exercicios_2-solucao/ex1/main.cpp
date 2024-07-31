#include"ArCondicionado.h"

int main () {
	int i;
	ArCondicionado *ac1 = new ArCondicionado();
	ArCondicionado *ac2 = new ArCondicionado();

  ac1->setTempExt(25);
	ac2->setTempExt(31);

	for(i=0; i<5; i++)
		ac1->aumentaPotencia();
		
	for(i=0; i<10; i++)
		ac2->aumentaPotencia();

	cout << ac1->getTempAmbiente() << endl;
	cout << ac2->getTempAmbiente() << endl;


	return 0;
}