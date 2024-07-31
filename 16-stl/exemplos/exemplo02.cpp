#include <vector>
#include <iostream>
#include <sstream>

using namespace std;

class Pessoa {
  private:
    string nome;
    int idade;
  public:
    Pessoa(string n="",int i=0) {
      nome = n;
      idade = i;
    }

    ~Pessoa() {
      cout << "Destrutor para Pessoa(" << nome;
      cout << "," << idade << ") chamado. " << endl;
    }

    string obtemNome() {
      return nome;
    }

    int obtemIdade() {
      return idade;
    }

    void defineNome(string n) {
      nome = n;
    }

    void defineIdade(int i) {
      idade = i;
    }

    string toString() {
      stringstream ss;
      ss << nome << "(" << idade << " anos)";
      return ss.str();
    }
};

int main() {
/*
  cout << "TESTE 1 iniciado" << endl;
  vector<Pessoa> pessoas1;
  pessoas1.push_back(Pessoa("Pessoa 1",1));
  pessoas1.push_back(Pessoa("Pessoa 2",2));
  pessoas1.push_back(Pessoa("Pessoa 3",4));
  for (int i=0; i<pessoas1.size(); ++i) {
      cout << pessoas1[i].toString() << endl;
  }
  pessoas1.clear();
  cout << "TESTE 1 concluido" << endl;
*/

  cout << "TESTE 2 iniciado" << endl;
  vector<Pessoa *> pessoas2;
  Pessoa *p1 = new Pessoa("Pessoa A",10);
  pessoas2.push_back(p1);
  Pessoa *p2 = new Pessoa("Pessoa B",11);
  pessoas2.push_back(p2);
  Pessoa *p3 = new Pessoa("Pessoa C",12);
  pessoas2.push_back(p3);
  for (int i=0; i<pessoas2.size(); ++i)
      cout << pessoas2[i]->toString() << endl;
  for (int i=0; i<pessoas2.size(); ++i)
      delete pessoas2[i];
  pessoas2.clear();


//  delete p1;
  cout << "TESTE 2 concluido" << endl;

  return 0;
}







