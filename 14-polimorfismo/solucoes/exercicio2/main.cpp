#include "ContaComum.h"
#include "ContaPoupanca.h"
#include "ContaLimite.h"

int main () {
	Conta *c[3];
	int num, op;
	float v;
	
	// Inicializacao
	c[0] = new ContaComum(1, "Rafael", 1000);
	c[1] = new ContaPoupanca(2, "Diego", 2000, 5);
	c[2] = new ContaLimite(3, "Enzo", 3000, 500);
	
	// Menu
	do{
		cout << "Escolha o numero da sua conta (1, 2 ou 3) ou 4 para sair: ";
		cin >> num;
		if (num >= 1 && num <=3){
		  do{
				cout << "Digite a sua operacao\n1 - Deposito\n2 - Saque\n3 - Consulta\n4 - Sair\n";
				cin >> op;
				if(op == 1){
					cout << "Digite o valor: ";
					cin >> v;
					c[num-1]->deposito(v);
				}
				if(op == 2){
					cout << "Digite o valor: ";
					cin >> v;
					if (c[num-1]->saque(v))
						cout << "Saque realizado!" << endl;
					else
						cout << "Saldo insuficiente!" << endl;
				}
				if(op == 3)
					c[num-1]->consulta();		  	
		  }while(op != 4);
		}
	}while(num != 4);

//	cout << alu.toString();
//	cout << prof.toString();
	
	return 0;
}