// main.cpp (Roland Teodorowitsch; 16 set. 2020)

#include <iostream>
#include "Promocao.hpp"
#include "Produto.hpp"
#include "ProdutoComPaginas.hpp"
#include "ProdutoComPaginasEAno.hpp"

/*
#include "Caderno.hpp"
#include "Livro.hpp"
#include "Calendario.hpp"
*/

int main () {
    cout.precision(4);
    cout << fixed;
    cout << "-------- Objetos da classe Promocao (alocacao e uso) --------" << endl;
    Promocao semPromocao, regular("regular"), liquidacao("liquidacao"), queimaDeEstoque(0.5);
    
    cout << "Percentual de desconto [semPromocao]:     " << semPromocao.obtemPercDesconto() << endl;
    cout << "Percentual de desconto [regular]:         " << regular.obtemPercDesconto() << endl;
    cout << "Percentual de desconto [liquidacao]:      " << liquidacao.obtemPercDesconto() << endl;
    cout << "Percentual de desconto [queimaDeEstoque]: " << queimaDeEstoque.obtemPercDesconto() << endl;
    
    cout << "-------- Objeto da classe Produto (alocacao, uso e desalocacao) --------" << endl;
    Produto *caneta = new Produto("Caneta Escrita Final Azul",10.0,&semPromocao);
    cout << caneta->str() << endl;
    caneta->definePromocao(&regular);
    cout << caneta->str() << endl;
    caneta->definePromocao(&liquidacao);
    cout << caneta->str() << endl;
    caneta->definePromocao(&queimaDeEstoque);
    cout << caneta->str() << endl;
    delete caneta;
    
    cout << "-------- Objeto da classe ProdutoComPaginas (alocacao, uso e desalocacao) --------" << endl;
    ProdutoComPaginas *caderno = new ProdutoComPaginas("Caderno",20.0,100,&regular);
    cout << caderno->str() << endl;
    ProdutoComPaginas *livro = new ProdutoComPaginas("Livro: Linguagem C para Engenheiros",50.0,300,&liquidacao);
    cout << livro->str() << endl;
    delete livro;
    delete caderno;

    cout << "-------- Objeto da classe ProdutoComPaginasEAno (alocacao, uso e desalocacao) --------" << endl;
    ProdutoComPaginasEAno *calendario = new ProdutoComPaginasEAno("Calendario",16.0,12,2020,&semPromocao);
    cout << calendario->str() << endl;
    calendario->definePromocao(&queimaDeEstoque);
    cout << calendario->str() << endl;
    delete calendario;
    
    cout << "-------- Objetos da classe Promocao (desalocacao automatica) --------" << endl;

    return 0;
}
