// ListaCircular.cpp (Roland Teodorowitsch; 14 out. 2021)

#include <iostream>

using namespace std;

class Conteudo {
private:
	int info;
public:
	Conteudo(int i) { info = i; }
	int obtemInfo() { return info; }
	void defineInfo(int i) { info = i; }
};

class ListaCircular {
private:
	class Nodo {
	public:
		Conteudo *conteudo;
		Nodo *prox;
		Nodo(Conteudo &c) {
			conteudo = &c;
			prox = nullptr;
			// cout << "+ Nodo(" << conteudo->obtemInfo() <<") construído..." << endl;
		}
		~Nodo() {
			//cout << "- Nodo(" << conteudo->obtemInfo() <<") destruído..." << endl;
		}
	};
	Nodo *inicio, *fim;
public:
	ListaCircular() {
		inicio = fim = nullptr;
	}

	~ListaCircular() {
		limpa();
	}

	void adiciona(Conteudo &c) {
		Nodo *novo = new Nodo(c);
		if (inicio == nullptr) {
			inicio = fim = novo;
			novo->prox = novo;
		}
		else {  // Insercao no final
			fim->prox = novo;
			novo->prox = inicio;
			fim = novo;
		}
	}

	void mostra() {
		cout << "{";
		if (inicio != nullptr) {
			Nodo *aux = inicio;
			bool virgula = false;
			do {
				if (virgula) cout << ",";
				cout << aux->conteudo->obtemInfo();
				virgula = true;
				aux = aux->prox;
			} while (aux != inicio);
		}
		cout << "}" << endl;
	}

	void avanca() {
		if (inicio != nullptr) {
			inicio = inicio->prox;
			fim = fim->prox;
		}
	}

	void limpa() {
		while (inicio != nullptr) {
			Nodo *aux = inicio;
			if (inicio == fim)
				inicio = fim = nullptr;
			else
				inicio = inicio->prox;
			delete aux;
		}
	}
};

int main() {
	ListaCircular lc;
	Conteudo c1(10), c2(20), c3(30);
	lc.mostra(); // {}
	lc.adiciona(c1);
	lc.mostra(); // {10}
	lc.adiciona(c2);
	lc.mostra(); // {10,20}
	lc.adiciona(c3);
	lc.mostra(); // {10,20,30}
	lc.avanca();
	lc.mostra(); // {20,30,10}
	lc.avanca();
	lc.mostra(); // {30,10,20}
	lc.limpa();
	lc.mostra(); // {}
	return 0;
}

