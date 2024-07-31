#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

class Pessoa {
private:
	string nome;
	int idade;
public:
	Pessoa(string n = "", int i = 0) {
		nome = n;
		idade = i;
	}
	string obtemNome() { return nome; }
	int obtemIdade() { return idade; }
	string str() {
		stringstream ss;
		ss << nome << " (" << idade << ")";
		return ss.str();
	}
	bool operator<(Pessoa &p) {
		return nome < p.obtemNome();
	}
};

bool comparaPessoas(Pessoa *p1, Pessoa *p2) {
	return p1->obtemNome() < p2->obtemNome();
}

int main() {
	// COM OBJETOS
	vector<Pessoa> grupo1;
	grupo1.push_back( Pessoa("Daniel", 10) );
	grupo1.push_back( Pessoa("Andre", 11) );
	grupo1.push_back( Pessoa("Claudia", 12) );
	grupo1.push_back( Pessoa("Everton", 13) );
	grupo1.push_back( Pessoa("Beatriz", 14) );

	for (vector<Pessoa>::const_iterator it=grupo1.begin(); it!=grupo1.end(); ++it) {
                Pessoa p = *it;
		cout << p.str() << endl;
        }
	cout << endl;

	sort(grupo1.begin(),grupo1.end());

	for (vector<Pessoa>::const_iterator it=grupo1.begin(); it!=grupo1.end(); ++it) {
                Pessoa p = *it;
		cout << p.str() << endl;
	}
	cout << endl;
	
	// COM PONTEIROS DE OBJETOS
	vector<Pessoa *> grupo2;
	grupo2.push_back( new Pessoa("Daniel", 10) );
	grupo2.push_back( new Pessoa("Andre", 11) );
	grupo2.push_back( new Pessoa("Claudia", 12) );
	grupo2.push_back( new Pessoa("Everton", 13) );
	grupo2.push_back( new Pessoa("Beatriz", 14) );

	for (vector<Pessoa *>::const_iterator it=grupo2.begin(); it!=grupo2.end(); ++it) {
                Pessoa *p = *it;
		cout << p->str() << endl;
        }
	cout << endl;

	sort(grupo2.begin(),grupo2.end(),comparaPessoas);

	for (vector<Pessoa *>::const_iterator it=grupo2.begin(); it!=grupo2.end(); ++it) {
                Pessoa *p = *it;
		cout << p->str() << endl;
        }
	cout << endl;
	
	return 0;
}
