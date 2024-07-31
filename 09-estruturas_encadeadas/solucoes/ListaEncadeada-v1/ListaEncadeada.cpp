#include "ListaEncadeada.h"

int ListaEncadeada::estaVazia(){
// Informa se a lista está vazia(devolve 1) ou não(devolve 0)
}

void ListaEncadeada::inserePessoaNoInicio(string fulano, string endereco){
// Crie um método que coloque um elemento no início da lista.  
}

void ListaEncadeada::inserePessoaNoFinal(string fulano, string endereco){
// Crie um método que coloque um elemento no final da lista.  
}

void ListaEncadeada::imprimeLista(){
  Pessoa *aux;
  aux = inicio;
  if (estaVazia() == 1){
    cout << "Lista Vazia !" << endl;
    return; // encerra o método aqui
  }
  cout << "----- INICIO DA LISTA -----" << endl; 
  while (aux != nullptr){
    aux->imprime();
    aux = aux->getProx();
  }      
}

Pessoa * ListaEncadeada::achaUltimo(){
// retorna um apontador para o último elemento da lista
// Caso a lista esteja vazia, o método deve devolver nullptr
}

Pessoa * ListaEncadeada::buscaPessoa(string fulano, string endereco){
// Crie um método que devolva um ponteiro para um certo elemento da lista. 
// Como parâmetro este método deve receber o nome de 
// uma pessoa a ser buscada na lista.
// Caso o nome não exista na lista, o método deve devolver nullptr
}

Pessoa * ListaEncadeada::buscaAnterior(string fulano, string endereco){
// Crie um método que devolva um ponteiro para o nodo da lista que 
// encontra-se ANTES do nodo que contém um certo elemento da lista. 
// Como parâmetro este método deve receber o nome de 
// uma pessoa a ser buscada na lista.
// Caso o nome não exista na lista, o método deve devolver nullptr.
// Caso o nome seja o primeiro da lista o método deve devolver nullptr. O 
// ideal é não chamar este quando "fulano" for o 1o. elemento da lista, ou seja, 
// deve-se testar isto antes de chamar este métodos  
}

Pessoa * ListaEncadeada::retira(string Fulano, string endereco){
// Crie um método que retire um elemento da lista.  
// Como parâmetro este método deve receber o nome de 
// uma pessoa a ser buscada na lista.
// Caso o nome não exista na lista, o método deve devolver nullptr.
// Lembre-se de fazer um teste específico para remover o 1o. elemento da 
// lista
// O método NÃO deve "deletar" o nodo da memória. 
// Dica: use o método "BuscaAnterior".
}

Pessoa * ListaEncadeada::retiraDoInicio(){
// Crie um método que remova um primeiro elemento da lista.  
// O método deve retornar um apontador para o elemento retirado da lista.
// O método NÃO deve "deletar" o nodo da memória. 
// Caso a lista esteja vazia, o método deve devolver nullptr.
}

Pessoa * ListaEncadeada::retiraDoFinal(){
// Crie um método que remova um último elemento da lista. 
// O método deve retornar um apontador para o elemento retirado da lista
// O método NÃO deve "deletar" o nodo da memória. 
// Caso a lista esteja vazia, o método deve devolver nullptr.
}

int ListaEncadeada::remove(string Fulano, string endereco){
// Crie um método que remova um elemento da lista.  
// O método deve "deletar" o nodo da memória. 
// Dica: use o método "Retira".
}

void ListaEncadeada::inserePessoaEmOrdem(string fulano, string endereco){
// Crie um método que coloque um elemento na lista, de forma que os elementos
// fiquem sempre em ordem crescente do nome da pessoa.
// Dica: Modifique o método de busca de forma que ele devolva um apontador
// para o primeiro nodo da lista no qual o atributo 'nome' seja "maior" que no 
// nome a ser inserido na lista
}
