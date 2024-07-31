// Placar.hpp (Roland Teodorowitsch; 23 out. 2019)
#ifndef _PLACAR_HPP
#define _PLACAR_HPP

#include <string>
#include "Resultado.hpp"

using namespace std;

class Placar {
  private:
    class Nodo {
       public:
         Resultado resultado;
         Nodo *prox, *ant;
         Nodo(Resultado r); //** Cria um nodo atribuindo r ao campo resultado desse nodo e zerando encadeamentos
    };
    string nomeArquivo;
    Nodo *primeiro;
    int numResultados;
  public:
    Placar(string arquivo);                //** Cria um placar vazio. Se o arquivo não existir, o placar é iniciado vazio. Se existir,
                                           //   os resultados do arquivo são lidos e inseridos na lista usando insere(nome,pontos)
    ~Placar();                             //** Desaloca os nodos do placar, simplesmente chamando limpa()
    int obtemNumResultados();              //** Retorna o número de resultados no placar
    Resultado *obtemResultado(int indice); //** Retorna o endereço do resultado que está no nodo na posição índice da lista
    void insere(string n, int p);          //** Cria um resultado e o insere na lista, simplesmente chamando insere(Resultado(n,p))
    void insere(Resultado r);              //** Recebe um resultado e insere-o na lista de resultados do placar em ordem crescente
    void limpa();                          //** Desaloca cada um dos nodos de resultados do placar, deixando a lista vazia
    void salva(int n);                     //** Salva os n primeiros resultados no arquivo especificado no construtor
};

#endif
