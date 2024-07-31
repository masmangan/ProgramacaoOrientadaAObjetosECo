// Programa de Teste
#include "Pessoa.h"
#include "ListaEncadeada.h"

int main(){
  ListaEncadeada L1;
  Pessoa *p;

  L1.imprimeLista();
  p = L1.retiraDoInicio();
  if (p != nullptr){
     cout << "Retirado do Inicio:";
     p->imprime();
     delete p;
  }
  else
     cout << "Lista vazia - Nao retirado do inicio" << endl;
    
  L1.inserePessoaNoFinal("Abel", "Ramiro");
  L1.inserePessoaNoFinal("Maria", "Ipiranga");
  L1.inserePessoaNoFinal("Cintia", "Getulio");
  L1.inserePessoaNoFinal("Luiz", "Andradas");
  L1.inserePessoaNoFinal("Carla", "Bento");
  L1.imprimeLista();
  cout << "==============" << endl ;
  p = L1.buscaPessoa("Carla", "Bento");

  cout << "==============" << endl ;
  p = L1.retiraDoInicio();
    
  if (p != nullptr){
     cout << "Retirado do Inicio:";
     p->imprime();
     delete p;
  }
  else
     cout << "Lista vazia" << endl;
  cout << "==============" << endl ;
  p = L1.buscaAnterior("Abel", "Ramiro");
  if (p == nullptr)
     cout << "Nao tem antes ou nao existe" << endl; 
  else
     p->imprime();
  cout << "==============" << endl ;
  p = L1.retira("Cintia", "Getulio");
  cout << "Retirado: ";
  if (p == nullptr)
     cout << "Dado nao exite na lista" << endl; 
  else
     p->imprime();
  L1.imprimeLista();
  cout << "==============" << endl ;
  if (L1.remove("Abel", "Ramiro") == 1)    
     cout << "Dado removido !" << endl;
  else
     cout << "Dado nao existe na lista" << endl; 
    
  p = L1.retiraDoFinal();

  if (p != nullptr) {
     cout << "Retirado do Final:";
     p->imprime();
     delete p;
  }
  else
     cout << "Lista vazia" << endl;

  L1.imprimeLista();
  cout << "==============" << endl ;
  L1.inserePessoaNoInicio("Zulmira", "Vasco");
  L1.imprimeLista();
  return 0;
}
