// TravessiaDoRio.cpp (Roland Teodorowitsch; 18 ago. 2021)
// Para se informar:
// https://www.rodadematematica.com.br/desafios/2016/9/7/ajude-o-fazendeiro-a-cruzar-o-rio-com-um-lobo-uma-cabra-e-um-repolho

#include <iostream>
#include <cstdlib>
#include <sstream>

using namespace std;

enum Personagem {
    ERRO = -1,
    VAZIO,
    LOBO,
    CABRA,
    REPOLHO
};

string strPersonagem(Personagem p) {
    switch(p) {
        case LOBO: return "[Lobo]";
        case CABRA: return "[Cabra]";
        case REPOLHO: return "[Repolho]";
    }
    return "";
}

class Barco {
private:
    int numLugares;
    Personagem *barco;
public:
    Barco(int l = 2) {
        numLugares = l;
        barco = new Personagem[numLugares];
        for (int i=0; i<numLugares; ++i)
            barco[i] = VAZIO;
    }
    Personagem ocupante(int i) {
        if (i<0 || i>=numLugares)
            return ERRO;
        return barco[i];
    }
    bool embarca(Personagem p) {
        int vazio = -1;
        for (int i=0; i<numLugares; ++i) {
            if (barco[i] == p)
                return false;
            if (barco[i] == VAZIO && vazio == -1)
                vazio = i;
        }
        if (vazio == -1)
            return false;
        barco[vazio] = p;
        return true;
    }
    bool desembarca(Personagem p) {
        for (int i=0; i<numLugares; ++i) {
            if (barco[i] == p) {
                barco[i] = VAZIO;
                return true;
            }
        }
        return false;
    }
    int numOcupantes() {
        int n = 0;
        for (int i=0; i<numLugares; ++i) {
            if (barco[i] != VAZIO)
                ++n;
        }
        return n;
    }
    string str() {
        stringstream ss;
        ss << "\\_";
        for (int i=0; i<numLugares; ++i) {
            ss << strPersonagem(barco[i]);
        }
        ss << "_/";
        return ss.str();
    }
};

class TravessiaDoRio {
private:
    Personagem lado[2][3] = {
        { VAZIO, VAZIO, VAZIO },
        { VAZIO, VAZIO, VAZIO }
    };
    int ladoBarco;
    Barco *barco;
public:
    TravessiaDoRio() {
        ladoBarco = 0;
        lado[0][0] = LOBO;
        lado[0][1] = CABRA;
        lado[0][2] = REPOLHO;
        barco = new Barco(2);
    }
    ~TravessiaDoRio() {
        delete barco;
    }
    bool resolvido() {
        if (lado[1][0]!=VAZIO && lado[1][1]!=VAZIO && lado[1][2]!=VAZIO)
            return true;
        return false;
    }
    bool tem(int l,Personagem p) {
        for (int i=0; i<3; ++i)
            if (lado[l][i] == p)
                return true;
        return false;
    }
    bool estadoValido(int l) {
        if (tem(l,LOBO) && tem(l,CABRA) && !tem(l,REPOLHO))
            return false;
        if (tem(l,CABRA) && tem(l,REPOLHO) && !tem(l,LOBO))
            return false;
        return true;
    }
    bool estadoValido() {
        return estadoValido(0) && estadoValido(1);
    }
    bool atravessaBarco() {
        ladoBarco = 1-ladoBarco;
        return true;
    }
    bool embarca(Personagem p) {
        int ind = -1;
        for (int i=0; i<3; ++i)
            if (lado[ladoBarco][i] == p) {
                ind = i;
                break;
            }
        if (ind == -1 || !barco->embarca(p)) { cerr << "OPERAÇÃO INVÁLIDA..." << endl; exit(1); }
        lado[ladoBarco][ind] = VAZIO;
        if (!estadoValido()) { cerr << "FALHOU..." << endl; exit(1); }
        return true;
    }
    bool desembarca(Personagem p) {
        int ind = -1;
        for (int i=0; i<3; ++i)
            if (lado[ladoBarco][i] == VAZIO) {
                ind = i;
                break;
            }
        if (ind == -1 || !barco->desembarca(p)) { cerr << "OPERAÇÃO INVÁLIDA..." << endl; exit(1); }
        lado[ladoBarco][ind] = p;
        if (!estadoValido()) { cerr << "FALHOU..." << endl; exit(1); }
        return true;
    }
    string str() {
        stringstream ss;
        for (int i=0; i<3; ++i)
            ss << strPersonagem(lado[0][i]);
        ss << " | ";
        if (ladoBarco==0)
            ss<< barco->str() << " ";
        ss << "_,_,_,_,_,_,_,_,_";
        if (ladoBarco==1)
            ss<< " " << barco->str();
        ss << " | ";
        for (int i=0; i<3; ++i)
            ss << strPersonagem(lado[1][i]);
        return ss.str();
    }
};

int main() {
    TravessiaDoRio t;
    
    cout << t.str() << endl;
    t.embarca(CABRA);
    cout << t.str() << endl;
    t.atravessaBarco();
    cout << t.str() << endl;
    t.desembarca(CABRA);
    cout << t.str() << endl;
    t.atravessaBarco();
    cout << t.str() << endl;
    t.embarca(REPOLHO);
    cout << t.str() << endl;
    t.atravessaBarco();
    cout << t.str() << endl;
    t.embarca(CABRA);
    t.desembarca(REPOLHO);
    cout << t.str() << endl;
    t.atravessaBarco();
    cout << t.str() << endl;
    t.embarca(LOBO);
    t.desembarca(CABRA);
    cout << t.str() << endl;
    t.atravessaBarco();
    cout << t.str() << endl;
    t.desembarca(LOBO);
    cout << t.str() << endl;
    t.atravessaBarco();
    cout << t.str() << endl;
    t.embarca(CABRA);
    cout << t.str() << endl;
    t.atravessaBarco();
    cout << t.str() << endl;
    t.desembarca(CABRA);
    cout << t.str() << endl;
    cout << (t.resolvido()?"OK":"ERRO") << endl;
    return 0;
}
