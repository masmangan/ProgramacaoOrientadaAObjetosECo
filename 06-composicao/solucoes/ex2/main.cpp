#include"Empresa.h"

int main () {
	Empresa *e1 = new Empresa("EDIPUCRS", "88.630.413/0002-81", 20);
  cout << e1->toString();
	return 0;
}