// faltas-v2.cpp

#include <iostream>
#include <fstream>
#include "Turma.hpp"

using namespace std;

int main() {
	Turma turma;
	turma.le("faltas.txt");
	turma.realizaChamada();
	turma.escreve("faltas_copy.txt");
	return 0;
}
