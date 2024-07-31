// ArvoreBinaria.cpp (Roland Teodorowitsch; 17 maio 2022)

#include <iostream>

using namespace std;

class ArvoreBinaria {
private:
	class Nodo {
	public:
		int valor;
		Nodo *esq, *dir;
		Nodo(int v) {
			valor = v;
			esq = dir = nullptr;
			#ifdef DEBUG
			cerr << "+Nodo("<<v<<") criado..." << endl;
			#endif
		}
		~Nodo() {
			#ifdef DEBUG
			cerr << "-Nodo("<<valor<<") destruído..." << endl;
			#endif
		}
	};
	Nodo *raiz;
	void desaloca(Nodo *n) {
		if (n->esq != nullptr) desaloca(n->esq);
		if (n->dir != nullptr) desaloca(n->dir);
		delete n;
        }
public:
	ArvoreBinaria() {
		raiz = nullptr;
		#ifdef DEBUG
		cerr << "+ArvoreBinaria() criada..." << endl;
		#endif
	}
	~ArvoreBinaria() {
		#ifdef DEBUG
		cerr << "-ArvoreBinaria() destruída..." << endl;
		#endif
		if (raiz != nullptr) desaloca(raiz);
	}

	void adiciona(Nodo *n, int v) {
		if (v < n->valor) {
			if (n->esq == nullptr)
				n->esq = new Nodo(v);
			else
				adiciona(n->esq,v);
		}
		else {
			if (n->dir == nullptr)
				n->dir = new Nodo(v);
			else
				adiciona(n->dir,v);
		}
	}
	void adiciona(int v) {
		if (raiz==nullptr)
			raiz = new Nodo(v);
		else
			adiciona(raiz,v);
	}

	void emOrdem(Nodo *n){
		if (n==nullptr) return;
		emOrdem(n->esq);
		cout << n->valor << " ";
		emOrdem(n->dir);
	}
	void emOrdem() {
		emOrdem(raiz);
		cout << endl;
	}

	void preOrdem(Nodo *n){
		if (n==nullptr) return;
		cout << n->valor << " ";
		preOrdem(n->esq);
		preOrdem(n->dir);
	}
	void preOrdem() {
		preOrdem(raiz);
		cout << endl;
	}

	void posOrdem(Nodo *n){
		if (n==nullptr) return;
		posOrdem(n->esq);
		posOrdem(n->dir);
		cout << n->valor << " ";
	}
	void posOrdem() {
		posOrdem(raiz);
		cout << endl;
	}
};


int main() {
	ArvoreBinaria arb;
	arb.adiciona(5);
	arb.adiciona(3);
	arb.adiciona(1);
	arb.adiciona(4);
	arb.adiciona(0);
	arb.adiciona(2);
	arb.adiciona(8);
	arb.adiciona(6);
	arb.adiciona(9);
	arb.adiciona(7);
	cout << "         __(5)__" << endl;
	cout << "        /        \\" << endl;
	cout << "      (3)        (8)" << endl;
	cout << "      /  \\       / \\" << endl;
	cout << "    (1)  (4)   (6) (9)" << endl;
	cout << "    / \\          \\" << endl;
	cout << "  (0) (2)        (7)" << endl << endl;
	cout << "emOrdem: ";
	arb.emOrdem();
	cout << "preOrdem: ";
	arb.preOrdem();
	cout << "posOrdem: ";
	arb.posOrdem();
	return 0;
}
	
