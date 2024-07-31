#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

void imprime_vector(vector<int> v) {
	cout << "[" << v.size() << "]: ";
	/*
	for (int i=0; i<v.size(); ++i) {
		if (i>0) cout << " ";
		cout << v[i];
	}
	*/
	for (vector<int>::iterator i=v.begin(); i!=v.end(); ++i) {
		if (i!=v.begin()) cout << " ";
		cout << *i;
	}
	cout << endl;
}

class Base {
private:
	int valor;
public:
	Base(int v) : valor(v) {
		cout << "+ Base criado (valor=" << valor << ")" << endl;
	}
	~Base() {
		cout << "- Base destruido (valor=" << valor << ")" << endl;
	}
	int obtemValor() { return valor; }
	void defineValor(int v) { valor = v; }
};

int main() {
	vector<int> v1;
	imprime_vector(v1);
	v1.push_back(1);
	imprime_vector(v1);
	v1.push_back(2);
	imprime_vector(v1);
	v1.push_back(4);
	imprime_vector(v1);
	v1.push_back(5);
	imprime_vector(v1);

	v1.insert( v1.begin()+2 , 4, 3 );
	imprime_vector(v1);

	v1.clear();
	imprime_vector(v1);


	Base *b1 = new Base(10);
	Base *b2 = new Base(20);
	Base *b3 = new Base(30);
	vector<Base *> bases;
	bases.push_back(b1);
	bases.push_back(b2);
	bases.push_back(b3);
	for (int i=0; i<bases.size(); ++i) {
		cout << bases[i]->obtemValor() << endl;
	}
	while (!bases.empty()) {
		Base *b = bases[0];
		bases.erase(bases.begin());
		delete b;
	}
	
	return 0;
}

