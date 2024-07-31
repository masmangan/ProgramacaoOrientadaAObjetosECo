// questao02.cpp (Roland Teodorowitsch; 25 mar. 2021)

#include <iostream>

using namespace std;

class Pessoa {
  private:
    string nome;
    int idade;
    double peso;
  public:
    Pessoa();
    ~Pessoa();
    string obtemNome();
    int obtemIdade();
    double obtemPeso();
    void defineNome(string n);
    void defineIdade(int i);
    void definePeso(double p);
    void fazAniversario();
    void engorda(double kg);
};

Pessoa::Pessoa() {
    nome = "";
    idade = 0;
    peso = 0.0;
    //cout << "+ Pessoa criada..." << endl;
}

Pessoa::~Pessoa() {
    //cout << "- Pessoa destruida..." << endl;
}

string Pessoa::obtemNome() {
    return nome;
}

int Pessoa::obtemIdade() {
    return idade;
}

double Pessoa::obtemPeso() {
    return peso;
}

void Pessoa::defineNome(string n) {
    nome = n;
}

void Pessoa::defineIdade(int i) {
    idade = i;
}

void Pessoa::definePeso(double p) {
    peso = p;
}

void Pessoa::fazAniversario() {
    idade++;
}

void Pessoa::engorda(double kg) {
    peso += kg;
}

int main() {
    Pessoa p;
    
    p.defineNome("Joao da Silva");
    p.defineIdade(20);
    p.definePeso(75.5);
    for (int i=0; i<5; ++i) {
        p.fazAniversario();
        p.engorda(0.1 + i/100.0);
    }
    cout << p.obtemNome() << endl;
    cout << p.obtemIdade() << endl;
    cout << p.obtemPeso() << endl;
    return 0;
}
