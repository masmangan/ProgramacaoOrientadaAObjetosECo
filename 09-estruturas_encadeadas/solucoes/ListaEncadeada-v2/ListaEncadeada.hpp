#ifndef _LISTAENCADEADA_H
#define _LISTAENCADEADA_H

#include "Pessoa.h"

class ListaEncadeada{
  private:
    Pessoa *inicio;
    Pessoa *fim;

public:
    int estaVazia();
    void inserePessoaNoInicio(string fulano, string endereco);
    void inserePessoaNoFinal(string fulano, string endereco);
    void imprimeLista();
    Pessoa *achaUltimo();
    Pessoa *buscaPessoa(string fulano, string endereco);
    Pessoa *buscaAnterior(string fulano, string endereco);
    Pessoa *retira(string Fulano, string endereco);
    Pessoa *retiraDoInicio();
    Pessoa *retiraDoFinal();
    int remove(string Fulano, string endereco);
    void inserePessoaEmOrdem(string fulano, string endereco);
};

#endif