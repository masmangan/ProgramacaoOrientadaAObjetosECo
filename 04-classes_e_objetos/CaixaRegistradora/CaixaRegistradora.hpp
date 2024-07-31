// CaixaRegistradora.hpp

#ifndef _CAIXAREGISTRADORA_HPP
#define _CAIXAREGISTRADORA_HPP

using namespace std;

class CaixaRegistradora {
	private:
		double precoTotal;
		int numItens;
	public:
		CaixaRegistradora();
		~CaixaRegistradora();
		void adicionaItem(double preco);
		double obtemTotal();
		int obtemNumItens();
		void limpa();
};

#endif
