#include "fracao.h"

int main(){
  fracao f1, f2, result;
	
	f1.setN(1);
	f1.setD(3);
	cout << f1.toString() << endl;
	
	f2.setN(1);
	f2.setD(2);	
	cout << f2.toString() << endl;
	
	result = f1 + f2;
	cout << "Soma: " << result.toString() << endl;	
	
	result = f2 - f1;
	cout << "Subtracao: " << result.toString() << endl;	
	
	result = f1 * f2;
	cout << "Multiplicacao: " << result.toString() << endl;	
	
	result = f1 / f2;
	cout << "Divisao: " << result.toString() << endl;	  
  return 0;
}