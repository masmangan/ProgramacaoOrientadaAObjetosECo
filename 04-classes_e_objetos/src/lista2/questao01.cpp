// questao01.cpp (Roland Teodorowitsch; 19 ago. 2021)

#include <iostream>

using namespace std;

class Elevador {
private:
    int ocupacao;
    int capacidade;
    int andarAtual;
    int totalAndares;
public:
    Elevador(int cap=8, int an=10);
    ~Elevador();
    bool entra();
    bool sai();
    bool sobe();
    bool desce();
    int obtemOcupacao();
    int obtemCapacidade();
    int obtemAndarAtual();
    int obtemTotalAndares();
};


Elevador::Elevador(int cap, int an) {
    andarAtual = 0;
    totalAndares = an;
    capacidade = cap;
    ocupacao = 0;
    //cout << "+ Elevador " << capacidade << "P/" << totalAndares << "A criado..." << endl;
}

Elevador::~Elevador() {
    //cout << "+ Elevador " << capacidade << "P/" << totalAndares << "A destruído..." << endl;
}
bool Elevador::entra() {
    if (ocupacao>=capacidade)
        return false;
    ++ocupacao;
    return true;
}
bool Elevador::sai() {
    if (ocupacao<=0)
        return false;
    --ocupacao;
    return true;
}

bool Elevador::sobe() {
    if (andarAtual>=totalAndares-1)
        return false;
    ++andarAtual;
    return true;
}

bool Elevador::desce() {
    if (andarAtual<=0)
        return false;
    --andarAtual;
    return true;
}

int Elevador::obtemAndarAtual() {
    return andarAtual;
}

int Elevador::obtemTotalAndares() {
    return totalAndares;
}

int Elevador::obtemCapacidade() {
    return capacidade;
}

int Elevador::obtemOcupacao() {
    return ocupacao;
}

int main() {
    int cap, totAnd, naoIng = 0;
    int linha = 1;
    cin >> cap >> totAnd;
    Elevador *e = new Elevador(cap,totAnd);
    string cmd;
    while (true) {
        ++linha;
        cin >> cmd;
        if (cmd == "+") {
            if (e->entra()==false)
                ++naoIng;
        }
        else if  (cmd == "-") {
            if (e->sai()==false)
                cerr << "ERRO (linha=" << linha << ")" << endl;
        }
        else if (cmd == "^")
            e->sobe();
        else if (cmd == "v")
            e->desce();
        else if (cmd == ".")
            break;
        else
            cerr << "COMANDO DESCONHECIDO" << endl;
    }
    cout << "OCUPAÇÃO =        " << e->obtemOcupacao() << endl;
    cout << "ANDAR =           " << e->obtemAndarAtual() << endl;
    cout << "NÃO INGRESSARAM = " << naoIng << endl;
    delete e;
    return 0;
}
