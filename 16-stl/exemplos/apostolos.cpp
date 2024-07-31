// exemplo001.cpp   (11 nov. 2021)

#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <sstream>

using namespace std;

class Apostolo {
private:
	string nome;
	int idade;
public:
	Apostolo(string n="",int i=0) {
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
	friend bool operator==(Apostolo &a1, Apostolo &a2);
	friend bool operator<(Apostolo &a1,Apostolo &a2);
};

bool operator==(Apostolo &a1, Apostolo &a2) {
	if (a1.idade != a2.idade)
		return false;
	if (a1.nome != a2.nome)
		return false;
	return true;
}
bool operator<(Apostolo &a1,Apostolo &a2) {
	if (a1.idade < a2.idade)
		return true;
	if (a1.idade > a2.idade)
		return false;
	// a1.idade == a2.idade
	if (a1.nome < a2.nome)
		return true;
	return false;
}

bool comparaPonteiroParaApostolo(Apostolo *a1, Apostolo *a2) {
	if (a1->obtemIdade() < a2->obtemIdade())
		return true;
	if (a1->obtemIdade() > a2->obtemIdade())
		return false;
	// a1->obtemIdade() == a2->obtemIdade()
	if (a1->obtemNome() < a2->obtemNome())
		return true;
	return false;
}

int main() {
	vector<Apostolo> apostolos;

	// https://www.abiblia.org/ver.php?id=8023
	cout << "apostolos.size()=" << apostolos.size() << endl;
	apostolos.push_back(Apostolo("Pedro",30));
	apostolos.push_back(Apostolo("André",33));
	apostolos.push_back(Apostolo("Tiago, filho de Zebedeu",30));
	apostolos.push_back(Apostolo("João",24));
	apostolos.push_back(Apostolo("Judas Iscariotes",30));
	apostolos.push_back(Apostolo("Felipe",30));
	apostolos.push_back(Apostolo("Bartolomeu",25));
	apostolos.push_back(Apostolo("Tomé",29));
	apostolos.push_back(Apostolo("Mateus",31));
	apostolos.push_back(Apostolo("Tiago, filho de Alfeu",26));
	apostolos.push_back(Apostolo("Tadeu",26));
	apostolos.push_back(Apostolo("Simão",28));
	cout << "apostolos.size()=" << apostolos.size() << endl;
	for (int i=0; i<apostolos.size(); ++i)
		cout << apostolos[i].str() << endl;
	cout << "---" << endl;
	apostolos.erase(apostolos.begin()+4);
	sort(apostolos.begin(),apostolos.end());
	cout << "apostolos.size()=" << apostolos.size() << endl;
	vector<Apostolo>::iterator it;
	for (it=apostolos.begin(); it!=apostolos.end(); ++it) {
		Apostolo a = *it;
		cout << a.str() << endl;
	}
	apostolos.clear();
	cout << "apostolos.size()=" << apostolos.size() << endl;

	// Outra possibilidade
	cout << "===" << endl;
	vector<Apostolo *> discipulos;
	cout << "discipulos.size()=" << discipulos.size() << endl;
	discipulos.push_back(new Apostolo("Pedro",30));
	discipulos.push_back(new Apostolo("André",33));
	discipulos.push_back(new Apostolo("Tiago, filho de Zebedeu",30));
	discipulos.push_back(new Apostolo("João",24));
	discipulos.push_back(new Apostolo("Felipe",30));
	discipulos.push_back(new Apostolo("Bartolomeu",25));
	discipulos.push_back(new Apostolo("Tomé",29));
	discipulos.push_back(new Apostolo("Mateus",31));
	discipulos.push_back(new Apostolo("Tiago, filho de Alfeu",26));
	discipulos.push_back(new Apostolo("Tadeu",26));
	discipulos.push_back(new Apostolo("Simão",28));
	discipulos.push_back(new Apostolo("Judas Iscariotes",30));
	cout << "discipulos.size()=" << discipulos.size() << endl;
	sort(discipulos.begin(),discipulos.end(),comparaPonteiroParaApostolo);
	for (int i=0; i<discipulos.size(); ++i)
		cout << discipulos[i]->str() << endl;
	for (int i=0; i<discipulos.size(); ++i)
		delete discipulos[i];
	discipulos.clear();
	return 0;
}
