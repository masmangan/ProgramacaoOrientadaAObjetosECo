#include <iostream>

using namespace std;

class Animal {
private:
  string nome;  int idade;
public:
  Animal(string n, int i):nome(n),idade(i) {}
  string obtemNome() { return nome; }
  int obtemIdade() { return idade; }
  virtual string emiteSom() = 0;
};

class Porco : public Animal {
public:
  Porco(string n, int i):Animal(n,i) {}           string emiteSom() { return "oinc-oinc"; }
};

class Cachorro : public Animal {
public:
  Cachorro(string n, int i):Animal(n,i) {}        string emiteSom() { return "au-au"; }
};

class Gato : public Animal {
public:
  Gato(string n, int i):Animal(n,i) {}            string emiteSom() { return "miau-miau"; }
};

int main() {
  Animal *zoo[] = { new Porco("Pepa Pig",7),   new Porco("Porquinho",5), new Cachorro("Beethoven",8),
                    new Cachorro("Marley",12), new Gato("Mingau",4),     new Gato("Garfield",10)      };
  int nAnimais = sizeof(zoo) / sizeof(Animal *);
  for (int i=0; i<nAnimais; ++i) cout << zoo[i]->obtemNome() << " " << zoo[i]->obtemIdade() << " " << zoo[i]->emiteSom() << endl;  
  for (int i=0; i<nAnimais; ++i) delete zoo[i];
  return 0;
}
