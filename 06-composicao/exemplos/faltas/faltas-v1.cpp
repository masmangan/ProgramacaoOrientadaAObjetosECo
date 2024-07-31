// faltas-v1.cpp

#include <iostream>
#include <fstream>
#include "Aluno.hpp"

using namespace std;

#define MAX_ALUNOS 30

int main() {
	/* TESTE
	// Joaozinho P P P F P
	Aluno joaozinho("Joaozinho");
	joaozinho.registraPresenca('P');
	joaozinho.registraPresenca('P');
	joaozinho.registraPresenca('P');
	joaozinho.registraPresenca('F');
	joaozinho.registraPresenca('P');
	cout << joaozinho.str() << endl;
	*/
	Aluno turma[MAX_ALUNOS];
	ifstream fin;
	fin.open("faltas.txt",ios::in);
	if (!fin.is_open())
		return 1;
	int numAlunos, numPresencas;
	fin >> numAlunos >> numPresencas;
	for (int a=0; a<numAlunos; ++a) {
		string n;
		fin >> n;
		turma[a].defineNome(n);
		for (int p=0; p<numPresencas; ++p) {
			char pres;
			fin >> pres;
			turma[a].registraPresenca(pres);
		}
	}
	fin.close();

	// Chamada
	for (int a=0; a<numAlunos; ++a) {
		cout << turma[a].obtemNome() << " (P/F)? ";
		char pres;
		cin >> pres;
		turma[a].registraPresenca(pres);
	}
	++numPresencas;


	// Salvando no arquivo
	ofstream fout;
	fout.open("faltas_copy.txt",ios::out);
	if (!fout.is_open())
		return 1;
	fout << numAlunos << " " << numPresencas << endl;
	for (int a=0; a<numAlunos; ++a)
		fout << turma[a].str() << endl;
	fout.close();

	return 0;
}
/*
Escreva um programa em C++ que permita a contabilização de faltas de uma turma. O
programa deve ler e escrever em um arquivo chamado faltas.txt e permitir que o
professor realize a chamada da data corrente. O formato do arquivo deve ser o seguinte:
3 5
Joaozinho P P P F P
Mariazinha F P F P P
Ryu P P P P P
Roland Teodorowitsch (POO - EC - PUCRS)
Streams
e Arquivos em C++
3 de março de 2021
20 / 23Lista de Exercícios
Lista de Exercícios
Note que:
a. A primeira linha do arquivo contém o número de alunos e o número atual de presenças ou faltas.
b. A cada chamada do programa, um novo dia de aula deve ser incluído no arquivo.
c. A cada iteração do programa, ele deve solicitar ao professor se o aluno está presente, imprimindo o nome
correspondente. O professor então deve marcar P para presente e F para ausente.
d.
No nal da chamada, o programa deve atualizar o arquivo texto e imprimir para o professor as estatísticas
de presença, indicando quantas faltas cada aluno possui até o momento e quantas aulas cada aluno
assistiu (em %).
e.
Usar o seguinte arquivo faltas.txt como exemplo:
6 14
Joaozinho P P F P F P P F P F F P P P
Mariazinha P P F P F P P P P P P P P P
Ryu P P F P F F F P P F F P P P
Bebeto P P F F F F P F P F F P P P
Jailson P P P P P P P P P P P P P P
Fernando P F P P P P P F P P F P P P
f.
Procure usar uma classe para aluno e criar um vetor de objetos dessa classe.
*/
