// ListaDuplamenteEncadeada.hpp

#ifndef _LISTADUPLAMENTEENCADEADA_HPP

class ListaDuplamenteEncadeada {
	private:
		class Nodo {
			public:
				int elemento;
				Nodo *prox, *ant;
				Nodo(int e) {
					elemento = e;
					prox = ant = nullptr;
				}
		};
		Nodo *primeiro, *ultimo;
	public:
		ListaDuplamenteEncadeada();
		~ListaDuplamenteEncadeada();
		void adicionaNoInicio(int e);
		void adicionaNoFinal(int e);
		void mostra();
};

#endif
