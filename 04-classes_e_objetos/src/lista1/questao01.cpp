// questao01.cpp (Roland Teodorowitsch; 24 mar. 2021)

#include <iostream>

using namespace std;

class CaixaRegistradora {
  private:
    double precoTotal;
    int numItens;
  public:
    CaixaRegistradora();
    ~CaixaRegistradora();
    void adicionaItem(double preco);
    double obtemTotal();
    int obtemNumItens();
    void limpa();
};

CaixaRegistradora::CaixaRegistradora() {
  limpa();
  //cout << "+ CaixaRegistradora criada..." << endl;
}

CaixaRegistradora::~CaixaRegistradora() {
  //cout << "- CaixaRegistradora destruida..." << endl;
}

void CaixaRegistradora::adicionaItem(double preco) {
  precoTotal += preco;
  ++numItens;
}

double CaixaRegistradora::obtemTotal() {
  return precoTotal;
}

int CaixaRegistradora::obtemNumItens() {
  return numItens;
}

void CaixaRegistradora::limpa() {
  precoTotal=0.0;
  numItens = 0;
}

int main() {
    string cmd;
    double tot = 0.0, val;
    int nItens = 0;
    CaixaRegistradora *caixa = new CaixaRegistradora();
    
    while (true) {
        cin >> cmd;
        if (cmd == "C")
            caixa->limpa();
        else if (cmd == "+") {
            cin >> val;
            caixa->adicionaItem(val);
        }
        else if (cmd == "=")
            tot += caixa->obtemTotal();
        else if (cmd == "#")
            nItens += caixa->obtemNumItens();
        else if (cmd == ".")
            break;
    }
    cout << "TOTAL = " << tot << endl;
    cout << "ITENS = " << nItens << endl;
    delete caixa;
    return 0;
}
