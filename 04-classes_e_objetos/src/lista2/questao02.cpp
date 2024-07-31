// questao02.cpp (Roland Teodorowitsch; 19 ago. 2021)

#include <iostream>

using namespace std;

class Televisor {
private:
    int volumeMaximo;
    int volume;
    int menorCanal;
    int maiorCanal;
    int canal;
public:
    Televisor(int vM=20, int menC=1, int maiC=99);
    ~Televisor();
    void aumentaVolume();
    void diminuiVolume();
    void aumentaCanal();
    void diminuiCanal();
    bool selecionaCanal(int c);
    int obtemVolumeMaximo();
    int obtemVolume();
    int obtemMenorCanal();
    int obtemMaiorCanal();
    int obtemCanal();
};


Televisor::Televisor(int vM, int menC, int maiC) {
    volumeMaximo = vM;
    volume = 0;
    menorCanal = menC;
    maiorCanal = maiC;
    canal = menC;
    //cout << "+ Televisor 0-" << volumeMaximo << "V/" << menorCanal << "-" << maiorCanal << "C criado..." << endl;
}

Televisor::~Televisor() {
    //cout << "+ Televisor 0-" << volumeMaximo << "V/" << menorCanal << "-" << maiorCanal << "C destruído..." << endl;
}

void Televisor::aumentaVolume() {
    if (volume < volumeMaximo)
        ++volume;
}

void Televisor::diminuiVolume() {
    if (volume > 0)
        --volume;
}

void Televisor::aumentaCanal() {
    ++canal;
    if (canal > maiorCanal)
        canal = menorCanal;
}

void Televisor::diminuiCanal() {
    --canal;
    if (canal < menorCanal)
        canal = maiorCanal;
}

bool Televisor::selecionaCanal(int c) {
    if (c<menorCanal || c>maiorCanal)
        return false;
    canal = c;
    return true;
}

int Televisor::obtemVolumeMaximo() {
    return volumeMaximo;
}

int Televisor::obtemVolume() {
    return volume;
}

int Televisor::obtemMenorCanal() {
    return menorCanal;
}

int Televisor::obtemMaiorCanal() {
    return maiorCanal;
}

int Televisor::obtemCanal() {
    return canal;
}

int main() {
    int vM, menC, maiC;
    cin >> vM >> menC >> maiC;
    Televisor *t = new Televisor(vM,menC,maiC);
    int trocas = 0, c;
    string cmd;
    while (true) {
        cin >> cmd;
        if (cmd == ">")
            t->aumentaVolume();
        else if  (cmd == "<")
            t->diminuiVolume();
        else if (cmd == "^") {
            t->aumentaCanal();
            ++trocas;
        }
        else if (cmd == "v") {
            t->diminuiCanal();
            ++trocas;
        }
        else if (cmd == "c") {
            cin >> c;
            if (t->selecionaCanal(c))
                ++trocas;
        }
        else if (cmd == ".")
            break;
        else
            cerr << "COMANDO DESCONHECIDO" << endl;
    }
    cout << "VOLUME =          " << t->obtemVolume() << endl;
    cout << "CANAL  =          " << t->obtemCanal() << endl;
    cout << "TROCAS DE CANAL = " << trocas << endl;
    delete t;
    return 0;
}
