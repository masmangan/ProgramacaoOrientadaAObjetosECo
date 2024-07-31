// Arquivo: Relogio.h (Roland Teodorowitsch; 25 mar. 2019)

#ifndef _RELOGIO_H_
#define _RELOGIO_H_

using namespace std;

class Relogio {

  private:
    int hor;
    int min;
    int seg;

  public:
    Relogio(int h=0,int m=0,int s=0);
    ~Relogio();
    void defineHora(int h,int m,int s);
    void obtemHora(int *h,int *m,int *s);
    void avancaUmSeg();
    void mostra();
};

#endif
