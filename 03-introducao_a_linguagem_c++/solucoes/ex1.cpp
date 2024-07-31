/*
   Autor: Roland Teodorowitsch
   Data: 11 mar. 2019
   Assunto:
   Usando a linguagem C++, escreva um programa que permita armazenar o nome,
   a altura e a data de nascimento de até 10 pessoas. Cada pessoa deve ser
   representada por uma struct dentro de um vetor. A data de nascimento
   também deve ser uma struct que contêm os campos dia, mês e ano. O nome e a
   altura de cada pessoa devem ser informados pelo teclado. A geração da data
   de nascimento deve ser feita aleatoriamente. O programa deve, na tela de abertura,
   apresentar opções para: (1) inserir/cadastrar um a pessoa; (2) listar todos os
   nomes e respectivas alturas das pessoas cadastradas ; (3) listar os nomes
   das pessoas que nasceram antes de uma certa data fornecida; e (4) sair do
   programa.
*/

#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>

#define MAX_PESSOAS 10

using namespace std;

typedef struct {
    int dia;
    int mes;
    int ano;
} data_t;

typedef struct {
    string nome;
    double altura;
    data_t nascimento;
} pessoa_t;

bool ehBissexto(int ano) {
  if (ano % 4 != 0)
     return false;
  if (ano % 400 == 0)
     return true;
  if (ano % 100 == 0)
     return false;
  return true;
}

int main() {
    pessoa_t pessoas[MAX_PESSOAS];
    int num_pessoas = 0;
    int opcao, i, dia, mes, ano;

    srand((unsigned)time(0));

    bool fim = false;
    while (!fim) {

        // Menu
        cout << endl;
        cout << "Opcoes: " << endl;
        cout << "(1) inserir/cadastrar pessoa" << endl;
        cout << "(2) listar pessoas" << endl;
        cout << "(3) consultar quem nasceu antes de determinada data" << endl;
        cout << "(4) sair" << endl;
        cout << "Sua escolha: ";
        cin >> opcao;

        switch(opcao) {
            case 1:
                 cout << endl;
                 if (num_pessoas < MAX_PESSOAS) {
                    cout << "Dados da pessoa: " << endl;
                    cout << "Nome: ";
                    cin >> pessoas[num_pessoas].nome;
                    cout << "Altura: ";
                    cin >> pessoas[num_pessoas].altura;
                    dia = rand()%31+1;
                    mes = rand()%12+1;
                    ano = 2018 - rand()%100;
                    // Validacao de datas
                    if (dia > 30 && (mes==4 || mes==6 || mes==9 || mes==11))
                       dia = 30;
                    if (mes == 2 && dia>28) {
                       if (ehBissexto(ano) && dia>29)
                          dia = 29;
                       else
                          dia = 28;
                    }
                    pessoas[num_pessoas].nascimento.dia = dia;
                    pessoas[num_pessoas].nascimento.mes = mes;
                    pessoas[num_pessoas].nascimento.ano = ano;
                    ++num_pessoas;
                 }
                 else
                    cout << "ERRO: numero maximo de pessoas atingido!" << endl;
                 break;
            case 2:
                 cout << endl << "PESSOAS: " << endl;
                 for (i=0; i<num_pessoas; ++i) {
                    cout << pessoas[i].nome << " - " << pessoas[i].altura << " - ";
                    cout << setfill('0') << setw(2) << pessoas[i].nascimento.dia;
                    cout << "/";
                    cout << setfill('0') << setw(2) << pessoas[i].nascimento.mes;
                    cout << "/";
                    cout << setfill('0') << setw(4) << pessoas[i].nascimento.ano << endl;
                 }
                 break;
            case 3:
                 cout << endl << "Dia: ";
                 cin >> dia;
                 cout << "Mes: ";
                 cin >> mes;
                 cout << "Ano: ";
                 cin >> ano;
                 cout << endl << "PESSOAS: " << endl;
                 for (i=0; i<num_pessoas; ++i) {
                    if ( pessoas[i].nascimento.ano < ano ||
                         (pessoas[i].nascimento.ano == ano && (pessoas[i].nascimento.mes < mes || (pessoas[i].nascimento.mes == mes && pessoas[i].nascimento.dia < dia) ))) {
                        cout << pessoas[i].nome << " - " << pessoas[i].altura << " - ";
                        cout << setfill('0') << setw(2) << pessoas[i].nascimento.dia;
                        cout << "/";
                        cout << setfill('0') << setw(2) << pessoas[i].nascimento.mes;
                        cout << "/";
                        cout << setfill('0') << setw(4) << pessoas[i].nascimento.ano << endl;
                    }
                 }
                 break;
            case 4:
                 fim = true;
        }
    }
    cout << "Programa encerrado..." << endl;
    return 0;
}
